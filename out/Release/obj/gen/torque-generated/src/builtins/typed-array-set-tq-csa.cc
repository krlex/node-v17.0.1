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
#include "torque-generated/src/builtins/typed-array-set-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/cast-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/frame-arguments-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-every-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-set-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-tq-csa.h"
#include "torque-generated/src/objects/js-array-buffer-tq-csa.h"

namespace v8 {
namespace internal {
const char* kBuiltinNameSet_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  return "%TypedArray%.prototype.set";}

TF_BUILTIN(TypedArrayPrototypeSet, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, UintPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, UintPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, UintPtrT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, UintPtrT> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, UintPtrT> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, UintPtrT> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, UintPtrT> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, UintPtrT> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, UintPtrT, UintPtrT, BoolT> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, UintPtrT, UintPtrT, BoolT> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, UintPtrT, UintPtrT, BoolT> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, UintPtrT, UintPtrT, BoolT> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, UintPtrT, UintPtrT, BoolT> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0);

  TNode<JSTypedArray> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_JSTypedArray_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kNotTypedArray, kBuiltinNameSet_0(state_));
  }

  TNode<BoolT> tmp2;
  TNode<UintPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<BoolT> tmp5;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp2 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp3 = FromConstexpr_uintptr_constexpr_int31_0(state_, 0);
    tmp4 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp5 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{tmp4});
    ca_.Branch(tmp5, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp6;
  TNode<Object> tmp7;
  TNode<UintPtrT> tmp8;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp7 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp6});
    compiler::CodeAssemblerLabel label9(&ca_);
    compiler::CodeAssemblerLabel label10(&ca_);
    compiler::CodeAssemblerLabel label11(&ca_);
    tmp8 = ToUintPtr_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp7}, &label9, &label10, &label11);
    ca_.Goto(&block14);
    if (label9.is_used()) {
      ca_.Bind(&label9);
      ca_.Goto(&block15);
    }
    if (label10.is_used()) {
      ca_.Bind(&label10);
      ca_.Goto(&block16);
    }
    if (label11.is_used()) {
      ca_.Bind(&label11);
      ca_.Goto(&block17);
    }
  }

  if (block15.is_used()) {
    ca_.Bind(&block15);
    ca_.Goto(&block8);
  }

  if (block16.is_used()) {
    ca_.Bind(&block16);
    ca_.Goto(&block13);
  }

  if (block17.is_used()) {
    ca_.Bind(&block17);
    ca_.Goto(&block13);
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    ca_.Goto(&block12, tmp2, tmp8);
  }

  TNode<BoolT> tmp12;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp12 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block12, tmp12, tmp3);
  }

  TNode<BoolT> phi_bb12_7;
  TNode<UintPtrT> phi_bb12_8;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_7, &phi_bb12_8);
    ca_.Goto(&block11, phi_bb12_7, phi_bb12_8);
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    ca_.Goto(&block11, tmp2, tmp3);
  }

  TNode<BoolT> phi_bb11_7;
  TNode<UintPtrT> phi_bb11_8;
  TNode<JSTypedArray> tmp13;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_7, &phi_bb11_8);
    compiler::CodeAssemblerLabel label14(&ca_);
    tmp13 = EnsureAttached_0(state_, TNode<JSTypedArray>{tmp0}, &label14);
    ca_.Goto(&block18, phi_bb11_7, phi_bb11_8);
    if (label14.is_used()) {
      ca_.Bind(&label14);
      ca_.Goto(&block19, phi_bb11_7, phi_bb11_8);
    }
  }

  TNode<BoolT> phi_bb19_7;
  TNode<UintPtrT> phi_bb19_8;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_7, &phi_bb19_8);
    ca_.Goto(&block6);
  }

  TNode<BoolT> phi_bb18_7;
  TNode<UintPtrT> phi_bb18_8;
  TNode<IntPtrT> tmp15;
  TNode<Object> tmp16;
  TNode<JSTypedArray> tmp17;
  if (block18.is_used()) {
    ca_.Bind(&block18, &phi_bb18_7, &phi_bb18_8);
    tmp15 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    tmp16 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp15});
    compiler::CodeAssemblerLabel label18(&ca_);
    tmp17 = Cast_JSTypedArray_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp16}, &label18);
    ca_.Goto(&block22, phi_bb18_7, phi_bb18_8);
    if (label18.is_used()) {
      ca_.Bind(&label18);
      ca_.Goto(&block23, phi_bb18_7, phi_bb18_8);
    }
  }

  TNode<BoolT> phi_bb23_7;
  TNode<UintPtrT> phi_bb23_8;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_7, &phi_bb23_8);
    compiler::CodeAssemblerLabel label19(&ca_);
    compiler::CodeAssemblerLabel label20(&ca_);
    TypedArrayPrototypeSetArray_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<JSTypedArray>{tmp13}, TNode<Object>{tmp16}, TNode<UintPtrT>{phi_bb23_8}, TNode<BoolT>{phi_bb23_7}, &label19, &label20);
    ca_.Goto(&block28, phi_bb23_7, phi_bb23_8, phi_bb23_8, phi_bb23_7);
    if (label19.is_used()) {
      ca_.Bind(&label19);
      ca_.Goto(&block29, phi_bb23_7, phi_bb23_8, phi_bb23_8, phi_bb23_7);
    }
    if (label20.is_used()) {
      ca_.Bind(&label20);
      ca_.Goto(&block30, phi_bb23_7, phi_bb23_8, phi_bb23_8, phi_bb23_7);
    }
  }

  TNode<BoolT> phi_bb22_7;
  TNode<UintPtrT> phi_bb22_8;
  TNode<JSTypedArray> tmp21;
  if (block22.is_used()) {
    ca_.Bind(&block22, &phi_bb22_7, &phi_bb22_8);
    compiler::CodeAssemblerLabel label22(&ca_);
    tmp21 = EnsureAttached_0(state_, TNode<JSTypedArray>{tmp17}, &label22);
    ca_.Goto(&block24, phi_bb22_7, phi_bb22_8);
    if (label22.is_used()) {
      ca_.Bind(&label22);
      ca_.Goto(&block25, phi_bb22_7, phi_bb22_8);
    }
  }

  TNode<BoolT> phi_bb25_7;
  TNode<UintPtrT> phi_bb25_8;
  if (block25.is_used()) {
    ca_.Bind(&block25, &phi_bb25_7, &phi_bb25_8);
    ca_.Goto(&block6);
  }

  TNode<BoolT> phi_bb24_7;
  TNode<UintPtrT> phi_bb24_8;
  if (block24.is_used()) {
    ca_.Bind(&block24, &phi_bb24_7, &phi_bb24_8);
    compiler::CodeAssemblerLabel label23(&ca_);
    TypedArrayPrototypeSetTypedArray_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<JSTypedArray>{tmp13}, TNode<JSTypedArray>{tmp21}, TNode<UintPtrT>{phi_bb24_8}, TNode<BoolT>{phi_bb24_7}, &label23);
    ca_.Goto(&block26, phi_bb24_7, phi_bb24_8, phi_bb24_8, phi_bb24_7);
    if (label23.is_used()) {
      ca_.Bind(&label23);
      ca_.Goto(&block27, phi_bb24_7, phi_bb24_8, phi_bb24_8, phi_bb24_7);
    }
  }

  TNode<BoolT> phi_bb27_7;
  TNode<UintPtrT> phi_bb27_8;
  TNode<UintPtrT> phi_bb27_15;
  TNode<BoolT> phi_bb27_16;
  if (block27.is_used()) {
    ca_.Bind(&block27, &phi_bb27_7, &phi_bb27_8, &phi_bb27_15, &phi_bb27_16);
    ca_.Goto(&block8);
  }

  TNode<BoolT> phi_bb26_7;
  TNode<UintPtrT> phi_bb26_8;
  TNode<UintPtrT> phi_bb26_15;
  TNode<BoolT> phi_bb26_16;
  TNode<Oddball> tmp24;
  if (block26.is_used()) {
    ca_.Bind(&block26, &phi_bb26_7, &phi_bb26_8, &phi_bb26_15, &phi_bb26_16);
    tmp24 = Undefined_0(state_);
    arguments.PopAndReturn(tmp24);
  }

  TNode<BoolT> phi_bb29_7;
  TNode<UintPtrT> phi_bb29_8;
  TNode<UintPtrT> phi_bb29_13;
  TNode<BoolT> phi_bb29_14;
  if (block29.is_used()) {
    ca_.Bind(&block29, &phi_bb29_7, &phi_bb29_8, &phi_bb29_13, &phi_bb29_14);
    ca_.Goto(&block8);
  }

  TNode<BoolT> phi_bb30_7;
  TNode<UintPtrT> phi_bb30_8;
  TNode<UintPtrT> phi_bb30_13;
  TNode<BoolT> phi_bb30_14;
  if (block30.is_used()) {
    ca_.Bind(&block30, &phi_bb30_7, &phi_bb30_8, &phi_bb30_13, &phi_bb30_14);
    ca_.Goto(&block6);
  }

  TNode<BoolT> phi_bb28_7;
  TNode<UintPtrT> phi_bb28_8;
  TNode<UintPtrT> phi_bb28_13;
  TNode<BoolT> phi_bb28_14;
  TNode<Oddball> tmp25;
  if (block28.is_used()) {
    ca_.Bind(&block28, &phi_bb28_7, &phi_bb28_8, &phi_bb28_13, &phi_bb28_14);
    tmp25 = Undefined_0(state_);
    arguments.PopAndReturn(tmp25);
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    CodeStubAssembler(state_).ThrowRangeError(TNode<Context>{parameter0}, MessageTemplate::kTypedArraySetOffsetOutOfBounds);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kDetachedOperation, kBuiltinNameSet_0(state_));
  }
}

void TypedArrayPrototypeSetArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_receiver, TNode<JSTypedArray> p_target, TNode<Object> p_arrayArg, TNode<UintPtrT> p_targetOffset, TNode<BoolT> p_targetOffsetOverflowed, compiler::CodeAssemblerLabel* label_IfOffsetOutOfBounds, compiler::CodeAssemblerLabel* label_IfDetached) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSReceiver> tmp0;
  TNode<Number> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).ToObject_Inline(TNode<Context>{p_context}, TNode<Object>{p_arrayArg});
    tmp1 = GetLengthProperty_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp0});
    ca_.Branch(p_targetOffsetOverflowed, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block1);
  }

  TNode<IntPtrT> tmp2;
  TNode<UintPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp2 = FromConstexpr_intptr_constexpr_int31_0(state_, 48);
    tmp3 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{p_target, tmp2});
    compiler::CodeAssemblerLabel label5(&ca_);
    tmp4 = ChangeSafeIntegerNumberToUintPtr_0(state_, TNode<Number>{tmp1}, &label5);
    ca_.Goto(&block6);
    if (label5.is_used()) {
      ca_.Bind(&label5);
      ca_.Goto(&block7);
    }
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    ca_.Goto(&block1);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    compiler::CodeAssemblerLabel label6(&ca_);
    CheckIntegerIndexAdditionOverflow_0(state_, TNode<UintPtrT>{tmp4}, TNode<UintPtrT>{p_targetOffset}, TNode<UintPtrT>{tmp3}, &label6);
    ca_.Goto(&block8);
    if (label6.is_used()) {
      ca_.Bind(&label6);
      ca_.Goto(&block9);
    }
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    ca_.Goto(&block1);
  }

  TNode<UintPtrT> tmp7;
  TNode<BoolT> tmp8;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp7 = FromConstexpr_uintptr_constexpr_int31_0(state_, 0);
    tmp8 = CodeStubAssembler(state_).WordEqual(TNode<UintPtrT>{tmp4}, TNode<UintPtrT>{tmp7});
    ca_.Branch(tmp8, &block10, std::vector<compiler::Node*>{}, &block11, std::vector<compiler::Node*>{});
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    ca_.Goto(&block3);
  }

  TNode<Int32T> tmp9;
  TNode<BoolT> tmp10;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp9 = CodeStubAssembler(state_).LoadElementsKind(TNode<JSTypedArray>{p_target});
    tmp10 = TypedArrayBuiltinsAssembler(state_).IsBigInt64ElementsKind(TNode<Int32T>{tmp9});
    ca_.Branch(tmp10, &block14, std::vector<compiler::Node*>{}, &block15, std::vector<compiler::Node*>{});
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    ca_.Goto(&block13);
  }

  TNode<JSArray> tmp11;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    compiler::CodeAssemblerLabel label12(&ca_);
    tmp11 = Cast_FastJSArray_0(state_, TNode<Context>{p_context}, TNode<HeapObject>{tmp0}, &label12);
    ca_.Goto(&block18);
    if (label12.is_used()) {
      ca_.Bind(&label12);
      ca_.Goto(&block19);
    }
  }

  if (block19.is_used()) {
    ca_.Bind(&block19);
    ca_.Goto(&block13);
  }

  TNode<IntPtrT> tmp13;
  TNode<Map> tmp14;
  TNode<Int32T> tmp15;
  TNode<BoolT> tmp16;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp13 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    tmp14 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp11, tmp13});
    tmp15 = CodeStubAssembler(state_).LoadMapElementsKind(TNode<Map>{tmp14});
    tmp16 = CodeStubAssembler(state_).IsElementsKindInRange(TNode<Int32T>{tmp15}, ElementsKind::PACKED_SMI_ELEMENTS, ElementsKind::HOLEY_SMI_ELEMENTS);
    ca_.Branch(tmp16, &block22, std::vector<compiler::Node*>{}, &block23, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp17;
  if (block22.is_used()) {
    ca_.Bind(&block22);
    tmp17 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block24, tmp17);
  }

  TNode<BoolT> tmp18;
  if (block23.is_used()) {
    ca_.Bind(&block23);
    tmp18 = CodeStubAssembler(state_).IsElementsKindInRange(TNode<Int32T>{tmp15}, ElementsKind::PACKED_DOUBLE_ELEMENTS, ElementsKind::HOLEY_DOUBLE_ELEMENTS);
    ca_.Goto(&block24, tmp18);
  }

  TNode<BoolT> phi_bb24_13;
  if (block24.is_used()) {
    ca_.Bind(&block24, &phi_bb24_13);
    ca_.Branch(phi_bb24_13, &block20, std::vector<compiler::Node*>{}, &block21, std::vector<compiler::Node*>{});
  }

  TNode<JSTypedArray> tmp19;
  if (block20.is_used()) {
    ca_.Bind(&block20);
    compiler::CodeAssemblerLabel label20(&ca_);
    tmp19 = EnsureAttached_0(state_, TNode<JSTypedArray>{p_target}, &label20);
    ca_.Goto(&block26);
    if (label20.is_used()) {
      ca_.Bind(&label20);
      ca_.Goto(&block27);
    }
  }

  if (block27.is_used()) {
    ca_.Bind(&block27);
    ca_.Goto(label_IfDetached);
  }

  if (block26.is_used()) {
    ca_.Bind(&block26);
    TypedArrayBuiltinsAssembler(state_).CallCCopyFastNumberJSArrayElementsToTypedArray(TNode<Context>{p_context}, TNode<JSArray>{tmp11}, TNode<JSTypedArray>{tmp19}, TNode<UintPtrT>{tmp4}, TNode<UintPtrT>{p_targetOffset});
    ca_.Goto(&block12);
  }

  if (block21.is_used()) {
    ca_.Bind(&block21);
    ca_.Goto(&block13);
  }

  TNode<Number> tmp21;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp21 = Convert_Number_uintptr_0(state_, TNode<UintPtrT>{p_targetOffset});
    CodeStubAssembler(state_).CallRuntime(Runtime::kTypedArraySet, p_context, p_target, tmp0, tmp1, tmp21);
    ca_.Goto(&block12);
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    ca_.Goto(&block3);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(&block28);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_IfOffsetOutOfBounds);
  }

    ca_.Bind(&block28);
}


void TypedArrayPrototypeSetTypedArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_receiver, TNode<JSTypedArray> p_target, TNode<JSTypedArray> p_typedArray, TNode<UintPtrT> p_targetOffset, TNode<BoolT> p_targetOffsetOverflowed, compiler::CodeAssemblerLabel* label_IfOffsetOutOfBounds) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block43(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.Branch(p_targetOffsetOverflowed, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(&block1);
  }

  TNode<IntPtrT> tmp0;
  TNode<UintPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<UintPtrT> tmp3;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 48);
    tmp1 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{p_target, tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_int31_0(state_, 48);
    tmp3 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{p_typedArray, tmp2});
    compiler::CodeAssemblerLabel label4(&ca_);
    CheckIntegerIndexAdditionOverflow_0(state_, TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{p_targetOffset}, TNode<UintPtrT>{tmp1}, &label4);
    ca_.Goto(&block5);
    if (label4.is_used()) {
      ca_.Bind(&label4);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block1);
  }

  TNode<UintPtrT> tmp5;
  TNode<Int32T> tmp6;
  TNode<Int32T> tmp7;
  TNode<BoolT> tmp8;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    std::tie(tmp5, tmp6) = TypedArrayBuiltinsAssembler(state_).GetTypedArrayElementsInfo(TNode<JSTypedArray>{p_target}).Flatten();
    tmp7 = CodeStubAssembler(state_).LoadElementsKind(TNode<JSTypedArray>{p_typedArray});
    tmp8 = ElementsKindNotEqual_0(state_, TNode<Int32T>{tmp7}, TNode<Int32T>{tmp6});
    ca_.Branch(tmp8, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp9;
  TNode<BoolT> tmp10;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp9 = TypedArrayBuiltinsAssembler(state_).IsUint8ElementsKind(TNode<Int32T>{tmp7});
    tmp10 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp9});
    ca_.Branch(tmp10, &block13, std::vector<compiler::Node*>{}, &block14, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp11;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp11 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block15, tmp11);
  }

  TNode<BoolT> tmp12;
  TNode<BoolT> tmp13;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    tmp12 = TypedArrayBuiltinsAssembler(state_).IsUint8ElementsKind(TNode<Int32T>{tmp6});
    tmp13 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp12});
    ca_.Goto(&block15, tmp13);
  }

  TNode<BoolT> phi_bb15_12;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_12);
    ca_.Branch(phi_bb15_12, &block11, std::vector<compiler::Node*>{}, &block12, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp14;
  TNode<BoolT> tmp15;
  TNode<BoolT> tmp16;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp14 = TypedArrayBuiltinsAssembler(state_).IsBigInt64ElementsKind(TNode<Int32T>{tmp7});
    tmp15 = TypedArrayBuiltinsAssembler(state_).IsBigInt64ElementsKind(TNode<Int32T>{tmp6});
    tmp16 = CodeStubAssembler(state_).Word32NotEqual(TNode<BoolT>{tmp14}, TNode<BoolT>{tmp15});
    ca_.Branch(tmp16, &block43, std::vector<compiler::Node*>{}, &block44, std::vector<compiler::Node*>{});
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    ca_.Goto(&block10);
  }

  TNode<UintPtrT> tmp17;
  TNode<BoolT> tmp18;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp17 = FromConstexpr_uintptr_constexpr_int31_0(state_, 0);
    tmp18 = CodeStubAssembler(state_).WordEqual(TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{tmp17});
    ca_.Branch(tmp18, &block16, std::vector<compiler::Node*>{}, &block17, std::vector<compiler::Node*>{});
  }

  if (block16.is_used()) {
    ca_.Bind(&block16);
    ca_.Goto(&block2);
  }

  TNode<UintPtrT> tmp19;
  TNode<BoolT> tmp20;
  if (block17.is_used()) {
    ca_.Bind(&block17);
    tmp19 = FromConstexpr_uintptr_constexpr_uintptr_0(state_, JSTypedArray::kMaxLength);
    tmp20 = CodeStubAssembler(state_).UintPtrGreaterThan(TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{tmp19});
    ca_.Branch(tmp20, &block21, std::vector<compiler::Node*>{}, &block22, std::vector<compiler::Node*>{});
  }

  if (block21.is_used()) {
    ca_.Bind(&block21);
    ca_.Goto(&block19);
  }

  TNode<UintPtrT> tmp21;
  TNode<UintPtrT> tmp22;
  TNode<BoolT> tmp23;
  if (block22.is_used()) {
    ca_.Bind(&block22);
    tmp21 = FromConstexpr_uintptr_constexpr_uintptr_0(state_, JSArrayBuffer::kMaxByteLength);
    tmp22 = CodeStubAssembler(state_).WordShr(TNode<UintPtrT>{tmp21}, TNode<UintPtrT>{tmp5});
    tmp23 = CodeStubAssembler(state_).UintPtrGreaterThan(TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{tmp22});
    ca_.Branch(tmp23, &block23, std::vector<compiler::Node*>{}, &block24, std::vector<compiler::Node*>{});
  }

  if (block23.is_used()) {
    ca_.Bind(&block23);
    ca_.Goto(&block19);
  }

  TNode<UintPtrT> tmp24;
  TNode<UintPtrT> tmp25;
  TNode<BoolT> tmp26;
  if (block24.is_used()) {
    ca_.Bind(&block24);
    tmp24 = CodeStubAssembler(state_).WordShl(TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{tmp5});
    tmp25 = FromConstexpr_uintptr_constexpr_uintptr_0(state_, JSTypedArray::kMaxLength);
    tmp26 = CodeStubAssembler(state_).UintPtrGreaterThan(TNode<UintPtrT>{p_targetOffset}, TNode<UintPtrT>{tmp25});
    ca_.Branch(tmp26, &block28, std::vector<compiler::Node*>{}, &block29, std::vector<compiler::Node*>{});
  }

  if (block19.is_used()) {
    ca_.Bind(&block19);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block28.is_used()) {
    ca_.Bind(&block28);
    ca_.Goto(&block26);
  }

  TNode<UintPtrT> tmp27;
  TNode<UintPtrT> tmp28;
  TNode<BoolT> tmp29;
  if (block29.is_used()) {
    ca_.Bind(&block29);
    tmp27 = FromConstexpr_uintptr_constexpr_uintptr_0(state_, JSArrayBuffer::kMaxByteLength);
    tmp28 = CodeStubAssembler(state_).WordShr(TNode<UintPtrT>{tmp27}, TNode<UintPtrT>{tmp5});
    tmp29 = CodeStubAssembler(state_).UintPtrGreaterThan(TNode<UintPtrT>{p_targetOffset}, TNode<UintPtrT>{tmp28});
    ca_.Branch(tmp29, &block30, std::vector<compiler::Node*>{}, &block31, std::vector<compiler::Node*>{});
  }

  if (block30.is_used()) {
    ca_.Bind(&block30);
    ca_.Goto(&block26);
  }

  TNode<UintPtrT> tmp30;
  TNode<RawPtrT> tmp31;
  TNode<IntPtrT> tmp32;
  TNode<RawPtrT> tmp33;
  TNode<IntPtrT> tmp34;
  TNode<JSArrayBuffer> tmp35;
  TNode<BoolT> tmp36;
  if (block31.is_used()) {
    ca_.Bind(&block31);
    tmp30 = CodeStubAssembler(state_).WordShl(TNode<UintPtrT>{p_targetOffset}, TNode<UintPtrT>{tmp5});
    tmp31 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{p_target});
    tmp32 = Convert_intptr_uintptr_0(state_, TNode<UintPtrT>{tmp30});
    tmp33 = CodeStubAssembler(state_).RawPtrAdd(TNode<RawPtrT>{tmp31}, TNode<IntPtrT>{tmp32});
    tmp34 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp35 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{p_target, tmp34});
    tmp36 = IsSharedArrayBuffer_0(state_, TNode<JSArrayBuffer>{tmp35});
    ca_.Branch(tmp36, &block40, std::vector<compiler::Node*>{}, &block41, std::vector<compiler::Node*>{});
  }

  if (block26.is_used()) {
    ca_.Bind(&block26);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<RawPtrT> tmp37;
  if (block40.is_used()) {
    ca_.Bind(&block40);
    tmp37 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{p_typedArray});
    TypedArrayBuiltinsAssembler(state_).CallCRelaxedMemmove(TNode<RawPtrT>{tmp33}, TNode<RawPtrT>{tmp37}, TNode<UintPtrT>{tmp24});
    ca_.Goto(&block42);
  }

  TNode<RawPtrT> tmp38;
  if (block41.is_used()) {
    ca_.Bind(&block41);
    tmp38 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{p_typedArray});
    TypedArrayBuiltinsAssembler(state_).CallCMemmove(TNode<RawPtrT>{tmp33}, TNode<RawPtrT>{tmp38}, TNode<UintPtrT>{tmp24});
    ca_.Goto(&block42);
  }

  if (block42.is_used()) {
    ca_.Bind(&block42);
    ca_.Goto(&block7);
  }

  if (block43.is_used()) {
    ca_.Bind(&block43);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{p_context}, MessageTemplate::kBigIntMixedTypes);
  }

  TNode<UintPtrT> tmp39;
  TNode<BoolT> tmp40;
  if (block44.is_used()) {
    ca_.Bind(&block44);
    tmp39 = FromConstexpr_uintptr_constexpr_int31_0(state_, 0);
    tmp40 = CodeStubAssembler(state_).WordEqual(TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{tmp39});
    ca_.Branch(tmp40, &block45, std::vector<compiler::Node*>{}, &block46, std::vector<compiler::Node*>{});
  }

  if (block45.is_used()) {
    ca_.Bind(&block45);
    ca_.Goto(&block2);
  }

  if (block46.is_used()) {
    ca_.Bind(&block46);
    TypedArrayBuiltinsAssembler(state_).CallCCopyTypedArrayElementsToTypedArray(TNode<JSTypedArray>{p_typedArray}, TNode<JSTypedArray>{p_target}, TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{p_targetOffset});
    ca_.Goto(&block7);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    ca_.Goto(&block2);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(&block47);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_IfOffsetOutOfBounds);
  }

    ca_.Bind(&block47);
}


} // namespace internal
} // namespace v8
