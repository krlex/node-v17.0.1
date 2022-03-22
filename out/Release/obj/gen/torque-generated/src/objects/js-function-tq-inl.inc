template<class D, class P>
inline TorqueGeneratedJSFunctionOrBoundFunction<D, P>::TorqueGeneratedJSFunctionOrBoundFunction(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsJSFunctionOrBoundFunction_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSFunctionOrBoundFunction<D, P>::TorqueGeneratedJSFunctionOrBoundFunction(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSFunctionOrBoundFunction_NonInline(*this));
}
template<class D, class P>
SharedFunctionInfo TorqueGeneratedJSFunction<D, P>::shared_function_info() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSFunction::shared_function_info(cage_base);
}

template<class D, class P>
SharedFunctionInfo TorqueGeneratedJSFunction<D, P>::shared_function_info(PtrComprCageBase cage_base) const {
  SharedFunctionInfo value;
  value = TaggedField<SharedFunctionInfo>::load(cage_base, *this, kSharedFunctionInfoOffset);
  DCHECK(value.IsSharedFunctionInfo());
  return value;
}

template<class D, class P>
void TorqueGeneratedJSFunction<D, P>::set_shared_function_info(SharedFunctionInfo value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSharedFunctionInfo());
  WRITE_FIELD(*this, kSharedFunctionInfoOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSharedFunctionInfoOffset, value, mode);
}

template<class D, class P>
Context TorqueGeneratedJSFunction<D, P>::context() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSFunction::context(cage_base);
}

template<class D, class P>
Context TorqueGeneratedJSFunction<D, P>::context(PtrComprCageBase cage_base) const {
  Context value;
  value = TaggedField<Context>::load(cage_base, *this, kContextOffset);
  DCHECK(value.IsContext());
  return value;
}

template<class D, class P>
void TorqueGeneratedJSFunction<D, P>::set_context(Context value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsContext());
  WRITE_FIELD(*this, kContextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kContextOffset, value, mode);
}

template<class D, class P>
FeedbackCell TorqueGeneratedJSFunction<D, P>::feedback_cell() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSFunction::feedback_cell(cage_base);
}

template<class D, class P>
FeedbackCell TorqueGeneratedJSFunction<D, P>::feedback_cell(PtrComprCageBase cage_base) const {
  FeedbackCell value;
  value = TaggedField<FeedbackCell>::load(cage_base, *this, kFeedbackCellOffset);
  DCHECK(value.IsFeedbackCell());
  return value;
}

template<class D, class P>
void TorqueGeneratedJSFunction<D, P>::set_feedback_cell(FeedbackCell value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFeedbackCell());
  WRITE_FIELD(*this, kFeedbackCellOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kFeedbackCellOffset, value, mode);
}

template<class D, class P>
Code TorqueGeneratedJSFunction<D, P>::code() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSFunction::code(cage_base);
}

template<class D, class P>
Code TorqueGeneratedJSFunction<D, P>::code(PtrComprCageBase cage_base) const {
  Code value;
  value = TaggedField<Code>::load(cage_base, *this, kCodeOffset);
  DCHECK(value.IsCode());
  return value;
}

template<class D, class P>
void TorqueGeneratedJSFunction<D, P>::set_code(Code value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsCode());
  WRITE_FIELD(*this, kCodeOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCodeOffset, value, mode);
}

template<class D, class P>
HeapObject TorqueGeneratedJSFunction<D, P>::prototype_or_initial_map() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSFunction::prototype_or_initial_map(cage_base);
}

template<class D, class P>
HeapObject TorqueGeneratedJSFunction<D, P>::prototype_or_initial_map(PtrComprCageBase cage_base) const {
  HeapObject value;
  value = TaggedField<HeapObject>::load(cage_base, *this, kPrototypeOrInitialMapOffset);
  DCHECK(value.IsJSReceiver() || value.IsMap());
  return value;
}

template<class D, class P>
void TorqueGeneratedJSFunction<D, P>::set_prototype_or_initial_map(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsMap());
  WRITE_FIELD(*this, kPrototypeOrInitialMapOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPrototypeOrInitialMapOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSFunction<D, P>::TorqueGeneratedJSFunction(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsJSFunction_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSFunction<D, P>::TorqueGeneratedJSFunction(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSFunction_NonInline(*this));
}
template<class D, class P>
JSReceiver TorqueGeneratedJSBoundFunction<D, P>::bound_target_function() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSBoundFunction::bound_target_function(cage_base);
}

template<class D, class P>
JSReceiver TorqueGeneratedJSBoundFunction<D, P>::bound_target_function(PtrComprCageBase cage_base) const {
  JSReceiver value;
  value = TaggedField<JSReceiver>::load(cage_base, *this, kBoundTargetFunctionOffset);
  DCHECK(value.IsCallableApiObject() || value.IsCallableJSProxy() || value.IsJSFunction() || value.IsJSBoundFunction());
  return value;
}

template<class D, class P>
void TorqueGeneratedJSBoundFunction<D, P>::set_bound_target_function(JSReceiver value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsCallableApiObject() || value.IsCallableJSProxy() || value.IsJSFunction() || value.IsJSBoundFunction());
  WRITE_FIELD(*this, kBoundTargetFunctionOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBoundTargetFunctionOffset, value, mode);
}

template<class D, class P>
Object TorqueGeneratedJSBoundFunction<D, P>::bound_this() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSBoundFunction::bound_this(cage_base);
}

template<class D, class P>
Object TorqueGeneratedJSBoundFunction<D, P>::bound_this(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kBoundThisOffset);
  DCHECK(value.IsJSReceiver() || value.IsSmi() || value.IsHeapNumber() || value.IsBigInt() || value.IsString() || value.IsSymbol() || value.IsTrue() || value.IsFalse() || value.IsNull() || value.IsUndefined() || value.IsSourceTextModule());
  return value;
}

template<class D, class P>
void TorqueGeneratedJSBoundFunction<D, P>::set_bound_this(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsSmi() || value.IsHeapNumber() || value.IsBigInt() || value.IsString() || value.IsSymbol() || value.IsTrue() || value.IsFalse() || value.IsNull() || value.IsUndefined() || value.IsSourceTextModule());
  WRITE_FIELD(*this, kBoundThisOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBoundThisOffset, value, mode);
}

template<class D, class P>
FixedArray TorqueGeneratedJSBoundFunction<D, P>::bound_arguments() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSBoundFunction::bound_arguments(cage_base);
}

template<class D, class P>
FixedArray TorqueGeneratedJSBoundFunction<D, P>::bound_arguments(PtrComprCageBase cage_base) const {
  FixedArray value;
  value = TaggedField<FixedArray>::load(cage_base, *this, kBoundArgumentsOffset);
  DCHECK(value.IsFixedArray());
  return value;
}

template<class D, class P>
void TorqueGeneratedJSBoundFunction<D, P>::set_bound_arguments(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kBoundArgumentsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBoundArgumentsOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSBoundFunction<D, P>::TorqueGeneratedJSBoundFunction(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsJSBoundFunction_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSBoundFunction<D, P>::TorqueGeneratedJSBoundFunction(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSBoundFunction_NonInline(*this));
}
