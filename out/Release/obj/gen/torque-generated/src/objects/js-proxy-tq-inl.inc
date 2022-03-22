template<class D, class P>
HeapObject TorqueGeneratedJSProxy<D, P>::target() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSProxy::target(cage_base);
}

template<class D, class P>
HeapObject TorqueGeneratedJSProxy<D, P>::target(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kTargetOffset);
  DCHECK(value.IsJSReceiver() || value.IsNull());
  return value;
}

template<class D, class P>
void TorqueGeneratedJSProxy<D, P>::set_target(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsNull());
  WRITE_FIELD(*this, kTargetOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kTargetOffset, value, mode);
}

template<class D, class P>
HeapObject TorqueGeneratedJSProxy<D, P>::handler() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSProxy::handler(cage_base);
}

template<class D, class P>
HeapObject TorqueGeneratedJSProxy<D, P>::handler(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kHandlerOffset);
  DCHECK(value.IsJSReceiver() || value.IsNull());
  return value;
}

template<class D, class P>
void TorqueGeneratedJSProxy<D, P>::set_handler(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsNull());
  WRITE_FIELD(*this, kHandlerOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kHandlerOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSProxy<D, P>::TorqueGeneratedJSProxy(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsJSProxy_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSProxy<D, P>::TorqueGeneratedJSProxy(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSProxy_NonInline(*this));
}
template<class D, class P>
Object TorqueGeneratedJSProxyRevocableResult<D, P>::proxy() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSProxyRevocableResult::proxy(cage_base);
}

template<class D, class P>
Object TorqueGeneratedJSProxyRevocableResult<D, P>::proxy(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kProxyOffset);
  DCHECK(value.IsJSReceiver() || value.IsSmi() || value.IsHeapNumber() || value.IsBigInt() || value.IsString() || value.IsSymbol() || value.IsTrue() || value.IsFalse() || value.IsNull() || value.IsUndefined());
  return value;
}

template<class D, class P>
void TorqueGeneratedJSProxyRevocableResult<D, P>::set_proxy(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsSmi() || value.IsHeapNumber() || value.IsBigInt() || value.IsString() || value.IsSymbol() || value.IsTrue() || value.IsFalse() || value.IsNull() || value.IsUndefined());
  WRITE_FIELD(*this, kProxyOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kProxyOffset, value, mode);
}

template<class D, class P>
Object TorqueGeneratedJSProxyRevocableResult<D, P>::revoke() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSProxyRevocableResult::revoke(cage_base);
}

template<class D, class P>
Object TorqueGeneratedJSProxyRevocableResult<D, P>::revoke(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kRevokeOffset);
  DCHECK(value.IsJSReceiver() || value.IsSmi() || value.IsHeapNumber() || value.IsBigInt() || value.IsString() || value.IsSymbol() || value.IsTrue() || value.IsFalse() || value.IsNull() || value.IsUndefined());
  return value;
}

template<class D, class P>
void TorqueGeneratedJSProxyRevocableResult<D, P>::set_revoke(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsSmi() || value.IsHeapNumber() || value.IsBigInt() || value.IsString() || value.IsSymbol() || value.IsTrue() || value.IsFalse() || value.IsNull() || value.IsUndefined());
  WRITE_FIELD(*this, kRevokeOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kRevokeOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSProxyRevocableResult<D, P>::TorqueGeneratedJSProxyRevocableResult(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsJSObject_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSProxyRevocableResult<D, P>::TorqueGeneratedJSProxyRevocableResult(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSObject_NonInline(*this));
}
