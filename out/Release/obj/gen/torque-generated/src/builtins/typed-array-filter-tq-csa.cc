#include "src/ast/ast.h"
#include "src/builtins/builtins-array-gen.h"
#include "src/builtins/builtins-bigint-gen.h"
#include "src/builtins/builtins-collections-gen.h"
#include "src/builtins/builtins-constructor-gen.h"
#include "src/builtins/builtins-data-view-gen.h"
#include "src/builtins/builtins-iterator-gen.h"
#include "src/builtins/builtins-promise-gen.h"
#include "src/builtins/builtins-promise.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-string-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins-wasm-gen.h"
#include "src/builtins/builtins.h"
#include "src/codegen/code-factory.h"
#include "src/debug/debug-wasm-objects.h"
#include "src/heap/factory-inl.h"
#include "src/ic/binary-op-assembler.h"
#include "src/ic/handler-configuration-inl.h"
#include "src/objects/arguments.h"
#include "src/objects/bigint.h"
#include "src/objects/elements-kind.h"
#include "src/objects/free-space.h"
#include "src/objects/js-break-iterator.h"
#include "src/objects/js-collator.h"
#include "src/objects/js-date-time-format.h"
#include "src/objects/js-display-names.h"
#include "src/objects/js-function.h"
#include "src/objects/js-generator.h"
#include "src/objects/js-list-format.h"
#include "src/objects/js-locale.h"
#include "src/objects/js-number-format.h"
#include "src/objects/js-objects.h"
#include "src/objects/js-plural-rules.h"
#include "src/objects/js-promise.h"
#include "src/objects/js-regexp-string-iterator.h"
#include "src/objects/js-relative-time-format.h"
#include "src/objects/js-segment-iterator.h"
#include "src/objects/js-segmenter.h"
#include "src/objects/js-segments.h"
#include "src/objects/js-weak-refs.h"
#include "src/objects/objects.h"
#include "src/objects/ordered-hash-table.h"
#include "src/objects/property-array.h"
#include "src/objects/property-descriptor-object.h"
#include "src/objects/source-text-module.h"
#include "src/objects/stack-frame-info.h"
#include "src/objects/swiss-hash-table-helpers.h"
#include "src/objects/swiss-name-dictionary.h"
#include "src/objects/synthetic-module.h"
#include "src/objects/template-objects.h"
#include "src/objects/torque-defined-classes.h"
#include "src/torque/runtime-support.h"
// Required Builtins:
#include "torque-generated/src/builtins/typed-array-filter-tq-csa.h"
#include "torque-generated/src/builtins/array-every-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/frame-arguments-tq-csa.h"
#include "torque-generated/src/builtins/growable-fixed-array-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-createtypedarray-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-every-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-filter-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-tq-csa.h"
#include "torque-generated/src/objects/fixed-array-tq-csa.h"
#include "torque-generated/src/objects/js-array-buffer-tq-csa.h"
#include "torque-generated/src/objects/js-array-tq-csa.h"

namespace v8 {
namespace internal {
const char* kBuiltinNameFilter_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  return "%TypedArray%.prototype.filter";}

TF_BUILTIN(TypedArrayPrototypeFilter, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Word32T> argc = UncheckedParameter<Word32T>(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(UncheckedCast<Int32T>(argc)));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length, FrameArgumentsArgcType::kCountExcludesReceiver));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = arguments.GetReceiver();
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, JSTypedArray, UintPtrT> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, JSTypedArray, UintPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, JSTypedArray, UintPtrT> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, JSTypedArray, UintPtrT> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, JSTypedArray, UintPtrT, Object> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, UintPtrT> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, UintPtrT> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, UintPtrT> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, UintPtrT> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, JSTypedArray, UintPtrT> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSTypedArray> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_JSTypedArray_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block5);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kNotTypedArray, kBuiltinNameFilter_0(state_));
  }

  TNode<JSTypedArray> tmp2;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = EnsureAttached_0(state_, TNode<JSTypedArray>{tmp0}, &label3);
    ca_.Goto(&block7);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block8);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kDetachedOperation, kBuiltinNameFilter_0(state_));
  }

  TNode<IntPtrT> tmp4;
  TNode<UintPtrT> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<Object> tmp7;
  TNode<JSReceiver> tmp8;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp4 = FromConstexpr_intptr_constexpr_int31_0(state_, 48);
    tmp5 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp2, tmp4});
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    tmp7 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp6});
    compiler::CodeAssemblerLabel label9(&ca_);
    tmp8 = Cast_Callable_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp7}, &label9);
    ca_.Goto(&block11);
    if (label9.is_used()) {
      ca_.Bind(&label9);
      ca_.Goto(&block12);
    }
  }

  TNode<IntPtrT> tmp10;
  TNode<Object> tmp11;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp10 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    tmp11 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp10});
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kCalledNonCallable, TNode<Object>{tmp11});
  }

  TNode<IntPtrT> tmp12;
  TNode<Object> tmp13;
  TNode<FixedArray> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<IntPtrT> tmp16;
  TNode<JSTypedArray> tmp17;
  TNode<JSTypedArray> tmp18;
  TNode<BuiltinPtr> tmp19;
  TNode<UintPtrT> tmp20;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp12 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp12});
    std::tie(tmp14, tmp15, tmp16) = NewGrowableFixedArray_0(state_).Flatten();
    std::tie(tmp17, tmp18, tmp19) = NewAttachedJSTypedArrayWitness_0(state_, TNode<JSTypedArray>{tmp2}).Flatten();
    tmp20 = FromConstexpr_uintptr_constexpr_int31_0(state_, 0);
    ca_.Goto(&block15, tmp14, tmp15, tmp16, tmp18, tmp20);
  }

  TNode<FixedArray> phi_bb15_11;
  TNode<IntPtrT> phi_bb15_12;
  TNode<IntPtrT> phi_bb15_13;
  TNode<JSTypedArray> phi_bb15_15;
  TNode<UintPtrT> phi_bb15_17;
  TNode<BoolT> tmp21;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_11, &phi_bb15_12, &phi_bb15_13, &phi_bb15_15, &phi_bb15_17);
    tmp21 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{phi_bb15_17}, TNode<UintPtrT>{tmp5});
    ca_.Branch(tmp21, &block13, std::vector<compiler::Node*>{phi_bb15_11, phi_bb15_12, phi_bb15_13, phi_bb15_15, phi_bb15_17}, &block14, std::vector<compiler::Node*>{phi_bb15_11, phi_bb15_12, phi_bb15_13, phi_bb15_15, phi_bb15_17});
  }

  TNode<FixedArray> phi_bb13_11;
  TNode<IntPtrT> phi_bb13_12;
  TNode<IntPtrT> phi_bb13_13;
  TNode<JSTypedArray> phi_bb13_15;
  TNode<UintPtrT> phi_bb13_17;
  TNode<IntPtrT> tmp22;
  TNode<JSArrayBuffer> tmp23;
  TNode<BoolT> tmp24;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_11, &phi_bb13_12, &phi_bb13_13, &phi_bb13_15, &phi_bb13_17);
    tmp22 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp23 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp17, tmp22});
    tmp24 = IsDetachedBuffer_0(state_, TNode<JSArrayBuffer>{tmp23});
    ca_.Branch(tmp24, &block22, std::vector<compiler::Node*>{phi_bb13_11, phi_bb13_12, phi_bb13_13, phi_bb13_15, phi_bb13_17}, &block23, std::vector<compiler::Node*>{phi_bb13_11, phi_bb13_12, phi_bb13_13, phi_bb13_15, phi_bb13_17});
  }

  TNode<FixedArray> phi_bb22_11;
  TNode<IntPtrT> phi_bb22_12;
  TNode<IntPtrT> phi_bb22_13;
  TNode<JSTypedArray> phi_bb22_15;
  TNode<UintPtrT> phi_bb22_17;
  TNode<Oddball> tmp25;
  if (block22.is_used()) {
    ca_.Bind(&block22, &phi_bb22_11, &phi_bb22_12, &phi_bb22_13, &phi_bb22_15, &phi_bb22_17);
    tmp25 = Undefined_0(state_);
    ca_.Goto(&block17, phi_bb22_11, phi_bb22_12, phi_bb22_13, phi_bb22_15, phi_bb22_17, tmp25);
  }

  TNode<FixedArray> phi_bb23_11;
  TNode<IntPtrT> phi_bb23_12;
  TNode<IntPtrT> phi_bb23_13;
  TNode<JSTypedArray> phi_bb23_15;
  TNode<UintPtrT> phi_bb23_17;
  TNode<JSTypedArray> tmp26;
  TNode<Numeric> tmp27;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_11, &phi_bb23_12, &phi_bb23_13, &phi_bb23_15, &phi_bb23_17);
    tmp26 = (TNode<JSTypedArray>{tmp17});
tmp27 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(1)).descriptor(), tmp19, TNode<Object>(), tmp26, phi_bb23_17));
    ca_.Goto(&block17, phi_bb23_11, phi_bb23_12, phi_bb23_13, tmp26, phi_bb23_17, tmp27);
  }

  TNode<FixedArray> phi_bb17_11;
  TNode<IntPtrT> phi_bb17_12;
  TNode<IntPtrT> phi_bb17_13;
  TNode<JSTypedArray> phi_bb17_15;
  TNode<UintPtrT> phi_bb17_17;
  TNode<Object> phi_bb17_18;
  TNode<Number> tmp28;
  TNode<Object> tmp29;
  TNode<BoolT> tmp30;
  if (block17.is_used()) {
    ca_.Bind(&block17, &phi_bb17_11, &phi_bb17_12, &phi_bb17_13, &phi_bb17_15, &phi_bb17_17, &phi_bb17_18);
    tmp28 = Convert_Number_uintptr_0(state_, TNode<UintPtrT>{phi_bb17_17});
    tmp29 = CodeStubAssembler(state_).Call(TNode<Context>{parameter0}, TNode<Object>{tmp8}, TNode<Object>{tmp13}, TNode<Object>{phi_bb17_18}, TNode<Object>{tmp28}, TNode<Object>{tmp17});
    tmp30 = ToBoolean_0(state_, TNode<Object>{tmp29});
    ca_.Branch(tmp30, &block26, std::vector<compiler::Node*>{phi_bb17_11, phi_bb17_12, phi_bb17_13, phi_bb17_17}, &block27, std::vector<compiler::Node*>{phi_bb17_11, phi_bb17_12, phi_bb17_13, phi_bb17_17});
  }

  TNode<FixedArray> phi_bb26_11;
  TNode<IntPtrT> phi_bb26_12;
  TNode<IntPtrT> phi_bb26_13;
  TNode<UintPtrT> phi_bb26_17;
  TNode<BoolT> tmp31;
  if (block26.is_used()) {
    ca_.Bind(&block26, &phi_bb26_11, &phi_bb26_12, &phi_bb26_13, &phi_bb26_17);
    tmp31 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb26_12}, TNode<IntPtrT>{phi_bb26_13});
    ca_.Branch(tmp31, &block34, std::vector<compiler::Node*>{phi_bb26_11, phi_bb26_12, phi_bb26_13, phi_bb26_17}, &block35, std::vector<compiler::Node*>{phi_bb26_11, phi_bb26_12, phi_bb26_13, phi_bb26_17});
  }

  TNode<FixedArray> phi_bb34_11;
  TNode<IntPtrT> phi_bb34_12;
  TNode<IntPtrT> phi_bb34_13;
  TNode<UintPtrT> phi_bb34_17;
  TNode<IntPtrT> tmp32;
  TNode<IntPtrT> tmp33;
  TNode<IntPtrT> tmp34;
  TNode<IntPtrT> tmp35;
  TNode<IntPtrT> tmp36;
  TNode<IntPtrT> tmp37;
  TNode<FixedArray> tmp38;
  if (block34.is_used()) {
    ca_.Bind(&block34, &phi_bb34_11, &phi_bb34_12, &phi_bb34_13, &phi_bb34_17);
    tmp32 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp33 = CodeStubAssembler(state_).WordSar(TNode<IntPtrT>{phi_bb34_12}, TNode<IntPtrT>{tmp32});
    tmp34 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb34_12}, TNode<IntPtrT>{tmp33});
    tmp35 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp36 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp34}, TNode<IntPtrT>{tmp35});
    tmp37 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    tmp38 = ExtractFixedArray_0(state_, TNode<FixedArray>{phi_bb34_11}, TNode<IntPtrT>{tmp37}, TNode<IntPtrT>{phi_bb34_13}, TNode<IntPtrT>{tmp36});
    ca_.Goto(&block35, tmp38, tmp36, phi_bb34_13, phi_bb34_17);
  }

  TNode<FixedArray> phi_bb35_11;
  TNode<IntPtrT> phi_bb35_12;
  TNode<IntPtrT> phi_bb35_13;
  TNode<UintPtrT> phi_bb35_17;
  TNode<Object> tmp39;
  TNode<IntPtrT> tmp40;
  TNode<IntPtrT> tmp41;
  TNode<IntPtrT> tmp42;
  TNode<IntPtrT> tmp43;
  TNode<UintPtrT> tmp44;
  TNode<UintPtrT> tmp45;
  TNode<BoolT> tmp46;
  if (block35.is_used()) {
    ca_.Bind(&block35, &phi_bb35_11, &phi_bb35_12, &phi_bb35_13, &phi_bb35_17);
    std::tie(tmp39, tmp40, tmp41) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{phi_bb35_11}).Flatten();
    tmp42 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp43 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb35_13}, TNode<IntPtrT>{tmp42});
    tmp44 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb35_13});
    tmp45 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp41});
    tmp46 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp44}, TNode<UintPtrT>{tmp45});
    ca_.Branch(tmp46, &block53, std::vector<compiler::Node*>{phi_bb35_17, phi_bb35_13, phi_bb35_13, phi_bb35_13, phi_bb35_13}, &block54, std::vector<compiler::Node*>{phi_bb35_17, phi_bb35_13, phi_bb35_13, phi_bb35_13, phi_bb35_13});
  }

  TNode<UintPtrT> phi_bb53_17;
  TNode<IntPtrT> phi_bb53_26;
  TNode<IntPtrT> phi_bb53_27;
  TNode<IntPtrT> phi_bb53_31;
  TNode<IntPtrT> phi_bb53_32;
  TNode<IntPtrT> tmp47;
  TNode<IntPtrT> tmp48;
  TNode<Object> tmp49;
  TNode<IntPtrT> tmp50;
  if (block53.is_used()) {
    ca_.Bind(&block53, &phi_bb53_17, &phi_bb53_26, &phi_bb53_27, &phi_bb53_31, &phi_bb53_32);
    tmp47 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb53_32});
    tmp48 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp40}, TNode<IntPtrT>{tmp47});
    std::tie(tmp49, tmp50) = NewReference_Object_0(state_, TNode<Object>{tmp39}, TNode<IntPtrT>{tmp48}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp49, tmp50}, phi_bb17_18);
    ca_.Goto(&block27, phi_bb35_11, phi_bb35_12, tmp43, phi_bb53_17);
  }

  TNode<UintPtrT> phi_bb54_17;
  TNode<IntPtrT> phi_bb54_26;
  TNode<IntPtrT> phi_bb54_27;
  TNode<IntPtrT> phi_bb54_31;
  TNode<IntPtrT> phi_bb54_32;
  if (block54.is_used()) {
    ca_.Bind(&block54, &phi_bb54_17, &phi_bb54_26, &phi_bb54_27, &phi_bb54_31, &phi_bb54_32);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<FixedArray> phi_bb27_11;
  TNode<IntPtrT> phi_bb27_12;
  TNode<IntPtrT> phi_bb27_13;
  TNode<UintPtrT> phi_bb27_17;
  TNode<UintPtrT> tmp51;
  TNode<UintPtrT> tmp52;
  if (block27.is_used()) {
    ca_.Bind(&block27, &phi_bb27_11, &phi_bb27_12, &phi_bb27_13, &phi_bb27_17);
    tmp51 = FromConstexpr_uintptr_constexpr_int31_0(state_, 1);
    tmp52 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{phi_bb27_17}, TNode<UintPtrT>{tmp51});
    ca_.Goto(&block15, phi_bb27_11, phi_bb27_12, phi_bb27_13, phi_bb17_15, tmp52);
  }

  TNode<FixedArray> phi_bb14_11;
  TNode<IntPtrT> phi_bb14_12;
  TNode<IntPtrT> phi_bb14_13;
  TNode<JSTypedArray> phi_bb14_15;
  TNode<UintPtrT> phi_bb14_17;
  TNode<UintPtrT> tmp53;
  TNode<JSTypedArray> tmp54;
  TNode<UintPtrT> tmp55;
  TNode<Number> tmp56;
  TNode<NativeContext> tmp57;
  TNode<Map> tmp58;
  TNode<IntPtrT> tmp59;
  TNode<FixedArray> tmp60;
  TNode<Smi> tmp61;
  TNode<JSArray> tmp62;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_11, &phi_bb14_12, &phi_bb14_13, &phi_bb14_15, &phi_bb14_17);
    tmp53 = CodeStubAssembler(state_).Unsigned(TNode<IntPtrT>{phi_bb14_13});
    tmp54 = TypedArraySpeciesCreateByLength_0(state_, TNode<Context>{parameter0}, kBuiltinNameFilter_0(state_), TNode<JSTypedArray>{tmp0}, TNode<UintPtrT>{tmp53});
    tmp55 = CodeStubAssembler(state_).Unsigned(TNode<IntPtrT>{phi_bb14_13});
    tmp56 = Convert_Number_uintptr_0(state_, TNode<UintPtrT>{tmp55});
    tmp57 = CodeStubAssembler(state_).LoadNativeContext(TNode<Context>{parameter0});
    tmp58 = CodeStubAssembler(state_).LoadJSArrayElementsMap(ElementsKind::PACKED_ELEMENTS, TNode<NativeContext>{tmp57});
    tmp59 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    tmp60 = ExtractFixedArray_0(state_, TNode<FixedArray>{phi_bb14_11}, TNode<IntPtrT>{tmp59}, TNode<IntPtrT>{phi_bb14_13}, TNode<IntPtrT>{phi_bb14_13});
    tmp61 = Convert_Smi_intptr_0(state_, TNode<IntPtrT>{phi_bb14_13});
    tmp62 = CodeStubAssembler(state_).AllocateJSArray(TNode<Map>{tmp58}, TNode<FixedArrayBase>{tmp60}, TNode<Smi>{tmp61});
    CodeStubAssembler(state_).CallRuntime(Runtime::kTypedArrayCopyElements, parameter0, tmp54, tmp62, tmp56);
    arguments.PopAndReturn(tmp54);
  }
}

} // namespace internal
} // namespace v8
