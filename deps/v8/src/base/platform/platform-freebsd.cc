// Copyright 2012 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Platform-specific code for FreeBSD goes here. For the POSIX-compatible
// parts, the implementation is in platform-posix.cc.

#include <pthread.h>
#include <pthread_np.h>
#include <semaphore.h>
#include <signal.h>
#include <stdlib.h>
#include <sys/resource.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/ucontext.h>
#include <sys/user.h>

#include <sys/fcntl.h>  // open
#include <sys/mman.h>   // mmap & munmap
#include <sys/stat.h>   // open
#include <sys/sysctl.h>
#include <unistd.h>     // getpagesize
// If you don't have execinfo.h then you need devel/libexecinfo from ports.
#include <errno.h>
#include <limits.h>
#include <stdarg.h>
#include <strings.h>    // index

#include <cmath>

#undef MAP_TYPE

#include "src/base/macros.h"
#include "src/base/platform/platform-posix-time.h"
#include "src/base/platform/platform-posix.h"
#include "src/base/platform/platform.h"

namespace v8 {
namespace base {

TimezoneCache* OS::CreateTimezoneCache() {
  return new PosixDefaultTimezoneCache();
}

static unsigned StringToLong(char* buffer) {
  return static_cast<unsigned>(strtol(buffer, nullptr, 16));
}

std::vector<OS::SharedLibraryAddress> OS::GetSharedLibraryAddresses() {
  std::vector<SharedLibraryAddress> result;
  int mib[4] = {CTL_KERN, KERN_PROC, KERN_PROC_VMMAP, getpid()};
  size_t miblen = sizeof(mib) / sizeof(mib[0]);
  size_t buffer_size;
  if (sysctl(mib, miblen, nullptr, &buffer_size, nullptr, 0) == 0) {
    // Overallocate the buffer by 1/3 to account for concurrent
    // kinfo_vmentry change. 1/3 is an arbitrary constant that
    // works in practice.
    buffer_size = buffer_size * 4 / 3;
    std::vector<char> buffer(buffer_size);
    int ret = sysctl(mib, miblen, buffer.data(), &buffer_size, nullptr, 0);

    if (ret == 0 || (ret == -1 && errno == ENOMEM)) {
      char* start = buffer.data();
      char* end = start + buffer_size;

      while (start < end) {
        struct kinfo_vmentry* map =
            reinterpret_cast<struct kinfo_vmentry*>(start);
        const size_t ssize = map->kve_structsize;
        char* path = map->kve_path;

        CHECK_NE(0, ssize);

        if ((map->kve_protection & KVME_PROT_READ) != 0 &&
            (map->kve_protection & KVME_PROT_EXEC) != 0 && path[0] != '\0') {
          char* sep = strrchr(path, '/');
          std::string lib_name;
          if (sep != nullptr) {
            lib_name = std::string(++sep);
          } else {
            lib_name = std::string(path);
          }
          result.push_back(SharedLibraryAddress(
              lib_name, static_cast<uintptr_t>(map->kve_start),
              static_cast<uintptr_t>(map->kve_end)));
        }

        start += ssize;
      }
    }
  }
  return result;
}

void OS::SignalCodeMovingGC() {}

#ifdef __arm__

bool OS::ArmUsingHardFloat() {
// GCC versions 4.6 and above define __ARM_PCS or __ARM_PCS_VFP to specify
// the Floating Point ABI used (PCS stands for Procedure Call Standard).
// We use these as well as a couple of other defines to statically determine
// what FP ABI used.
// GCC versions 4.4 and below don't support hard-fp.
// GCC versions 4.5 may support hard-fp without defining __ARM_PCS or
// __ARM_PCS_VFP.

#define GCC_VERSION \
  (__GNUC__ * 10000 + __GNUC_MINOR__ * 100 + __GNUC_PATCHLEVEL__)
#if GCC_VERSION >= 40600 && !defined(__clang__)
#if defined(__ARM_PCS_VFP)
  return true;
#else
  return false;
#endif

#elif GCC_VERSION < 40500 && !defined(__clang__)
  return false;

#else
#if defined(__ARM_PCS_VFP)
  return true;
#elif defined(__ARM_PCS) || defined(__SOFTFP__) || defined(__SOFTFP) || \
    !defined(__VFP_FP__)
  return false;
#else
#error \
    "Your version of compiler does not report the FP ABI compiled for."     \
       "Please report it on this issue"                                        \
       "http://code.google.com/p/v8/issues/detail?id=2140"

#endif
#endif
#undef GCC_VERSION
}

#endif // def __arm__

void OS::AdjustSchedulingParams() {}

// static
Stack::StackSlot Stack::GetStackStart() {
  pthread_attr_t attr;
  int error;
  pthread_attr_init(&attr);
  error = pthread_attr_get_np(pthread_self(), &attr);
  if (!error) {
    void* base;
    size_t size;
    error = pthread_attr_getstack(&attr, &base, &size);
    CHECK(!error);
    pthread_attr_destroy(&attr);
    return reinterpret_cast<uint8_t*>(base) + size;
  }
  pthread_attr_destroy(&attr);
  return nullptr;
}

}  // namespace base
}  // namespace v8
