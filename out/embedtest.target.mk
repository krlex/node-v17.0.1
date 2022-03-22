# This file is generated by gyp; do not edit.

TOOLSET := target
TARGET := embedtest
DEFS_Debug := \
	'-DV8_DEPRECATION_WARNINGS' \
	'-DV8_IMMINENT_DEPRECATION_WARNINGS' \
	'-D_GLIBCXX_USE_CXX11_ABI=1' \
	'-DNODE_OPENSSL_HAS_QUIC' \
	'-D__STDC_FORMAT_MACROS' \
	'-DOPENSSL_NO_PINSHARED' \
	'-DOPENSSL_THREADS' \
	'-D__POSIX__' \
	'-DNODE_USE_V8_PLATFORM=1' \
	'-DNODE_HAVE_I18N_SUPPORT=1' \
	'-DHAVE_OPENSSL=1' \
	'-DOPENSSL_API_COMPAT=0x10100000L' \
	'-DNDEBUG' \
	'-DL_ENDIAN' \
	'-DOPENSSL_BUILDING_OPENSSL' \
	'-DAES_ASM' \
	'-DBSAES_ASM' \
	'-DCMLL_ASM' \
	'-DECP_NISTZ256_ASM' \
	'-DGHASH_ASM' \
	'-DKECCAK1600_ASM' \
	'-DMD5_ASM' \
	'-DOPENSSL_BN_ASM_GF2m' \
	'-DOPENSSL_BN_ASM_MONT' \
	'-DOPENSSL_BN_ASM_MONT5' \
	'-DOPENSSL_CPUID_OBJ' \
	'-DOPENSSL_IA32_SSE2' \
	'-DPADLOCK_ASM' \
	'-DPOLY1305_ASM' \
	'-DSHA1_ASM' \
	'-DSHA256_ASM' \
	'-DSHA512_ASM' \
	'-DVPAES_ASM' \
	'-DWHIRLPOOL_ASM' \
	'-DX25519_ASM' \
	'-DOPENSSL_PIC' \
	'-DNGTCP2_STATICLIB' \
	'-DNGHTTP3_STATICLIB' \
	'-DDEBUG' \
	'-D_DEBUG' \
	'-DV8_ENABLE_CHECKS'

# Flags passed to all source files.
CFLAGS_Debug := \
	-Wall \
	-Wextra \
	-Wno-unused-parameter \
	-pthread \
	-Wall \
	-Wextra \
	-Wno-unused-parameter \
	-m64 \
	-g \
	-O0

# Flags passed to only C files.
CFLAGS_C_Debug :=

# Flags passed to only C++ files.
CFLAGS_CC_Debug := \
	-fno-rtti \
	-fno-exceptions \
	-std=gnu++17

INCS_Debug := \
	-I/usr/local/include \
	-I$(srcdir)/src \
	-I$(srcdir)/tools/msvs/genfiles \
	-I$(srcdir)/deps/v8/include \
	-I$(srcdir)/deps/cares/include \
	-I$(srcdir)/deps/uv/include \
	-I$(srcdir)/deps/uvwasi/include \
	-I$(srcdir)/test/embedding \
	-I$(srcdir)/deps/histogram/src \
	-I$(srcdir)/deps/llhttp/include \
	-I$(srcdir)/deps/openssl/openssl/include \
	-I$(srcdir)/deps/openssl/openssl/crypto/include \
	-I$(srcdir)/deps/openssl/config/archs/BSD-x86_64/asm_avx2/include \
	-I$(srcdir)/deps/openssl/config/archs/BSD-x86_64/asm_avx2 \
	-I$(srcdir)/deps/ngtcp2 \
	-I$(srcdir)/deps/ngtcp2/ngtcp2/lib/includes \
	-I$(srcdir)/deps/ngtcp2/ngtcp2/crypto/includes \
	-I$(srcdir)/deps/ngtcp2/nghttp3/lib/includes

DEFS_Release := \
	'-DV8_DEPRECATION_WARNINGS' \
	'-DV8_IMMINENT_DEPRECATION_WARNINGS' \
	'-D_GLIBCXX_USE_CXX11_ABI=1' \
	'-DNODE_OPENSSL_HAS_QUIC' \
	'-D__STDC_FORMAT_MACROS' \
	'-DOPENSSL_NO_PINSHARED' \
	'-DOPENSSL_THREADS' \
	'-D__POSIX__' \
	'-DNODE_USE_V8_PLATFORM=1' \
	'-DNODE_HAVE_I18N_SUPPORT=1' \
	'-DHAVE_OPENSSL=1' \
	'-DOPENSSL_API_COMPAT=0x10100000L' \
	'-DNDEBUG' \
	'-DL_ENDIAN' \
	'-DOPENSSL_BUILDING_OPENSSL' \
	'-DAES_ASM' \
	'-DBSAES_ASM' \
	'-DCMLL_ASM' \
	'-DECP_NISTZ256_ASM' \
	'-DGHASH_ASM' \
	'-DKECCAK1600_ASM' \
	'-DMD5_ASM' \
	'-DOPENSSL_BN_ASM_GF2m' \
	'-DOPENSSL_BN_ASM_MONT' \
	'-DOPENSSL_BN_ASM_MONT5' \
	'-DOPENSSL_CPUID_OBJ' \
	'-DOPENSSL_IA32_SSE2' \
	'-DPADLOCK_ASM' \
	'-DPOLY1305_ASM' \
	'-DSHA1_ASM' \
	'-DSHA256_ASM' \
	'-DSHA512_ASM' \
	'-DVPAES_ASM' \
	'-DWHIRLPOOL_ASM' \
	'-DX25519_ASM' \
	'-DOPENSSL_PIC' \
	'-DNGTCP2_STATICLIB' \
	'-DNGHTTP3_STATICLIB'

# Flags passed to all source files.
CFLAGS_Release := \
	-Wall \
	-Wextra \
	-Wno-unused-parameter \
	-pthread \
	-Wall \
	-Wextra \
	-Wno-unused-parameter \
	-m64 \
	-O3 \
	-fno-omit-frame-pointer

# Flags passed to only C files.
CFLAGS_C_Release :=

# Flags passed to only C++ files.
CFLAGS_CC_Release := \
	-fno-rtti \
	-fno-exceptions \
	-std=gnu++17

INCS_Release := \
	-I/usr/local/include \
	-I$(srcdir)/src \
	-I$(srcdir)/tools/msvs/genfiles \
	-I$(srcdir)/deps/v8/include \
	-I$(srcdir)/deps/cares/include \
	-I$(srcdir)/deps/uv/include \
	-I$(srcdir)/deps/uvwasi/include \
	-I$(srcdir)/test/embedding \
	-I$(srcdir)/deps/histogram/src \
	-I$(srcdir)/deps/llhttp/include \
	-I$(srcdir)/deps/openssl/openssl/include \
	-I$(srcdir)/deps/openssl/openssl/crypto/include \
	-I$(srcdir)/deps/openssl/config/archs/BSD-x86_64/asm_avx2/include \
	-I$(srcdir)/deps/openssl/config/archs/BSD-x86_64/asm_avx2 \
	-I$(srcdir)/deps/ngtcp2 \
	-I$(srcdir)/deps/ngtcp2/ngtcp2/lib/includes \
	-I$(srcdir)/deps/ngtcp2/ngtcp2/crypto/includes \
	-I$(srcdir)/deps/ngtcp2/nghttp3/lib/includes

OBJS := \
	$(obj).target/$(TARGET)/src/node_snapshot_stub.o \
	$(obj).target/$(TARGET)/src/node_code_cache_stub.o \
	$(obj).target/$(TARGET)/test/embedding/embedtest.o

# Add to the list of files we specially track dependencies for.
all_deps += $(OBJS)

# Make sure our dependencies are built before any of us.
$(OBJS): | $(obj).target/libnode.a $(obj).target/deps/histogram/libhistogram.a $(obj).target/deps/uvwasi/libuvwasi.a $(obj).target/node_dtrace_header.stamp $(obj).target/node_dtrace_ustack.stamp $(obj).target/node_dtrace_provider.stamp $(obj).target/tools/v8_gypfiles/libv8_snapshot.a $(obj).target/tools/v8_gypfiles/libv8_libplatform.a $(obj).target/tools/icu/icui18n.stamp $(obj).target/tools/icu/icuuc.stamp $(obj).target/deps/llhttp/libllhttp.a $(obj).target/deps/openssl/libopenssl.a $(builddir)/openssl-cli $(obj).target/deps/ngtcp2/libngtcp2.a $(obj).target/deps/ngtcp2/libnghttp3.a $(obj).target/deps/googletest/gtest_prod.stamp $(obj).target/specialize_node_d.stamp $(obj).target/tools/v8_gypfiles/generate_bytecode_builtins_list.stamp $(obj).target/tools/v8_gypfiles/run_torque.stamp $(obj).target/tools/v8_gypfiles/v8_maybe_icu.stamp $(obj).target/tools/v8_gypfiles/libv8_base_without_compiler.a $(obj).target/tools/v8_gypfiles/torque_generated_definitions.stamp $(obj).target/tools/v8_gypfiles/v8_internal_headers.stamp $(obj).target/tools/v8_gypfiles/torque_runtime_support.stamp $(obj).target/tools/v8_gypfiles/v8_flags.stamp $(obj).target/tools/v8_gypfiles/v8_shared_internal_headers.stamp $(obj).target/tools/v8_gypfiles/v8_headers.stamp $(obj).target/tools/v8_gypfiles/v8_config_headers.stamp $(obj).target/tools/v8_gypfiles/cppgc_headers.stamp $(obj).target/tools/v8_gypfiles/v8_version.stamp $(obj).target/tools/v8_gypfiles/libv8_libbase.a $(obj).target/tools/v8_gypfiles/v8_bigint.stamp $(obj).target/tools/v8_gypfiles/v8_cppgc_shared.stamp $(obj).target/tools/v8_gypfiles/cppgc_base.stamp $(obj).target/tools/v8_gypfiles/libv8_zlib.a $(obj).target/tools/v8_gypfiles/run_gen-regexp-special-case.stamp $(obj).target/tools/v8_gypfiles/postmortem-metadata.stamp $(obj).target/tools/v8_gypfiles/v8_compiler_for_mksnapshot.stamp $(obj).target/tools/v8_gypfiles/libv8_compiler.a $(obj).target/tools/v8_gypfiles/libv8_initializers.a $(obj).target/tools/v8_gypfiles/torque_generated_initializers.stamp

# CFLAGS et al overrides must be target-local.
# See "Target-specific Variable Values" in the GNU Make manual.
$(OBJS): TOOLSET := $(TOOLSET)
$(OBJS): GYP_CFLAGS := $(DEFS_$(BUILDTYPE)) $(INCS_$(BUILDTYPE))  $(CFLAGS_$(BUILDTYPE)) $(CFLAGS_C_$(BUILDTYPE))
$(OBJS): GYP_CXXFLAGS := $(DEFS_$(BUILDTYPE)) $(INCS_$(BUILDTYPE))  $(CFLAGS_$(BUILDTYPE)) $(CFLAGS_CC_$(BUILDTYPE))

# Suffix rules, putting all outputs into $(obj).

$(obj).$(TOOLSET)/$(TARGET)/%.o: $(srcdir)/%.cc FORCE_DO_CMD
	@$(call do_cmd,cxx,1)

# Try building from generated source, too.

$(obj).$(TOOLSET)/$(TARGET)/%.o: $(obj).$(TOOLSET)/%.cc FORCE_DO_CMD
	@$(call do_cmd,cxx,1)

$(obj).$(TOOLSET)/$(TARGET)/%.o: $(obj)/%.cc FORCE_DO_CMD
	@$(call do_cmd,cxx,1)

# End of this set of suffix rules
### Rules for final target.
LDFLAGS_Debug := \
	-pthread \
	-rdynamic \
	-m64 \
	-Wl,--export-dynamic \
	-Wl,-z,noexecstack \
	-Wl,--whole-archive $(builddir)/obj.target/tools/v8_gypfiles/libv8_snapshot.a \
	-Wl,--no-whole-archive \
	-Wl,-z,relro \
	-Wl,-z,now \
	-Wl,--whole-archive,$(builddir)/obj.target/deps/openssl/libopenssl.a \
	-Wl,--no-whole-archive

LDFLAGS_Release := \
	-pthread \
	-rdynamic \
	-m64 \
	-Wl,--export-dynamic \
	-Wl,-z,noexecstack \
	-Wl,--whole-archive $(builddir)/obj.target/tools/v8_gypfiles/libv8_snapshot.a \
	-Wl,--no-whole-archive \
	-Wl,-z,relro \
	-Wl,-z,now \
	-Wl,--whole-archive,$(builddir)/obj.target/deps/openssl/libopenssl.a \
	-Wl,--no-whole-archive

LIBS := \
	-lz \
	-L/usr/local/lib \
	-luv \
	-lbrotlidec \
	-lbrotlienc \
	-lcares \
	-lnghttp2 \
	-licui18n \
	-licuuc \
	-licudata \
	-lelf \
	-lutil \
	-lkvm \
	-L/usr/local/lib -lexecinfo

$(builddir)/embedtest: GYP_LDFLAGS := $(LDFLAGS_$(BUILDTYPE))
$(builddir)/embedtest: LIBS := $(LIBS)
$(builddir)/embedtest: LD_INPUTS := $(OBJS) $(obj).target/libnode.a $(obj).target/deps/histogram/libhistogram.a $(obj).target/deps/uvwasi/libuvwasi.a $(obj).target/tools/v8_gypfiles/libv8_snapshot.a $(obj).target/tools/v8_gypfiles/libv8_libplatform.a $(obj).target/deps/llhttp/libllhttp.a $(obj).target/deps/openssl/libopenssl.a $(obj).target/deps/ngtcp2/libngtcp2.a $(obj).target/deps/ngtcp2/libnghttp3.a $(obj).target/tools/v8_gypfiles/libv8_base_without_compiler.a $(obj).target/tools/v8_gypfiles/libv8_libbase.a $(obj).target/tools/v8_gypfiles/libv8_zlib.a $(obj).target/tools/v8_gypfiles/libv8_compiler.a $(obj).target/tools/v8_gypfiles/libv8_initializers.a
$(builddir)/embedtest: TOOLSET := $(TOOLSET)
$(builddir)/embedtest: $(OBJS) $(obj).target/libnode.a $(obj).target/deps/histogram/libhistogram.a $(obj).target/deps/uvwasi/libuvwasi.a $(obj).target/tools/v8_gypfiles/libv8_snapshot.a $(obj).target/tools/v8_gypfiles/libv8_libplatform.a $(obj).target/deps/llhttp/libllhttp.a $(obj).target/deps/openssl/libopenssl.a $(obj).target/deps/ngtcp2/libngtcp2.a $(obj).target/deps/ngtcp2/libnghttp3.a $(obj).target/tools/v8_gypfiles/libv8_base_without_compiler.a $(obj).target/tools/v8_gypfiles/libv8_libbase.a $(obj).target/tools/v8_gypfiles/libv8_zlib.a $(obj).target/tools/v8_gypfiles/libv8_compiler.a $(obj).target/tools/v8_gypfiles/libv8_initializers.a FORCE_DO_CMD
	$(call do_cmd,link)

all_deps += $(builddir)/embedtest
# Add target alias
.PHONY: embedtest
embedtest: $(builddir)/embedtest

# Add executable to "all" target.
.PHONY: all
all: $(builddir)/embedtest

