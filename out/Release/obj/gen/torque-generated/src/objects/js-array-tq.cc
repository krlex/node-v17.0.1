#include "src/objects/js-array-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {
bool IsJSArrayIterator_NonInline(HeapObject o) {
  return o.IsJSArrayIterator();}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSArrayIterator<JSArrayIterator, JSObject>::JSArrayIteratorVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSArrayIteratorVerify(JSArrayIterator::cast(*this), isolate);
}
#endif  // VERIFY_HEAP
bool IsJSArray_NonInline(HeapObject o) {
  return o.IsJSArray();}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSArray<JSArray, JSObject>::JSArrayVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSArrayVerify(JSArray::cast(*this), isolate);
}
#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
