cmd_/tmp/usr/ports/www/node/work/node-v17.0.1/out/Release/obj.target/libnode/src/signal_wrap.o := c++ -o /tmp/usr/ports/www/node/work/node-v17.0.1/out/Release/obj.target/libnode/src/signal_wrap.o ../src/signal_wrap.cc '-DV8_DEPRECATION_WARNINGS' '-DV8_IMMINENT_DEPRECATION_WARNINGS' '-D_GLIBCXX_USE_CXX11_ABI=1' '-DNODE_OPENSSL_HAS_QUIC' '-D__STDC_FORMAT_MACROS' '-DOPENSSL_NO_PINSHARED' '-DOPENSSL_THREADS' '-DNODE_ARCH="x64"' '-DNODE_PLATFORM="freebsd"' '-DNODE_WANT_INTERNALS=1' '-DV8_DEPRECATION_WARNINGS=1' '-DNODE_OPENSSL_SYSTEM_CERT_PATH=""' '-DHAVE_INSPECTOR=1' '-DHAVE_DTRACE=1' '-DNODE_ENABLE_LARGE_CODE_PAGES=1' '-D__POSIX__' '-DNODE_USE_V8_PLATFORM=1' '-DNODE_HAVE_I18N_SUPPORT=1' '-DHAVE_OPENSSL=1' '-DOPENSSL_API_COMPAT=0x10100000L' '-DNDEBUG' '-DL_ENDIAN' '-DOPENSSL_BUILDING_OPENSSL' '-DAES_ASM' '-DBSAES_ASM' '-DCMLL_ASM' '-DECP_NISTZ256_ASM' '-DGHASH_ASM' '-DKECCAK1600_ASM' '-DMD5_ASM' '-DOPENSSL_BN_ASM_GF2m' '-DOPENSSL_BN_ASM_MONT' '-DOPENSSL_BN_ASM_MONT5' '-DOPENSSL_CPUID_OBJ' '-DOPENSSL_IA32_SSE2' '-DPADLOCK_ASM' '-DPOLY1305_ASM' '-DSHA1_ASM' '-DSHA256_ASM' '-DSHA512_ASM' '-DVPAES_ASM' '-DWHIRLPOOL_ASM' '-DX25519_ASM' '-DOPENSSL_PIC' '-DNGTCP2_STATICLIB' '-DNGHTTP3_STATICLIB' -I/usr/local/include -I../src -I/tmp/usr/ports/www/node/work/node-v17.0.1/out/Release/obj/gen -I/tmp/usr/ports/www/node/work/node-v17.0.1/out/Release/obj/gen/include -I/tmp/usr/ports/www/node/work/node-v17.0.1/out/Release/obj/gen/src -I../deps/googletest/include -I../deps/histogram/src -I../deps/uvwasi/include -I../deps/v8/include -I../deps/llhttp/include -I../deps/openssl/openssl/include -I../deps/openssl/openssl/crypto/include -I../deps/openssl/config/archs/BSD-x86_64/asm_avx2/include -I../deps/openssl/config/archs/BSD-x86_64/asm_avx2 -I../deps/ngtcp2 -I../deps/ngtcp2/ngtcp2/lib/includes -I../deps/ngtcp2/ngtcp2/crypto/includes -I../deps/ngtcp2/nghttp3/lib/includes  -Wall -Wextra -Wno-unused-parameter -pthread -Wall -Wextra -Wno-unused-parameter -m64 -O3 -fno-omit-frame-pointer -fno-rtti -fno-exceptions -std=gnu++17 -MMD -MF /tmp/usr/ports/www/node/work/node-v17.0.1/out/Release/.deps//tmp/usr/ports/www/node/work/node-v17.0.1/out/Release/obj.target/libnode/src/signal_wrap.o.d.raw   -c
/tmp/usr/ports/www/node/work/node-v17.0.1/out/Release/obj.target/libnode/src/signal_wrap.o: \
  ../src/signal_wrap.cc ../src/async_wrap-inl.h ../src/async_wrap.h \
  ../src/base_object.h ../src/memory_tracker.h ../src/aliased_buffer.h \
  ../src/util-inl.h ../src/util.h ../deps/v8/include/v8.h \
  ../deps/v8/include/cppgc/common.h ../deps/v8/include/v8config.h \
  ../deps/v8/include/v8-array-buffer.h \
  ../deps/v8/include/v8-local-handle.h ../deps/v8/include/v8-internal.h \
  ../deps/v8/include/v8-version.h ../deps/v8/include/v8-object.h \
  ../deps/v8/include/v8-maybe.h \
  ../deps/v8/include/v8-persistent-handle.h \
  ../deps/v8/include/v8-weak-callback-info.h \
  ../deps/v8/include/v8-primitive.h ../deps/v8/include/v8-data.h \
  ../deps/v8/include/v8-value.h ../deps/v8/include/v8-traced-handle.h \
  ../deps/v8/include/v8-container.h ../deps/v8/include/v8-context.h \
  ../deps/v8/include/v8-snapshot.h ../deps/v8/include/v8-date.h \
  ../deps/v8/include/v8-debug.h ../deps/v8/include/v8-exception.h \
  ../deps/v8/include/v8-extension.h ../deps/v8/include/v8-external.h \
  ../deps/v8/include/v8-function.h \
  ../deps/v8/include/v8-function-callback.h \
  ../deps/v8/include/v8-message.h ../deps/v8/include/v8-template.h \
  ../deps/v8/include/v8-memory-span.h \
  ../deps/v8/include/v8-initialization.h ../deps/v8/include/v8-isolate.h \
  ../deps/v8/include/v8-callbacks.h \
  ../deps/v8/include/v8-embedder-heap.h \
  ../deps/v8/include/v8-microtask.h ../deps/v8/include/v8-statistics.h \
  ../deps/v8/include/v8-promise.h ../deps/v8/include/v8-unwinder.h \
  ../deps/v8/include/v8-platform.h ../deps/v8/include/v8-json.h \
  ../deps/v8/include/v8-locker.h ../deps/v8/include/v8-microtask-queue.h \
  ../deps/v8/include/v8-primitive-object.h ../deps/v8/include/v8-proxy.h \
  ../deps/v8/include/v8-regexp.h ../deps/v8/include/v8-script.h \
  ../deps/v8/include/v8-typed-array.h \
  ../deps/v8/include/v8-value-serializer.h ../deps/v8/include/v8-wasm.h \
  ../deps/v8/include/v8-profiler.h /usr/local/include/uv.h \
  /usr/local/include/uv/errno.h /usr/local/include/uv/version.h \
  /usr/local/include/uv/unix.h /usr/local/include/uv/threadpool.h \
  /usr/local/include/uv/bsd.h ../src/base_object-inl.h ../src/env-inl.h \
  ../src/allocated_buffer-inl.h ../src/allocated_buffer.h ../src/env.h \
  ../src/inspector_agent.h ../src/node_options.h ../src/node_constants.h \
  ../src/node.h ../src/node_version.h ../src/node_mutex.h \
  ../deps/openssl/openssl/include/openssl/opensslv.h \
  ../deps/openssl/openssl/include/openssl/../../../config/opensslv.h \
  ../deps/openssl/openssl/include/openssl/../../../config/./opensslv_asm.h \
  ../deps/openssl/openssl/include/openssl/../../../config/./archs/BSD-x86_64/asm/include/openssl/opensslv.h \
  ../deps/openssl/openssl/include/openssl/macros.h \
  ../deps/openssl/openssl/include/openssl/opensslconf.h \
  ../deps/openssl/openssl/include/openssl/configuration.h \
  ../deps/openssl/openssl/include/openssl/../../../config/configuration.h \
  ../deps/openssl/openssl/include/openssl/../../../config/./configuration_asm.h \
  ../deps/openssl/openssl/include/openssl/../../../config/./archs/BSD-x86_64/asm/include/openssl/configuration.h \
  ../src/inspector_profiler.h ../src/callback_queue.h \
  ../src/debug_utils.h ../src/handle_wrap.h ../src/node_binding.h \
  ../src/node_api.h ../src/js_native_api.h ../src/js_native_api_types.h \
  ../src/node_api_types.h ../src/node_main_instance.h \
  ../src/node_perf_common.h ../src/node_snapshotable.h ../src/req_wrap.h \
  ../src/node_buffer.h ../src/node_internals.h \
  ../src/tracing/trace_event.h ../src/tracing/agent.h \
  ../deps/v8/include/libplatform/v8-tracing.h \
  ../deps/v8/include/libplatform/libplatform-export.h \
  ../src/tracing/trace_event_common.h ../src/callback_queue-inl.h \
  ../src/node_context_data.h ../src/node_external_reference.h \
  ../src/node_process-inl.h ../src/node_process.h \
  ../src/debug_utils-inl.h
../src/signal_wrap.cc:
../src/async_wrap-inl.h:
../src/async_wrap.h:
../src/base_object.h:
../src/memory_tracker.h:
../src/aliased_buffer.h:
../src/util-inl.h:
../src/util.h:
../deps/v8/include/v8.h:
../deps/v8/include/cppgc/common.h:
../deps/v8/include/v8config.h:
../deps/v8/include/v8-array-buffer.h:
../deps/v8/include/v8-local-handle.h:
../deps/v8/include/v8-internal.h:
../deps/v8/include/v8-version.h:
../deps/v8/include/v8-object.h:
../deps/v8/include/v8-maybe.h:
../deps/v8/include/v8-persistent-handle.h:
../deps/v8/include/v8-weak-callback-info.h:
../deps/v8/include/v8-primitive.h:
../deps/v8/include/v8-data.h:
../deps/v8/include/v8-value.h:
../deps/v8/include/v8-traced-handle.h:
../deps/v8/include/v8-container.h:
../deps/v8/include/v8-context.h:
../deps/v8/include/v8-snapshot.h:
../deps/v8/include/v8-date.h:
../deps/v8/include/v8-debug.h:
../deps/v8/include/v8-exception.h:
../deps/v8/include/v8-extension.h:
../deps/v8/include/v8-external.h:
../deps/v8/include/v8-function.h:
../deps/v8/include/v8-function-callback.h:
../deps/v8/include/v8-message.h:
../deps/v8/include/v8-template.h:
../deps/v8/include/v8-memory-span.h:
../deps/v8/include/v8-initialization.h:
../deps/v8/include/v8-isolate.h:
../deps/v8/include/v8-callbacks.h:
../deps/v8/include/v8-embedder-heap.h:
../deps/v8/include/v8-microtask.h:
../deps/v8/include/v8-statistics.h:
../deps/v8/include/v8-promise.h:
../deps/v8/include/v8-unwinder.h:
../deps/v8/include/v8-platform.h:
../deps/v8/include/v8-json.h:
../deps/v8/include/v8-locker.h:
../deps/v8/include/v8-microtask-queue.h:
../deps/v8/include/v8-primitive-object.h:
../deps/v8/include/v8-proxy.h:
../deps/v8/include/v8-regexp.h:
../deps/v8/include/v8-script.h:
../deps/v8/include/v8-typed-array.h:
../deps/v8/include/v8-value-serializer.h:
../deps/v8/include/v8-wasm.h:
../deps/v8/include/v8-profiler.h:
/usr/local/include/uv.h:
/usr/local/include/uv/errno.h:
/usr/local/include/uv/version.h:
/usr/local/include/uv/unix.h:
/usr/local/include/uv/threadpool.h:
/usr/local/include/uv/bsd.h:
../src/base_object-inl.h:
../src/env-inl.h:
../src/allocated_buffer-inl.h:
../src/allocated_buffer.h:
../src/env.h:
../src/inspector_agent.h:
../src/node_options.h:
../src/node_constants.h:
../src/node.h:
../src/node_version.h:
../src/node_mutex.h:
../deps/openssl/openssl/include/openssl/opensslv.h:
../deps/openssl/openssl/include/openssl/../../../config/opensslv.h:
../deps/openssl/openssl/include/openssl/../../../config/./opensslv_asm.h:
../deps/openssl/openssl/include/openssl/../../../config/./archs/BSD-x86_64/asm/include/openssl/opensslv.h:
../deps/openssl/openssl/include/openssl/macros.h:
../deps/openssl/openssl/include/openssl/opensslconf.h:
../deps/openssl/openssl/include/openssl/configuration.h:
../deps/openssl/openssl/include/openssl/../../../config/configuration.h:
../deps/openssl/openssl/include/openssl/../../../config/./configuration_asm.h:
../deps/openssl/openssl/include/openssl/../../../config/./archs/BSD-x86_64/asm/include/openssl/configuration.h:
../src/inspector_profiler.h:
../src/callback_queue.h:
../src/debug_utils.h:
../src/handle_wrap.h:
../src/node_binding.h:
../src/node_api.h:
../src/js_native_api.h:
../src/js_native_api_types.h:
../src/node_api_types.h:
../src/node_main_instance.h:
../src/node_perf_common.h:
../src/node_snapshotable.h:
../src/req_wrap.h:
../src/node_buffer.h:
../src/node_internals.h:
../src/tracing/trace_event.h:
../src/tracing/agent.h:
../deps/v8/include/libplatform/v8-tracing.h:
../deps/v8/include/libplatform/libplatform-export.h:
../src/tracing/trace_event_common.h:
../src/callback_queue-inl.h:
../src/node_context_data.h:
../src/node_external_reference.h:
../src/node_process-inl.h:
../src/node_process.h:
../src/debug_utils-inl.h:
