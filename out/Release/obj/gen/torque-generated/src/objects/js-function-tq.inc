class JSFunctionOrBoundFunction;
class JSFunction;
class JSBoundFunction;
// Alias for HeapObject::IsJSFunctionOrBoundFunction() that avoids inlining.
V8_EXPORT_PRIVATE bool IsJSFunctionOrBoundFunction_NonInline(HeapObject o);
template <class D, class P>
class TorqueGeneratedJSFunctionOrBoundFunction : public P {
  static_assert(std::is_same<JSFunctionOrBoundFunction, D>::value,
    "Use this class as direct base for JSFunctionOrBoundFunction.");
  static_assert(std::is_same<JSObject, P>::value,
    "Pass in JSObject as second template parameter for TorqueGeneratedJSFunctionOrBoundFunction.");
 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSFunctionOrBoundFunction<D,P>;

V8_INLINE static D cast(Object object) {
  return D(object.ptr());
}

V8_INLINE static D unchecked_cast(Object object) {
  return bit_cast<D>(object);
}

#ifdef VERIFY_HEAP
V8_EXPORT_PRIVATE void JSFunctionOrBoundFunctionVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kHeaderSize = P::kHeaderSize;

  friend class Factory;

 public:
  template <class DAlias = D>
  constexpr TorqueGeneratedJSFunctionOrBoundFunction() : P() {
    static_assert(std::is_base_of<TorqueGeneratedJSFunctionOrBoundFunction, 
      DAlias>::value,
      "class TorqueGeneratedJSFunctionOrBoundFunction should be used as direct base for JSFunctionOrBoundFunction.");
  }
 protected:
  inline explicit TorqueGeneratedJSFunctionOrBoundFunction(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSFunctionOrBoundFunction(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsJSFunction() that avoids inlining.
V8_EXPORT_PRIVATE bool IsJSFunction_NonInline(HeapObject o);
template <class D, class P>
class TorqueGeneratedJSFunction : public P {
  static_assert(std::is_same<JSFunction, D>::value,
    "Use this class as direct base for JSFunction.");
  static_assert(std::is_same<JSFunctionOrBoundFunction, P>::value,
    "Pass in JSFunctionOrBoundFunction as second template parameter for TorqueGeneratedJSFunction.");
 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSFunction<D,P>;

inline SharedFunctionInfo shared_function_info() const;
inline SharedFunctionInfo shared_function_info(PtrComprCageBase cage_base) const;
inline void set_shared_function_info(SharedFunctionInfo value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

inline Context context() const;
inline Context context(PtrComprCageBase cage_base) const;
inline void set_context(Context value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

inline FeedbackCell feedback_cell() const;
inline FeedbackCell feedback_cell(PtrComprCageBase cage_base) const;
inline void set_feedback_cell(FeedbackCell value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

inline Code code() const;
inline Code code(PtrComprCageBase cage_base) const;
inline void set_code(Code value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (class JSReceiver | class Map)
inline HeapObject prototype_or_initial_map() const;
inline HeapObject prototype_or_initial_map(PtrComprCageBase cage_base) const;
inline void set_prototype_or_initial_map(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

V8_INLINE static D cast(Object object) {
  return D(object.ptr());
}

V8_INLINE static D unchecked_cast(Object object) {
  return bit_cast<D>(object);
}

#ifdef VERIFY_HEAP
V8_EXPORT_PRIVATE void JSFunctionVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kSharedFunctionInfoOffset = P::kHeaderSize;
  static constexpr int kSharedFunctionInfoOffsetEnd = kSharedFunctionInfoOffset + kTaggedSize - 1;
  static constexpr int kContextOffset = kSharedFunctionInfoOffsetEnd + 1;
  static constexpr int kContextOffsetEnd = kContextOffset + kTaggedSize - 1;
  static constexpr int kFeedbackCellOffset = kContextOffsetEnd + 1;
  static constexpr int kFeedbackCellOffsetEnd = kFeedbackCellOffset + kTaggedSize - 1;
  static constexpr int kCodeOffset = kFeedbackCellOffsetEnd + 1;
  static constexpr int kCodeOffsetEnd = kCodeOffset + kTaggedSize - 1;
  static constexpr int kPrototypeOrInitialMapOffset = kCodeOffsetEnd + 1;
  static constexpr int kPrototypeOrInitialMapOffsetEnd = kPrototypeOrInitialMapOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kPrototypeOrInitialMapOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kPrototypeOrInitialMapOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kPrototypeOrInitialMapOffsetEnd + 1;
  static constexpr int kHeaderSize = kPrototypeOrInitialMapOffsetEnd + 1;

  friend class Factory;

 public:
  template <class DAlias = D>
  constexpr TorqueGeneratedJSFunction() : P() {
    static_assert(std::is_base_of<TorqueGeneratedJSFunction, 
      DAlias>::value,
      "class TorqueGeneratedJSFunction should be used as direct base for JSFunction.");
  }
 protected:
  inline explicit TorqueGeneratedJSFunction(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSFunction(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsJSBoundFunction() that avoids inlining.
V8_EXPORT_PRIVATE bool IsJSBoundFunction_NonInline(HeapObject o);
template <class D, class P>
class TorqueGeneratedJSBoundFunction : public P {
  static_assert(std::is_same<JSBoundFunction, D>::value,
    "Use this class as direct base for JSBoundFunction.");
  static_assert(std::is_same<JSFunctionOrBoundFunction, P>::value,
    "Pass in JSFunctionOrBoundFunction as second template parameter for TorqueGeneratedJSBoundFunction.");
 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSBoundFunction<D,P>;

  // Torque type: Callable
inline JSReceiver bound_target_function() const;
inline JSReceiver bound_target_function(PtrComprCageBase cage_base) const;
inline void set_bound_target_function(JSReceiver value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (class JSReceiver | Smi | class HeapNumber | BigInt | class String | class Symbol | True | False | Null | Undefined | class SourceTextModule)
inline Object bound_this() const;
inline Object bound_this(PtrComprCageBase cage_base) const;
inline void set_bound_this(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

inline FixedArray bound_arguments() const;
inline FixedArray bound_arguments(PtrComprCageBase cage_base) const;
inline void set_bound_arguments(FixedArray value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

V8_INLINE static D cast(Object object) {
  return D(object.ptr());
}

V8_INLINE static D unchecked_cast(Object object) {
  return bit_cast<D>(object);
}

#ifdef VERIFY_HEAP
V8_EXPORT_PRIVATE void JSBoundFunctionVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kBoundTargetFunctionOffset = P::kHeaderSize;
  static constexpr int kBoundTargetFunctionOffsetEnd = kBoundTargetFunctionOffset + kTaggedSize - 1;
  static constexpr int kBoundThisOffset = kBoundTargetFunctionOffsetEnd + 1;
  static constexpr int kBoundThisOffsetEnd = kBoundThisOffset + kTaggedSize - 1;
  static constexpr int kBoundArgumentsOffset = kBoundThisOffsetEnd + 1;
  static constexpr int kBoundArgumentsOffsetEnd = kBoundArgumentsOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kBoundArgumentsOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kBoundArgumentsOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kBoundArgumentsOffsetEnd + 1;
  static constexpr int kHeaderSize = kBoundArgumentsOffsetEnd + 1;

  friend class Factory;

 public:
  template <class DAlias = D>
  constexpr TorqueGeneratedJSBoundFunction() : P() {
    static_assert(std::is_base_of<TorqueGeneratedJSBoundFunction, 
      DAlias>::value,
      "class TorqueGeneratedJSBoundFunction should be used as direct base for JSBoundFunction.");
  }
 protected:
  inline explicit TorqueGeneratedJSBoundFunction(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSBoundFunction(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

