template<class D, class P>
JSReceiver TorqueGeneratedJSArrayIterator<D, P>::iterated_object() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSArrayIterator::iterated_object(cage_base);
}

template<class D, class P>
JSReceiver TorqueGeneratedJSArrayIterator<D, P>::iterated_object(PtrComprCageBase cage_base) const {
  JSReceiver value;
  value = TaggedField<JSReceiver>::load(cage_base, *this, kIteratedObjectOffset);
  DCHECK(value.IsJSReceiver());
  return value;
}

template<class D, class P>
void TorqueGeneratedJSArrayIterator<D, P>::set_iterated_object(JSReceiver value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver());
  WRITE_FIELD(*this, kIteratedObjectOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIteratedObjectOffset, value, mode);
}

template<class D, class P>
Object TorqueGeneratedJSArrayIterator<D, P>::next_index() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSArrayIterator::next_index(cage_base);
}

template<class D, class P>
Object TorqueGeneratedJSArrayIterator<D, P>::next_index(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kNextIndexOffset);
  DCHECK(value.IsSmi() || value.IsHeapNumber());
  return value;
}

template<class D, class P>
void TorqueGeneratedJSArrayIterator<D, P>::set_next_index(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapNumber());
  WRITE_FIELD(*this, kNextIndexOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNextIndexOffset, value, mode);
}

template<class D, class P>
int TorqueGeneratedJSArrayIterator<D, P>::kind() const {
  int value;
  value = TaggedField<Smi>::load(*this, kKindOffset).value();
  return value;
}

template<class D, class P>
void TorqueGeneratedJSArrayIterator<D, P>::set_kind(int value) {
  WRITE_FIELD(*this, kKindOffset, Smi::FromInt(value));
}

template<class D, class P>
inline TorqueGeneratedJSArrayIterator<D, P>::TorqueGeneratedJSArrayIterator(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsJSArrayIterator_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSArrayIterator<D, P>::TorqueGeneratedJSArrayIterator(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSArrayIterator_NonInline(*this));
}
template<class D, class P>
Object TorqueGeneratedJSArray<D, P>::length() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSArray::length(cage_base);
}

template<class D, class P>
Object TorqueGeneratedJSArray<D, P>::length(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kLengthOffset);
  DCHECK(value.IsSmi() || value.IsHeapNumber());
  return value;
}

template<class D, class P>
void TorqueGeneratedJSArray<D, P>::set_length(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapNumber());
  WRITE_FIELD(*this, kLengthOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kLengthOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSArray<D, P>::TorqueGeneratedJSArray(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsJSArray_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSArray<D, P>::TorqueGeneratedJSArray(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSArray_NonInline(*this));
}
