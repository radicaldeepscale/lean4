// Lean compiler output
// Module: Lean.Elab.Structure
// Imports: Init Lean.Parser.Command Lean.Meta.Closure Lean.Meta.SizeOf Lean.Elab.Command Lean.Elab.DeclModifiers Lean.Elab.DeclUtil Lean.Elab.Inductive Lean.Elab.DeclarationRange
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
extern lean_object* l_Lean_Elab_Command_checkValidInductiveModifier___rarg___closed__3;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_instInhabitedStructFieldInfo;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDeclarationRanges___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabStructure___lambda__1___boxed(lean_object**);
lean_object* l_Lean_Elab_Term_removeUnused(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_extractMacroScopes(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__1(lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Name_getString_x21___closed__3;
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields_match__2___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_expandOptDeclSig(lean_object*);
extern lean_object* l_Lean_Parser_Command_protected___elambda__1___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__6;
extern lean_object* l_Lean_initFn____x40_Lean_Class___hyg_643____closed__1;
extern lean_object* l_Lean_Elab_elabAttr___rarg___lambda__10___closed__3;
lean_object* l_Lean_registerTraceClass(lean_object*, lean_object*);
lean_object* lean_erase_macro_scopes(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__4;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__3(lean_object*);
lean_object* l_Lean_throwKernelException___at_Lean_Elab_Command_elabEvalUnsafe___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
extern lean_object* l_Lean_myMacro____x40_Init_NotationExtra___hyg_1136____closed__15;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Elab_Command_checkResultingUniverse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__3___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_removeUnused___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getOptDerivingClasses___at_Lean_Elab_Command_elabStructure___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_setEnv___at_Lean_Elab_Term_evalExpr___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_elabAttr___rarg___lambda__8___closed__2;
lean_object* l_List_map___at_Lean_Meta_addInstance___spec__1(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__5___closed__1;
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__5;
extern lean_object* l_Lean_nullKind;
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkCasesOn___at___private_Lean_Elab_Inductive_0__Lean_Elab_Command_mkAuxConstructions___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___closed__1;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_collectUsedFVarsAtFVars___closed__1;
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__1;
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__7___closed__1;
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabStructure___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_mkResultUniverse(lean_object*, lean_object*);
uint8_t l_Lean_Elab_Modifiers_isProtected(lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Inductive_0__Lean_Elab_Command_getResultingUniverse___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__3___closed__3;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forM___at_Lean_Meta_ToHide_fixpointStep___spec__4___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__2___closed__1;
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__4___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___closed__3;
extern lean_object* l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVars___spec__1___closed__2;
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__5___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_12336____closed__13;
extern lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_Util___hyg_1077____closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__5___boxed(lean_object**);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNoConfusion___at___private_Lean_Elab_Inductive_0__Lean_Elab_Command_mkAuxConstructions___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forM___at_Lean_Elab_Command_elabStructure___spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedAttribute;
extern lean_object* l_Array_empty___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__5(lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_12336____closed__9;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__6___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__3;
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_6045____closed__4;
lean_object* l_Lean_Elab_Command_elabStructure_match__1(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_projections(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_mkAuxName___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__2;
lean_object* lean_private_to_user_name(lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__1;
extern lean_object* l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVars___spec__1___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__9;
lean_object* l_Array_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__5(lean_object*);
extern lean_object* l_Lean_declRangeExt;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__6___closed__1;
lean_object* l_Lean_Elab_Term_ensureNoUnassignedMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_scoped___elambda__1___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDocString_x27___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_myMacro____x40_Init_NotationExtra___hyg_1136____closed__28;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabStructure___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_NotationExtra___hyg_5637____closed__20;
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__2___closed__2;
extern lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__6___closed__2;
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Elab_mkDeclName___at_Lean_Elab_Command_elabStructure___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__6(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isInternalSubobjectFieldName(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux_match__1(lean_object*);
lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at_Lean_Elab_Command_elabStructure___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_mkDeclName___at_Lean_Elab_Command_elabStructure___spec__5___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__3;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addProjections_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_applyAttributesAt(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__4___closed__1;
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__2(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_validStructType_match__1(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_getOffsetAux(lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkAuxConstructions(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getLevelNames___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_shouldInferResultUniverse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_mkDeclName___at_Lean_Elab_Command_elabStructure___spec__5___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_accLevelAtCtor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__2;
extern lean_object* l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVars___spec__1___closed__4;
extern lean_object* l_Lean_Parser_Command_example___elambda__1___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_withLevelNames___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__2___closed__2;
lean_object* l_Array_forM___at_Lean_Core_instMetaEvalCoreM___spec__4___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Command_structExplicitBinder___elambda__1___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getMainModule___rarg(lean_object*, lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__6___closed__3;
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_instantiateLevelMVars_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__2;
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabStructure___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_findFieldInfo_x3f___spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTypeWithAutoBoundImplicit___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__2;
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabExport___spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Command_checkValidCtorModifier___rarg___closed__3;
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabStructure___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__1;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAuxDefinition(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addProjections___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at_Lean_Elab_Term_elabLetDeclAux___spec__2___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_12938____closed__14;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__4;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabStructure___lambda__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_validStructType___boxed(lean_object*);
lean_object* l_Lean_Elab_Command_StructFieldInfo_isFromParent___boxed(lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_6561____closed__4;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse_match__1(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__7;
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__2;
uint8_t l_Lean_Elab_Command_StructFieldInfo_inferMod___default;
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_setBinderInfo(lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__8;
lean_object* l_Array_foldlMUnsafe___at_Array_foldl___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabStructure___spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__4;
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_removeUnused_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_value(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkSizeOfInstances(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTermEnsuringType(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__1;
lean_object* l_Lean_MapDeclarationExtension_insert___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_instInhabitedStructFieldInfo___closed__1;
lean_object* l_Lean_throwError___at_Lean_Elab_Term_elabDoubleQuotedName___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_mkDeclName___rarg___closed__2;
uint8_t l___private_Lean_Elab_Structure_0__Lean_Elab_Command_validStructType(lean_object*);
extern lean_object* l_Lean_Elab_mkDeclName___rarg___lambda__1___closed__3;
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__3;
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_StructFieldInfo_isSubobject_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabDeclAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Command_StructFieldInfo_isSubobject(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabStructure___lambda__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkProjections___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_removeUnused_match__1(lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_evalExpr___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkAuxConstructions___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_defaultCtorName;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed_match__1(lean_object*);
lean_object* l_Lean_getStructureFieldsFlattened(lean_object*, lean_object*, uint8_t);
uint8_t l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__3(lean_object*);
lean_object* l_Array_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getOptDerivingClasses___at_Lean_Elab_Command_elabStructure___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Command_checkValidCtorModifier___rarg___lambda__3___closed__3;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure_match__1(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabStructure___spec__14(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getFVarLocalDecl_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Array_forM___at_Lean_Elab_Term_collectUsedFVarsAtFVars___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed(lean_object*);
lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_expandMacro_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_myMacro____x40_Init_NotationExtra___hyg_1136____closed__27;
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Command_elabStructure___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__3(lean_object*);
lean_object* l_Lean_addDocString_x27___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDocString___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__8(lean_object*);
lean_object* l_Lean_Elab_getOptDerivingClasses___at_Lean_Elab_Command_elabStructure___spec__2___boxed__const__1;
lean_object* l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__4___closed__3;
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabStructure___lambda__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_StructFieldInfo_value_x3f___default;
uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse_match__1(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__1(lean_object*);
extern lean_object* l_Lean_Elab_Command_checkValidCtorModifier___rarg___lambda__1___closed__3;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__7(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__5___closed__3;
lean_object* l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_quoteAutoTactic___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkRecOn___at___private_Lean_Elab_Inductive_0__Lean_Elab_Command_mkAuxConstructions___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__3;
extern lean_object* l_Lean_Meta_mkProjection___lambda__1___closed__3;
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_runTermElabM___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_addInstance(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__2(lean_object*);
lean_object* l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Command_checkValidInductiveModifier___rarg___lambda__1___closed__3;
lean_object* l_Lean_Elab_Command_elabStructure___lambda__2___boxed(lean_object**);
lean_object* l_Lean_Elab_Command_StructFieldInfo_isSubobject___boxed(lean_object*);
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_mkDeclName___at_Lean_Elab_Command_elabStructure___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getCurrMacroScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAtomic(lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*);
lean_object* l_Lean_addDocString___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_protectedExt;
lean_object* l_Lean_Elab_addDeclarationRanges___at_Lean_Elab_Command_elabStructure___spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabStructure___lambda__5(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__5___boxed(lean_object*);
lean_object* l_Lean_setEnv___at_Lean_Elab_Term_evalExpr___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_CollectLevelParams_main(lean_object*, lean_object*);
lean_object* l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe___at_Lean_Elab_Command_elabStructure___spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__1;
extern lean_object* l_Lean_docStringExt;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__2___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults_match__1(lean_object*);
extern lean_object* l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVars___spec__1___closed__5;
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView_match__1(lean_object*);
extern lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__3;
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_assignLevelMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_KernelException_toMessageData___closed__15;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields___spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLocalInstances(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__5;
extern lean_object* l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVars___spec__1___closed__3;
lean_object* l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_sortDeclLevelParams(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Command_structSimpleBinder___elambda__1___closed__2;
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__1(lean_object*);
lean_object* l_Lean_Meta_withLCtx___at_Lean_Elab_Term_elabSyntheticHole___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_addAuxDeclarationRanges___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__1;
lean_object* l_ReaderT_bind___at_Lean_Elab_Term_instMonadLogTermElabM___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_collectUsedFVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
lean_object* l_Lean_Meta_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_filterM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe___at_Lean_Elab_Command_elabStructure___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__3;
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields(lean_object*);
extern lean_object* l_Lean_Elab_Term_getFVarLocalDecl_x21___closed__1;
extern lean_object* l_Lean_KernelException_toMessageData___closed__3;
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Elab_expandDeclIdCore(lean_object*);
lean_object* l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabStructure___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addProjections(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBinders___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Elab_Structure_0__Lean_Elab_Command_containsFieldName(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___closed__1;
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_nullKind___closed__2;
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__1___rarg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getDeclarationRange___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDecl___at_Lean_Elab_Term_evalExpr___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_DerivingClassView_applyHandlers(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkProjection(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__1(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__1;
lean_object* l_Lean_mkAtomFrom(lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__7___rarg(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___boxed__const__1;
lean_object* l_Lean_Elab_elabDeclAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Array_filterM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__5___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__3;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_levelMVarToParam_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forM___at_Lean_Elab_Command_elabStructure___spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabStructure___spec__10(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_elem___at_Lean_NameHashSet_insert___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Option_get_x21___rarg___closed__4;
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__2(lean_object*);
lean_object* l_Lean_Name_getString_x21(lean_object*);
lean_object* l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__2;
lean_object* l_Lean_Elab_applyVisibility___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getSepArgs(lean_object*);
uint8_t l_Lean_isAttribute(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__3___closed__2;
extern lean_object* l_Lean_CollectLevelParams_instInhabitedState___closed__1;
extern lean_object* l___private_Lean_Elab_Inductive_0__Lean_Elab_Command_mkAuxConstructions___closed__2;
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Command_elabStructure___spec__3(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_environment_main_module(lean_object*);
lean_object* l_Lean_Elab_getDeclarationRange___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__4(lean_object*);
lean_object* l_Lean_Elab_Command_getCurrMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_12336____closed__10;
lean_object* l_Lean_addDeclarationRanges___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedModifiers___closed__1;
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addAuxDeclarationRanges___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__2;
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_myMacro____x40_Init_NotationExtra___hyg_1136____closed__31;
lean_object* l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__3___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_containsFieldName___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabImplicitLambda___spec__1___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_removeUnused(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkAuxConstructions___lambda__1(uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabStructure___closed__1;
lean_object* l_Array_appendCore___rarg(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr___closed__1;
lean_object* l_Lean_Elab_Term_withDeclName___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__3;
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__4(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__3;
lean_object* l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__6;
lean_object* l_Lean_Elab_Command_getMainModule___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabStructure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_StructFieldInfo_isFromParent_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars___spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__2;
extern lean_object* l_Lean_Parser_Command_structInstBinder___elambda__1___closed__2;
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars___closed__1;
extern lean_object* l_Lean_Elab_elabAttr___rarg___lambda__8___closed__3;
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields_match__1(lean_object*);
lean_object* l_Lean_Elab_expandDeclSig(lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___closed__2;
lean_object* l_Lean_Elab_Command_StructFieldInfo_isSubobject_match__1___rarg(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__3;
lean_object* l_Array_getEvenElems___rarg(lean_object*);
extern lean_object* l_Lean_Elab_Command_checkValidInductiveModifier___rarg___lambda__2___closed__3;
lean_object* l_Lean_Elab_Term_elabType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkForall(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Level_getLevelOffset(lean_object*);
lean_object* l_Lean_Meta_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___boxed__const__1;
lean_object* l_Lean_expandMacros(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Command_StructFieldInfo_isFromParent(lean_object*);
lean_object* l_Lean_Elab_Modifiers_addAttribute(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__3___boxed(lean_object*);
lean_object* lean_set_reducibility_status(lean_object*, lean_object*, uint8_t);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__8;
lean_object* l_Lean_Elab_Command_StructFieldInfo_isFromParent_match__1___rarg(uint8_t, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_expandOptDocComment_x3f___rarg___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___closed__1;
lean_object* l_Lean_Meta_withLetDecl___at_Lean_Elab_Term_elabLetDeclAux___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__4;
lean_object* l_Lean_Elab_Command_initFn____x40_Lean_Elab_Structure___hyg_4477_(lean_object*);
lean_object* l_Lean_Meta_instantiateMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__1___boxed(lean_object**);
uint8_t l___private_Lean_Expr_0__Lean_beqBinderInfo____x40_Lean_Expr___hyg_206_(uint8_t, uint8_t);
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabEnd___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__4(lean_object*);
lean_object* lean_expr_abstract(lean_object*, lean_object*);
lean_object* l_Lean_setReducibilityStatus___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_NotationExtra___hyg_5637____closed__17;
lean_object* l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_inferImplicit(lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addProjections_match__1(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_validStructType_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkCtor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_prec_x28___x29___closed__7;
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkAuxConstructions___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___closed__1;
uint8_t l_Lean_Elab_Modifiers_isPrivate(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_prec_x28___x29___closed__3;
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_addAutoBoundImplicits(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withAutoBoundImplicitLocal___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_findFieldInfo_x3f___boxed(lean_object*, lean_object*);
lean_object* l_Array_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_NotationExtra___hyg_5637____closed__9;
extern lean_object* l_Lean_Parser_Command_private___elambda__1___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabStructure_match__1___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__5(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_appendBefore(lean_object*, lean_object*);
lean_object* l_Lean_Elab_addDeclarationRanges___at_Lean_Elab_Command_elabStructure___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_mkOptionalNode___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_CollectFVars_instInhabitedState___closed__1;
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields_match__2(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FileMap_leanPosToLspPos(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_12336____closed__12;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__5___closed__2;
lean_object* l_Array_filterM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__3;
lean_object* l_Lean_Elab_Command_StructFieldInfo_isFromParent_match__1(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__2(lean_object*);
lean_object* l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_findFieldInfo_x3f(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed_match__1___rarg(lean_object*, lean_object*);
uint8_t l_Lean_Elab_isFreshInstanceName(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_setReducibilityStatus___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Command_structImplicitBinder___elambda__1___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__1;
lean_object* l_Array_foldlMUnsafe___at_Lean_Elab_Command_elabStructure___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__7___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__3;
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getDeclarationSelectionRef(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__2(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_StructFieldInfo_isSubobject_match__1(lean_object*);
lean_object* l_Array_forM___at_Lean_Elab_Term_collectUsedFVarsAtFVars___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_filter___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_toAttributeKind___rarg___lambda__2___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__3;
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__2___closed__3;
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Command_instInhabitedStructFieldKind;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at_Lean_Elab_Command_elabStructure___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Command_checkValidCtorModifier___rarg___lambda__2___closed__3;
lean_object* l_Lean_Elab_Command_elabStructure___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_findFieldInfo_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__2___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__3(lean_object*);
extern lean_object* l_Array_findSomeM_x3f___rarg___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_is_class(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__3;
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__5(lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_synthesizeInst___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabStructure___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Command_mkDefViewOfConstant___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withAutoBoundImplicitLocal___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isStructure(lean_object*, lean_object*);
lean_object* l_Lean_Elab_applyVisibility___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__13(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe___at_Lean_Elab_Command_elabStructure___spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabStructure___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__1___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__7;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__5;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__4___rarg(uint8_t, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue(lean_object*);
lean_object* l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_elabDeriving___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkCtor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static uint8_t _init_l_Lean_Elab_Command_instInhabitedStructFieldKind() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static uint8_t _init_l_Lean_Elab_Command_StructFieldInfo_inferMod___default() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_StructFieldInfo_value_x3f___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_instInhabitedStructFieldInfo___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = l_Lean_instInhabitedExpr___closed__1;
x_4 = 0;
x_5 = 0;
x_6 = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_2);
lean_ctor_set(x_6, 2, x_3);
lean_ctor_set(x_6, 3, x_1);
lean_ctor_set_uint8(x_6, sizeof(void*)*4, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*4 + 1, x_5);
return x_6;
}
}
static lean_object* _init_l_Lean_Elab_Command_instInhabitedStructFieldInfo() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Command_instInhabitedStructFieldInfo___closed__1;
return x_1;
}
}
lean_object* l_Lean_Elab_Command_StructFieldInfo_isFromParent_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(x_1);
if (lean_obj_tag(x_4) == 1)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_box(x_1);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
}
}
lean_object* l_Lean_Elab_Command_StructFieldInfo_isFromParent_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_StructFieldInfo_isFromParent_match__1___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_StructFieldInfo_isFromParent_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_Lean_Elab_Command_StructFieldInfo_isFromParent_match__1___rarg(x_4, x_2, x_3);
return x_5;
}
}
uint8_t l_Lean_Elab_Command_StructFieldInfo_isFromParent(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_ctor_get_uint8(x_1, sizeof(void*)*4);
x_3 = lean_box(x_2);
if (lean_obj_tag(x_3) == 1)
{
uint8_t x_4; 
x_4 = 1;
return x_4;
}
else
{
uint8_t x_5; 
lean_dec(x_3);
x_5 = 0;
return x_5;
}
}
}
lean_object* l_Lean_Elab_Command_StructFieldInfo_isFromParent___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_Command_StructFieldInfo_isFromParent(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Command_StructFieldInfo_isSubobject_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(x_1);
if (lean_obj_tag(x_4) == 2)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_box(x_1);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
}
}
lean_object* l_Lean_Elab_Command_StructFieldInfo_isSubobject_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_StructFieldInfo_isSubobject_match__1___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_StructFieldInfo_isSubobject_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_Lean_Elab_Command_StructFieldInfo_isSubobject_match__1___rarg(x_4, x_2, x_3);
return x_5;
}
}
uint8_t l_Lean_Elab_Command_StructFieldInfo_isSubobject(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_ctor_get_uint8(x_1, sizeof(void*)*4);
x_3 = lean_box(x_2);
if (lean_obj_tag(x_3) == 2)
{
uint8_t x_4; 
x_4 = 1;
return x_4;
}
else
{
uint8_t x_5; 
lean_dec(x_3);
x_5 = 0;
return x_5;
}
}
}
lean_object* l_Lean_Elab_Command_StructFieldInfo_isSubobject___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_Command_StructFieldInfo_isSubobject(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_defaultCtorName() {
_start:
{
lean_object* x_1; 
x_1 = l_myMacro____x40_Init_NotationExtra___hyg_5637____closed__9;
return x_1;
}
}
lean_object* l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; lean_object* x_11; 
x_9 = 2;
x_10 = lean_box(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_8);
return x_11;
}
}
static lean_object* _init_l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5___lambda__1___boxed), 8, 0);
return x_1;
}
}
lean_object* l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Lean_Syntax_getArg(x_1, x_9);
x_11 = l_Lean_Syntax_isNone(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = l_Lean_Syntax_getArg(x_10, x_9);
lean_dec(x_10);
x_13 = l_Lean_Syntax_getKind(x_12);
x_14 = l_Lean_Parser_Term_scoped___elambda__1___closed__1;
x_15 = lean_name_eq(x_13, x_14);
lean_dec(x_13);
if (x_15 == 0)
{
uint8_t x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_16 = 1;
x_17 = lean_box(x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_8);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_6, 4);
lean_inc(x_19);
x_20 = l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5___closed__1;
x_21 = l_Lean_Name_isAnonymous(x_19);
lean_dec(x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_box(0);
x_23 = lean_apply_8(x_20, x_22, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_24 = l_Lean_Elab_toAttributeKind___rarg___lambda__2___closed__2;
x_25 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_24, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
return x_25;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_25, 0);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_25);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
else
{
uint8_t x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_30 = 0;
x_31 = lean_box(x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_8);
return x_32;
}
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_7, 3);
x_12 = l_Lean_replaceRef(x_1, x_11);
lean_dec(x_11);
lean_ctor_set(x_7, 3, x_12);
x_13 = l_Lean_throwError___at_Lean_Elab_Term_elabDoubleQuotedName___spec__4(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_14 = lean_ctor_get(x_7, 0);
x_15 = lean_ctor_get(x_7, 1);
x_16 = lean_ctor_get(x_7, 2);
x_17 = lean_ctor_get(x_7, 3);
x_18 = lean_ctor_get(x_7, 4);
x_19 = lean_ctor_get(x_7, 5);
x_20 = lean_ctor_get(x_7, 6);
x_21 = lean_ctor_get(x_7, 7);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_7);
x_22 = l_Lean_replaceRef(x_1, x_17);
lean_dec(x_17);
x_23 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_23, 0, x_14);
lean_ctor_set(x_23, 1, x_15);
lean_ctor_set(x_23, 2, x_16);
lean_ctor_set(x_23, 3, x_22);
lean_ctor_set(x_23, 4, x_18);
lean_ctor_set(x_23, 5, x_19);
lean_ctor_set(x_23, 6, x_20);
lean_ctor_set(x_23, 7, x_21);
x_24 = l_Lean_throwError___at_Lean_Elab_Term_elabDoubleQuotedName___spec__4(x_2, x_3, x_4, x_5, x_6, x_23, x_8, x_9);
lean_dec(x_23);
return x_24;
}
}
}
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__1(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_12, 0, x_2);
lean_ctor_set(x_12, 1, x_3);
lean_ctor_set_uint8(x_12, sizeof(void*)*2, x_1);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
}
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__2(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_11 = lean_st_ref_get(x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_isAttribute(x_14, x_3);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
lean_dec(x_2);
x_16 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_16, 0, x_3);
x_17 = l_Lean_Elab_elabAttr___rarg___lambda__8___closed__2;
x_18 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
x_19 = l_Lean_Elab_elabAttr___rarg___lambda__8___closed__3;
x_20 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_20, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
return x_21;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_21);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_box(0);
x_27 = l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__1(x_1, x_3, x_2, x_26, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
lean_dec(x_4);
return x_27;
}
}
}
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Lean_Syntax_getArg(x_1, x_9);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_11 = l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_36 = lean_unsigned_to_nat(1u);
x_37 = l_Lean_Syntax_getArg(x_1, x_36);
x_38 = lean_st_ref_get(x_7, x_13);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_ctor_get(x_39, 0);
lean_inc(x_41);
lean_dec(x_39);
x_42 = lean_ctor_get(x_6, 3);
lean_inc(x_42);
x_43 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_40);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = lean_ctor_get(x_6, 1);
lean_inc(x_46);
x_47 = lean_ctor_get(x_6, 2);
lean_inc(x_47);
x_48 = lean_st_ref_get(x_7, x_45);
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
lean_inc(x_41);
x_52 = lean_alloc_closure((void*)(l___private_Lean_Elab_Util_0__Lean_Elab_expandMacro_x3f___boxed), 4, 1);
lean_closure_set(x_52, 0, x_41);
x_53 = x_52;
x_54 = lean_environment_main_module(x_41);
x_55 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
lean_ctor_set(x_55, 2, x_44);
lean_ctor_set(x_55, 3, x_46);
lean_ctor_set(x_55, 4, x_47);
lean_ctor_set(x_55, 5, x_42);
x_56 = l_Lean_expandMacros(x_37, x_55, x_51);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; 
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
x_59 = lean_st_ref_take(x_7, x_50);
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
lean_dec(x_59);
x_62 = !lean_is_exclusive(x_60);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_60, 1);
lean_dec(x_63);
lean_ctor_set(x_60, 1, x_58);
x_64 = lean_st_ref_set(x_7, x_60, x_61);
x_65 = lean_ctor_get(x_64, 1);
lean_inc(x_65);
lean_dec(x_64);
x_14 = x_57;
x_15 = x_65;
goto block_35;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_66 = lean_ctor_get(x_60, 0);
x_67 = lean_ctor_get(x_60, 2);
x_68 = lean_ctor_get(x_60, 3);
lean_inc(x_68);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_60);
x_69 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_69, 0, x_66);
lean_ctor_set(x_69, 1, x_58);
lean_ctor_set(x_69, 2, x_67);
lean_ctor_set(x_69, 3, x_68);
x_70 = lean_st_ref_set(x_7, x_69, x_61);
x_71 = lean_ctor_get(x_70, 1);
lean_inc(x_71);
lean_dec(x_70);
x_14 = x_57;
x_15 = x_71;
goto block_35;
}
}
else
{
lean_object* x_72; 
lean_dec(x_12);
x_72 = lean_ctor_get(x_56, 0);
lean_inc(x_72);
lean_dec(x_56);
if (lean_obj_tag(x_72) == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; uint8_t x_78; 
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
lean_dec(x_72);
x_75 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_75, 0, x_74);
x_76 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_76, 0, x_75);
x_77 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__5(x_73, x_76, x_2, x_3, x_4, x_5, x_6, x_7, x_50);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_73);
x_78 = !lean_is_exclusive(x_77);
if (x_78 == 0)
{
return x_77;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_77, 0);
x_80 = lean_ctor_get(x_77, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_77);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
return x_81;
}
}
else
{
lean_object* x_82; uint8_t x_83; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_82 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__7___rarg(x_50);
x_83 = !lean_is_exclusive(x_82);
if (x_83 == 0)
{
return x_82;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_84 = lean_ctor_get(x_82, 0);
x_85 = lean_ctor_get(x_82, 1);
lean_inc(x_85);
lean_inc(x_84);
lean_dec(x_82);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_84);
lean_ctor_set(x_86, 1, x_85);
return x_86;
}
}
}
block_35:
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
lean_inc(x_14);
x_16 = l_Lean_Syntax_getKind(x_14);
x_17 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1136____closed__15;
x_18 = lean_name_eq(x_16, x_17);
if (x_18 == 0)
{
if (lean_obj_tag(x_16) == 1)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = lean_box(0);
x_21 = lean_name_mk_string(x_20, x_19);
x_22 = lean_unbox(x_12);
lean_dec(x_12);
x_23 = l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__2(x_22, x_14, x_21, x_2, x_3, x_4, x_5, x_6, x_7, x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
lean_dec(x_16);
lean_dec(x_12);
x_24 = l_Lean_Elab_elabAttr___rarg___lambda__10___closed__3;
x_25 = l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__6(x_14, x_24, x_2, x_3, x_4, x_5, x_6, x_7, x_15);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_14);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
return x_25;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_25, 0);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_25);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; lean_object* x_34; 
lean_dec(x_16);
x_30 = l_Lean_Syntax_getArg(x_14, x_9);
x_31 = l_Lean_Syntax_getId(x_30);
lean_dec(x_30);
x_32 = lean_erase_macro_scopes(x_31);
x_33 = lean_unbox(x_12);
lean_dec(x_12);
x_34 = l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__2(x_33, x_14, x_32, x_2, x_3, x_4, x_5, x_6, x_7, x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_34;
}
}
}
else
{
uint8_t x_87; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_87 = !lean_is_exclusive(x_11);
if (x_87 == 0)
{
return x_11;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_11, 0);
x_89 = lean_ctor_get(x_11, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_11);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_89);
return x_90;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__7(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_3 < x_2;
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_4);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_uget(x_1, x_3);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_15 = l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4(x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_array_push(x_4, x_16);
x_19 = 1;
x_20 = x_3 + x_19;
x_3 = x_20;
x_4 = x_18;
x_11 = x_17;
goto _start;
}
else
{
uint8_t x_22; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_22 = !lean_is_exclusive(x_15);
if (x_22 == 0)
{
return x_15;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_15, 0);
x_24 = lean_ctor_get(x_15, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_15);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
}
lean_object* l_Lean_Elab_elabAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; lean_object* x_13; lean_object* x_14; 
x_9 = l_Lean_Syntax_getSepArgs(x_1);
x_10 = lean_array_get_size(x_9);
x_11 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_12 = 0;
x_13 = l_Array_empty___closed__1;
x_14 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__7(x_9, x_11, x_12, x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_9);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
return x_14;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_14);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_14);
if (x_19 == 0)
{
return x_14;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_14, 0);
x_21 = lean_ctor_get(x_14, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_14);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
lean_object* l_Lean_Elab_elabDeclAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = l_Lean_Syntax_getArg(x_1, x_9);
x_11 = l_Lean_Elab_elabAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__3(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_10);
return x_11;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_7, 3);
x_12 = l_Lean_replaceRef(x_1, x_11);
lean_dec(x_11);
lean_ctor_set(x_7, 3, x_12);
x_13 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__9(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_14 = lean_ctor_get(x_7, 0);
x_15 = lean_ctor_get(x_7, 1);
x_16 = lean_ctor_get(x_7, 2);
x_17 = lean_ctor_get(x_7, 3);
x_18 = lean_ctor_get(x_7, 4);
x_19 = lean_ctor_get(x_7, 5);
x_20 = lean_ctor_get(x_7, 6);
x_21 = lean_ctor_get(x_7, 7);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_7);
x_22 = l_Lean_replaceRef(x_1, x_17);
lean_dec(x_17);
x_23 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_23, 0, x_14);
lean_ctor_set(x_23, 1, x_15);
lean_ctor_set(x_23, 2, x_16);
lean_ctor_set(x_23, 3, x_22);
lean_ctor_set(x_23, 4, x_18);
lean_ctor_set(x_23, 5, x_19);
lean_ctor_set(x_23, 6, x_20);
lean_ctor_set(x_23, 7, x_21);
x_24 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__9(x_2, x_3, x_4, x_5, x_6, x_23, x_8, x_9);
lean_dec(x_23);
return x_24;
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_7, 3);
x_12 = l_Lean_replaceRef(x_1, x_11);
lean_dec(x_11);
lean_ctor_set(x_7, 3, x_12);
x_13 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__11(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_14 = lean_ctor_get(x_7, 0);
x_15 = lean_ctor_get(x_7, 1);
x_16 = lean_ctor_get(x_7, 2);
x_17 = lean_ctor_get(x_7, 3);
x_18 = lean_ctor_get(x_7, 4);
x_19 = lean_ctor_get(x_7, 5);
x_20 = lean_ctor_get(x_7, 6);
x_21 = lean_ctor_get(x_7, 7);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_7);
x_22 = l_Lean_replaceRef(x_1, x_17);
lean_dec(x_17);
x_23 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_23, 0, x_14);
lean_ctor_set(x_23, 1, x_15);
lean_ctor_set(x_23, 2, x_16);
lean_ctor_set(x_23, 3, x_22);
lean_ctor_set(x_23, 4, x_18);
lean_ctor_set(x_23, 5, x_19);
lean_ctor_set(x_23, 6, x_20);
lean_ctor_set(x_23, 7, x_21);
x_24 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__11(x_2, x_3, x_4, x_5, x_6, x_23, x_8, x_9);
lean_dec(x_23);
return x_24;
}
}
}
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; uint8_t x_15; uint8_t x_16; 
x_14 = l_Lean_Syntax_isNone(x_1);
x_15 = l_Lean_Syntax_isNone(x_2);
x_16 = l_Lean_Syntax_isNone(x_3);
if (x_14 == 0)
{
if (x_15 == 0)
{
if (x_16 == 0)
{
uint8_t x_17; lean_object* x_18; lean_object* x_19; 
x_17 = 1;
x_18 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_18, 0, x_4);
lean_ctor_set(x_18, 1, x_6);
lean_ctor_set_uint8(x_18, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_18, sizeof(void*)*2 + 1, x_17);
lean_ctor_set_uint8(x_18, sizeof(void*)*2 + 2, x_17);
lean_ctor_set_uint8(x_18, sizeof(void*)*2 + 3, x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_13);
return x_19;
}
else
{
uint8_t x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; 
x_20 = 1;
x_21 = 0;
x_22 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_22, 0, x_4);
lean_ctor_set(x_22, 1, x_6);
lean_ctor_set_uint8(x_22, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_22, sizeof(void*)*2 + 1, x_20);
lean_ctor_set_uint8(x_22, sizeof(void*)*2 + 2, x_20);
lean_ctor_set_uint8(x_22, sizeof(void*)*2 + 3, x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_13);
return x_23;
}
}
else
{
if (x_16 == 0)
{
uint8_t x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; 
x_24 = 1;
x_25 = 0;
x_26 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_26, 0, x_4);
lean_ctor_set(x_26, 1, x_6);
lean_ctor_set_uint8(x_26, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_26, sizeof(void*)*2 + 1, x_24);
lean_ctor_set_uint8(x_26, sizeof(void*)*2 + 2, x_25);
lean_ctor_set_uint8(x_26, sizeof(void*)*2 + 3, x_24);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_13);
return x_27;
}
else
{
uint8_t x_28; uint8_t x_29; lean_object* x_30; lean_object* x_31; 
x_28 = 1;
x_29 = 0;
x_30 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_30, 0, x_4);
lean_ctor_set(x_30, 1, x_6);
lean_ctor_set_uint8(x_30, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_30, sizeof(void*)*2 + 1, x_28);
lean_ctor_set_uint8(x_30, sizeof(void*)*2 + 2, x_29);
lean_ctor_set_uint8(x_30, sizeof(void*)*2 + 3, x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_13);
return x_31;
}
}
}
else
{
if (x_15 == 0)
{
if (x_16 == 0)
{
uint8_t x_32; uint8_t x_33; lean_object* x_34; lean_object* x_35; 
x_32 = 0;
x_33 = 1;
x_34 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_34, 0, x_4);
lean_ctor_set(x_34, 1, x_6);
lean_ctor_set_uint8(x_34, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_34, sizeof(void*)*2 + 1, x_32);
lean_ctor_set_uint8(x_34, sizeof(void*)*2 + 2, x_33);
lean_ctor_set_uint8(x_34, sizeof(void*)*2 + 3, x_33);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_13);
return x_35;
}
else
{
uint8_t x_36; uint8_t x_37; lean_object* x_38; lean_object* x_39; 
x_36 = 0;
x_37 = 1;
x_38 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_38, 0, x_4);
lean_ctor_set(x_38, 1, x_6);
lean_ctor_set_uint8(x_38, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_38, sizeof(void*)*2 + 1, x_36);
lean_ctor_set_uint8(x_38, sizeof(void*)*2 + 2, x_37);
lean_ctor_set_uint8(x_38, sizeof(void*)*2 + 3, x_36);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_13);
return x_39;
}
}
else
{
if (x_16 == 0)
{
uint8_t x_40; uint8_t x_41; lean_object* x_42; lean_object* x_43; 
x_40 = 0;
x_41 = 1;
x_42 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_42, 0, x_4);
lean_ctor_set(x_42, 1, x_6);
lean_ctor_set_uint8(x_42, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_42, sizeof(void*)*2 + 1, x_40);
lean_ctor_set_uint8(x_42, sizeof(void*)*2 + 2, x_40);
lean_ctor_set_uint8(x_42, sizeof(void*)*2 + 3, x_41);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_13);
return x_43;
}
else
{
uint8_t x_44; lean_object* x_45; lean_object* x_46; 
x_44 = 0;
x_45 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_45, 0, x_4);
lean_ctor_set(x_45, 1, x_6);
lean_ctor_set_uint8(x_45, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_45, sizeof(void*)*2 + 1, x_44);
lean_ctor_set_uint8(x_45, sizeof(void*)*2 + 2, x_44);
lean_ctor_set_uint8(x_45, sizeof(void*)*2 + 3, x_44);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_13);
return x_46;
}
}
}
}
}
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_Syntax_getOptional_x3f(x_5);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Array_empty___closed__1;
x_16 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_6, x_15, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_14, 0);
lean_inc(x_17);
lean_dec(x_14);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_18 = l_Lean_Elab_elabDeclAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__2(x_17, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_6, x_19, x_7, x_8, x_9, x_10, x_11, x_12, x_20);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_21;
}
else
{
uint8_t x_22; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
x_22 = !lean_is_exclusive(x_18);
if (x_22 == 0)
{
return x_18;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_18, 0);
x_24 = lean_ctor_get(x_18, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_18);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
}
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_Syntax_getOptional_x3f(x_5);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; lean_object* x_16; 
x_15 = 0;
x_16 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__2(x_1, x_2, x_3, x_6, x_4, x_15, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_14, 0);
lean_inc(x_17);
lean_dec(x_14);
lean_inc(x_17);
x_18 = l_Lean_Syntax_getKind(x_17);
x_19 = l_Lean_Parser_Command_private___elambda__1___closed__2;
x_20 = lean_name_eq(x_18, x_19);
if (x_20 == 0)
{
lean_object* x_21; uint8_t x_22; 
x_21 = l_Lean_Parser_Command_protected___elambda__1___closed__1;
x_22 = lean_name_eq(x_18, x_21);
lean_dec(x_18);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
lean_dec(x_6);
x_23 = l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__3;
x_24 = l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__8(x_17, x_23, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_17);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
return x_24;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_24, 0);
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_24);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
else
{
uint8_t x_29; lean_object* x_30; 
lean_dec(x_17);
x_29 = 1;
x_30 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__2(x_1, x_2, x_3, x_6, x_4, x_29, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_30;
}
}
else
{
uint8_t x_31; lean_object* x_32; 
lean_dec(x_18);
lean_dec(x_17);
x_31 = 2;
x_32 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__2(x_1, x_2, x_3, x_6, x_4, x_31, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_32;
}
}
}
}
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Lean_Syntax_getArg(x_1, x_9);
x_11 = lean_unsigned_to_nat(1u);
x_12 = l_Lean_Syntax_getArg(x_1, x_11);
x_13 = lean_unsigned_to_nat(2u);
x_14 = l_Lean_Syntax_getArg(x_1, x_13);
x_15 = lean_unsigned_to_nat(3u);
x_16 = l_Lean_Syntax_getArg(x_1, x_15);
x_17 = lean_unsigned_to_nat(4u);
x_18 = l_Lean_Syntax_getArg(x_1, x_17);
x_19 = lean_unsigned_to_nat(5u);
x_20 = l_Lean_Syntax_getArg(x_1, x_19);
x_21 = l_Lean_Syntax_getOptional_x3f(x_10);
lean_dec(x_10);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_box(0);
x_23 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__3(x_16, x_20, x_18, x_12, x_14, x_22, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_18);
lean_dec(x_20);
lean_dec(x_16);
return x_23;
}
else
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_21);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_21, 0);
x_26 = l_Lean_Syntax_getArg(x_25, x_11);
if (lean_obj_tag(x_26) == 2)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_25);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_string_utf8_byte_size(x_27);
x_29 = lean_nat_sub(x_28, x_13);
lean_dec(x_28);
x_30 = lean_string_utf8_extract(x_27, x_9, x_29);
lean_dec(x_29);
lean_dec(x_27);
lean_ctor_set(x_21, 0, x_30);
x_31 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__3(x_16, x_20, x_18, x_12, x_14, x_21, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_18);
lean_dec(x_20);
lean_dec(x_16);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
lean_free_object(x_21);
lean_dec(x_20);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_12);
x_32 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_32, 0, x_26);
x_33 = l_Lean_Elab_expandOptDocComment_x3f___rarg___closed__2;
x_34 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
x_35 = l_Lean_KernelException_toMessageData___closed__15;
x_36 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
x_37 = l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__10(x_25, x_36, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_25);
x_38 = !lean_is_exclusive(x_37);
if (x_38 == 0)
{
return x_37;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_37, 0);
x_40 = lean_ctor_get(x_37, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_37);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_ctor_get(x_21, 0);
lean_inc(x_42);
lean_dec(x_21);
x_43 = l_Lean_Syntax_getArg(x_42, x_11);
if (lean_obj_tag(x_43) == 2)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_42);
x_44 = lean_ctor_get(x_43, 1);
lean_inc(x_44);
lean_dec(x_43);
x_45 = lean_string_utf8_byte_size(x_44);
x_46 = lean_nat_sub(x_45, x_13);
lean_dec(x_45);
x_47 = lean_string_utf8_extract(x_44, x_9, x_46);
lean_dec(x_46);
lean_dec(x_44);
x_48 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_48, 0, x_47);
x_49 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__3(x_16, x_20, x_18, x_12, x_14, x_48, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_18);
lean_dec(x_20);
lean_dec(x_16);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
lean_dec(x_20);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_12);
x_50 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_50, 0, x_43);
x_51 = l_Lean_Elab_expandOptDocComment_x3f___rarg___closed__2;
x_52 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_50);
x_53 = l_Lean_KernelException_toMessageData___closed__15;
x_54 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
x_55 = l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__10(x_42, x_54, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_42);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_55)) {
 lean_ctor_release(x_55, 0);
 lean_ctor_release(x_55, 1);
 x_58 = x_55;
} else {
 lean_dec_ref(x_55);
 x_58 = lean_box(0);
}
if (lean_is_scalar(x_58)) {
 x_59 = lean_alloc_ctor(1, 2, 0);
} else {
 x_59 = x_58;
}
lean_ctor_set(x_59, 0, x_56);
lean_ctor_set(x_59, 1, x_57);
return x_59;
}
}
}
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_1, 1);
x_11 = lean_array_get_size(x_10);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_eq(x_11, x_12);
lean_dec(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = l_Lean_Elab_Command_checkValidCtorModifier___rarg___lambda__1___closed__3;
x_15 = l_Lean_throwError___at_Lean_Elab_Term_evalExpr___spec__5(x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_3);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_9);
return x_17;
}
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 3);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_box(0);
x_12 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___lambda__1(x_1, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = l_Lean_Elab_Command_checkValidCtorModifier___rarg___lambda__2___closed__3;
x_14 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
return x_14;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_14);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 2);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_box(0);
x_12 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___lambda__2(x_1, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = l_Lean_Elab_Command_checkValidCtorModifier___rarg___lambda__3___closed__3;
x_14 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
return x_14;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_14);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
x_11 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___lambda__3(x_1, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = l_Lean_Elab_Command_checkValidCtorModifier___rarg___closed__3;
x_13 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
return x_13;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_13);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_private_to_user_name(x_1);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
lean_dec(x_2);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
else
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_ctor_get(x_11, 0);
lean_inc(x_14);
lean_dec(x_11);
x_15 = l_Lean_Environment_contains(x_2, x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_14);
lean_dec(x_4);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_10);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_18 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_18, 0, x_14);
x_19 = l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__1___closed__2;
x_20 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
x_21 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_22 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
x_23 = l_Lean_throwError___at_Lean_Elab_Term_evalExpr___spec__5(x_22, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_23;
}
}
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
lean_inc(x_1);
lean_inc(x_2);
x_11 = l_Lean_mkPrivateName(x_2, x_1);
lean_inc(x_2);
x_12 = l_Lean_Environment_contains(x_2, x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_box(0);
x_14 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14___lambda__1(x_1, x_2, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
lean_dec(x_2);
x_15 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_15, 0, x_1);
x_16 = l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__2___closed__2;
x_17 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
x_18 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_19, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
return x_20;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_20);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_12);
x_13 = l_Lean_Environment_contains(x_12, x_1);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_box(0);
x_15 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14___lambda__2(x_1, x_12, x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
return x_15;
}
else
{
lean_object* x_16; 
lean_dec(x_12);
lean_inc(x_1);
x_16 = lean_private_to_user_name(x_1);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_17 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_17, 0, x_1);
x_18 = l_Lean_KernelException_toMessageData___closed__3;
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
x_20 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_21 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
x_22 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_21, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
return x_22;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_22);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
lean_dec(x_1);
x_27 = lean_ctor_get(x_16, 0);
lean_inc(x_27);
lean_dec(x_16);
x_28 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_28, 0, x_27);
x_29 = l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__3___closed__2;
x_30 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
x_31 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_32 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
x_33 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_32, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
return x_33;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_33, 0);
x_36 = lean_ctor_get(x_33, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_33);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
}
lean_object* l_Lean_Elab_applyVisibility___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__13(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_10; 
lean_inc(x_2);
x_10 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_10, 0);
lean_dec(x_12);
lean_ctor_set(x_10, 0, x_2);
return x_10;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_dec(x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
else
{
uint8_t x_15; 
lean_dec(x_2);
x_15 = !lean_is_exclusive(x_10);
if (x_15 == 0)
{
return x_10;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_10, 0);
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_10);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
case 1:
{
lean_object* x_19; 
lean_inc(x_3);
lean_inc(x_2);
x_19 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_st_ref_get(x_8, x_20);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_protectedExt;
lean_inc(x_2);
x_26 = l_Lean_PersistentEnvExtension_addEntry___rarg(x_25, x_24, x_2);
x_27 = l_Lean_setEnv___at_Lean_Elab_Term_evalExpr___spec__6(x_26, x_3, x_4, x_5, x_6, x_7, x_8, x_23);
lean_dec(x_3);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; 
x_29 = lean_ctor_get(x_27, 0);
lean_dec(x_29);
lean_ctor_set(x_27, 0, x_2);
return x_27;
}
else
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_27, 1);
lean_inc(x_30);
lean_dec(x_27);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_2);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
else
{
uint8_t x_32; 
lean_dec(x_3);
lean_dec(x_2);
x_32 = !lean_is_exclusive(x_19);
if (x_32 == 0)
{
return x_19;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_19, 0);
x_34 = lean_ctor_get(x_19, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_19);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
default: 
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_36 = lean_st_ref_get(x_8, x_9);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = lean_ctor_get(x_37, 0);
lean_inc(x_39);
lean_dec(x_37);
x_40 = l_Lean_mkPrivateName(x_39, x_2);
lean_inc(x_40);
x_41 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14(x_40, x_3, x_4, x_5, x_6, x_7, x_8, x_38);
if (lean_obj_tag(x_41) == 0)
{
uint8_t x_42; 
x_42 = !lean_is_exclusive(x_41);
if (x_42 == 0)
{
lean_object* x_43; 
x_43 = lean_ctor_get(x_41, 0);
lean_dec(x_43);
lean_ctor_set(x_41, 0, x_40);
return x_41;
}
else
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_41, 1);
lean_inc(x_44);
lean_dec(x_41);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_40);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
else
{
uint8_t x_46; 
lean_dec(x_40);
x_46 = !lean_is_exclusive(x_41);
if (x_46 == 0)
{
return x_41;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_41, 0);
x_48 = lean_ctor_get(x_41, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_41);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
}
}
}
lean_object* l_Lean_addDocString___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__16(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_st_ref_take(x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = !lean_is_exclusive(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_14 = lean_ctor_get(x_11, 0);
x_15 = l_Lean_docStringExt;
x_16 = l_Lean_MapDeclarationExtension_insert___rarg(x_15, x_14, x_1, x_2);
lean_ctor_set(x_11, 0, x_16);
x_17 = lean_st_ref_set(x_8, x_11, x_12);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_17, 0);
lean_dec(x_19);
x_20 = lean_box(0);
lean_ctor_set(x_17, 0, x_20);
return x_17;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_17, 1);
lean_inc(x_21);
lean_dec(x_17);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_24 = lean_ctor_get(x_11, 0);
x_25 = lean_ctor_get(x_11, 1);
x_26 = lean_ctor_get(x_11, 2);
x_27 = lean_ctor_get(x_11, 3);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_11);
x_28 = l_Lean_docStringExt;
x_29 = l_Lean_MapDeclarationExtension_insert___rarg(x_28, x_24, x_1, x_2);
x_30 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_25);
lean_ctor_set(x_30, 2, x_26);
lean_ctor_set(x_30, 3, x_27);
x_31 = lean_st_ref_set(x_8, x_30, x_12);
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_33 = x_31;
} else {
 lean_dec_ref(x_31);
 x_33 = lean_box(0);
}
x_34 = lean_box(0);
if (lean_is_scalar(x_33)) {
 x_35 = lean_alloc_ctor(0, 2, 0);
} else {
 x_35 = x_33;
}
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_32);
return x_35;
}
}
}
lean_object* l_Lean_addDocString_x27___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__15(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_1);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_2, 0);
lean_inc(x_12);
lean_dec(x_2);
x_13 = l_Lean_addDocString___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__16(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_13;
}
}
}
lean_object* l_Lean_Elab_getDeclarationRange___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__18(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_2, 1);
x_10 = 0;
x_11 = l_Lean_Syntax_getPos_x3f(x_1, x_10);
x_12 = l_Lean_Syntax_getTailPos_x3f(x_1, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Lean_FileMap_toPosition(x_9, x_13);
lean_inc(x_14);
x_15 = l_Lean_FileMap_leanPosToLspPos(x_9, x_14);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
lean_inc(x_16);
lean_inc(x_14);
x_17 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_16);
lean_ctor_set(x_17, 2, x_14);
lean_ctor_set(x_17, 3, x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_8);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_19 = lean_ctor_get(x_15, 1);
lean_inc(x_19);
lean_dec(x_15);
x_20 = lean_ctor_get(x_12, 0);
lean_inc(x_20);
lean_dec(x_12);
x_21 = l_Lean_FileMap_toPosition(x_9, x_20);
lean_inc(x_21);
x_22 = l_Lean_FileMap_leanPosToLspPos(x_9, x_21);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_24, 0, x_14);
lean_ctor_set(x_24, 1, x_19);
lean_ctor_set(x_24, 2, x_21);
lean_ctor_set(x_24, 3, x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_8);
return x_25;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_11, 0);
lean_inc(x_26);
lean_dec(x_11);
x_27 = l_Lean_FileMap_toPosition(x_9, x_26);
lean_inc(x_27);
x_28 = l_Lean_FileMap_leanPosToLspPos(x_9, x_27);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
lean_inc(x_29);
lean_inc(x_27);
x_30 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_30, 0, x_27);
lean_ctor_set(x_30, 1, x_29);
lean_ctor_set(x_30, 2, x_27);
lean_ctor_set(x_30, 3, x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_8);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_32 = lean_ctor_get(x_28, 1);
lean_inc(x_32);
lean_dec(x_28);
x_33 = lean_ctor_get(x_12, 0);
lean_inc(x_33);
lean_dec(x_12);
x_34 = l_Lean_FileMap_toPosition(x_9, x_33);
lean_inc(x_34);
x_35 = l_Lean_FileMap_leanPosToLspPos(x_9, x_34);
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
lean_dec(x_35);
x_37 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_37, 0, x_27);
lean_ctor_set(x_37, 1, x_32);
lean_ctor_set(x_37, 2, x_34);
lean_ctor_set(x_37, 3, x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_8);
return x_38;
}
}
}
}
lean_object* l_Lean_addDeclarationRanges___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__19(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_st_ref_take(x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = !lean_is_exclusive(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_14 = lean_ctor_get(x_11, 0);
x_15 = l_Lean_declRangeExt;
x_16 = l_Lean_MapDeclarationExtension_insert___rarg(x_15, x_14, x_1, x_2);
lean_ctor_set(x_11, 0, x_16);
x_17 = lean_st_ref_set(x_8, x_11, x_12);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_17, 0);
lean_dec(x_19);
x_20 = lean_box(0);
lean_ctor_set(x_17, 0, x_20);
return x_17;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_17, 1);
lean_inc(x_21);
lean_dec(x_17);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_24 = lean_ctor_get(x_11, 0);
x_25 = lean_ctor_get(x_11, 1);
x_26 = lean_ctor_get(x_11, 2);
x_27 = lean_ctor_get(x_11, 3);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_11);
x_28 = l_Lean_declRangeExt;
x_29 = l_Lean_MapDeclarationExtension_insert___rarg(x_28, x_24, x_1, x_2);
x_30 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_25);
lean_ctor_set(x_30, 2, x_26);
lean_ctor_set(x_30, 3, x_27);
x_31 = lean_st_ref_set(x_8, x_30, x_12);
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_33 = x_31;
} else {
 lean_dec_ref(x_31);
 x_33 = lean_box(0);
}
x_34 = lean_box(0);
if (lean_is_scalar(x_33)) {
 x_35 = lean_alloc_ctor(0, 2, 0);
} else {
 x_35 = x_33;
}
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_32);
return x_35;
}
}
}
lean_object* l_Lean_Elab_addAuxDeclarationRanges___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__17(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_11 = l_Lean_Elab_getDeclarationRange___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__18(x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_Elab_getDeclarationRange___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__18(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_12);
lean_ctor_set(x_17, 1, x_15);
x_18 = l_Lean_addDeclarationRanges___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__19(x_1, x_17, x_4, x_5, x_6, x_7, x_8, x_9, x_16);
return x_18;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; 
x_12 = lean_unsigned_to_nat(2u);
x_13 = l_Lean_Syntax_getArg(x_1, x_12);
x_14 = l_Lean_Syntax_isNone(x_13);
lean_dec(x_13);
x_15 = lean_unsigned_to_nat(1u);
x_16 = l_Lean_Syntax_getArg(x_1, x_15);
x_17 = l_Lean_Syntax_getId(x_16);
lean_inc(x_17);
x_18 = l_Lean_Name_append(x_2, x_17);
x_19 = lean_ctor_get_uint8(x_3, sizeof(void*)*2);
lean_inc(x_5);
x_20 = l_Lean_Elab_applyVisibility___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__13(x_19, x_18, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (x_14 == 0)
{
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_ctor_get(x_3, 0);
lean_inc(x_23);
lean_inc(x_21);
x_24 = l_Lean_addDocString_x27___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__15(x_21, x_23, x_5, x_6, x_7, x_8, x_9, x_10, x_22);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
lean_inc(x_21);
x_26 = l_Lean_Elab_addAuxDeclarationRanges___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__17(x_21, x_16, x_16, x_5, x_6, x_7, x_8, x_9, x_10, x_25);
lean_dec(x_5);
lean_dec(x_16);
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; uint8_t x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_26, 0);
lean_dec(x_28);
x_29 = 1;
x_30 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_30, 0, x_1);
lean_ctor_set(x_30, 1, x_3);
lean_ctor_set(x_30, 2, x_17);
lean_ctor_set(x_30, 3, x_21);
lean_ctor_set_uint8(x_30, sizeof(void*)*4, x_29);
lean_ctor_set(x_26, 0, x_30);
return x_26;
}
else
{
lean_object* x_31; uint8_t x_32; lean_object* x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_26, 1);
lean_inc(x_31);
lean_dec(x_26);
x_32 = 1;
x_33 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_33, 0, x_1);
lean_ctor_set(x_33, 1, x_3);
lean_ctor_set(x_33, 2, x_17);
lean_ctor_set(x_33, 3, x_21);
lean_ctor_set_uint8(x_33, sizeof(void*)*4, x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_31);
return x_34;
}
}
else
{
uint8_t x_35; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_35 = !lean_is_exclusive(x_20);
if (x_35 == 0)
{
return x_20;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_20, 0);
x_37 = lean_ctor_get(x_20, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_20);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_39 = lean_ctor_get(x_20, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_20, 1);
lean_inc(x_40);
lean_dec(x_20);
x_41 = lean_ctor_get(x_3, 0);
lean_inc(x_41);
lean_inc(x_39);
x_42 = l_Lean_addDocString_x27___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__15(x_39, x_41, x_5, x_6, x_7, x_8, x_9, x_10, x_40);
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
lean_dec(x_42);
lean_inc(x_39);
x_44 = l_Lean_Elab_addAuxDeclarationRanges___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__17(x_39, x_16, x_16, x_5, x_6, x_7, x_8, x_9, x_10, x_43);
lean_dec(x_5);
lean_dec(x_16);
x_45 = !lean_is_exclusive(x_44);
if (x_45 == 0)
{
lean_object* x_46; uint8_t x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_44, 0);
lean_dec(x_46);
x_47 = 0;
x_48 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_48, 0, x_1);
lean_ctor_set(x_48, 1, x_3);
lean_ctor_set(x_48, 2, x_17);
lean_ctor_set(x_48, 3, x_39);
lean_ctor_set_uint8(x_48, sizeof(void*)*4, x_47);
lean_ctor_set(x_44, 0, x_48);
return x_44;
}
else
{
lean_object* x_49; uint8_t x_50; lean_object* x_51; lean_object* x_52; 
x_49 = lean_ctor_get(x_44, 1);
lean_inc(x_49);
lean_dec(x_44);
x_50 = 0;
x_51 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_51, 0, x_1);
lean_ctor_set(x_51, 1, x_3);
lean_ctor_set(x_51, 2, x_17);
lean_ctor_set(x_51, 3, x_39);
lean_ctor_set_uint8(x_51, sizeof(void*)*4, x_50);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_49);
return x_52;
}
}
else
{
uint8_t x_53; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_53 = !lean_is_exclusive(x_20);
if (x_53 == 0)
{
return x_20;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_20, 0);
x_55 = lean_ctor_get(x_20, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_20);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid 'protected' constructor in a 'private' structure");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = l_Lean_Elab_Modifiers_isProtected(x_3);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_box(0);
x_15 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__1(x_1, x_2, x_3, x_14, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_15;
}
else
{
uint8_t x_16; 
x_16 = l_Lean_Elab_Modifiers_isPrivate(x_4);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_box(0);
x_18 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__1(x_1, x_2, x_3, x_17, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
lean_dec(x_3);
lean_dec(x_1);
x_19 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__3;
x_20 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_19, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
return x_20;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_20);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid 'private' constructor in a 'private' structure");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_11 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_defaultCtorName;
x_12 = l_Lean_Name_append(x_3, x_11);
x_13 = lean_unsigned_to_nat(2u);
x_14 = l_Lean_Syntax_getArg(x_1, x_13);
x_15 = lean_unsigned_to_nat(5u);
x_16 = l_Lean_Syntax_getArg(x_1, x_15);
x_17 = l_Lean_Syntax_isNone(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_18 = lean_unsigned_to_nat(1u);
x_19 = l_Lean_Syntax_getArg(x_16, x_18);
lean_dec(x_16);
x_20 = l_Lean_Syntax_isNone(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_1);
x_21 = lean_unsigned_to_nat(0u);
x_22 = l_Lean_Syntax_getArg(x_19, x_21);
lean_dec(x_19);
x_23 = l_Lean_Syntax_getArg(x_22, x_21);
x_24 = !lean_is_exclusive(x_8);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_8, 3);
x_26 = l_Lean_replaceRef(x_22, x_25);
lean_dec(x_25);
lean_ctor_set(x_8, 3, x_26);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_27 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1(x_23, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_23);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
lean_inc(x_4);
x_30 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12(x_28, x_4, x_5, x_6, x_7, x_8, x_9, x_29);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; uint8_t x_32; 
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_32 = l_Lean_Elab_Modifiers_isPrivate(x_28);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_box(0);
x_34 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2(x_22, x_3, x_28, x_2, x_33, x_4, x_5, x_6, x_7, x_8, x_9, x_31);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_34;
}
else
{
uint8_t x_35; 
x_35 = l_Lean_Elab_Modifiers_isPrivate(x_2);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_box(0);
x_37 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2(x_22, x_3, x_28, x_2, x_36, x_4, x_5, x_6, x_7, x_8, x_9, x_31);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_37;
}
else
{
lean_object* x_38; lean_object* x_39; uint8_t x_40; 
lean_dec(x_28);
lean_dec(x_22);
x_38 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__3;
x_39 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_38, x_4, x_5, x_6, x_7, x_8, x_9, x_31);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_40 = !lean_is_exclusive(x_39);
if (x_40 == 0)
{
return x_39;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_39, 0);
x_42 = lean_ctor_get(x_39, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_39);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
}
else
{
uint8_t x_44; 
lean_dec(x_28);
lean_dec(x_8);
lean_dec(x_22);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_44 = !lean_is_exclusive(x_30);
if (x_44 == 0)
{
return x_30;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_30, 0);
x_46 = lean_ctor_get(x_30, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_30);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
else
{
uint8_t x_48; 
lean_dec(x_8);
lean_dec(x_22);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_48 = !lean_is_exclusive(x_27);
if (x_48 == 0)
{
return x_27;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_27, 0);
x_50 = lean_ctor_get(x_27, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_27);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_52 = lean_ctor_get(x_8, 0);
x_53 = lean_ctor_get(x_8, 1);
x_54 = lean_ctor_get(x_8, 2);
x_55 = lean_ctor_get(x_8, 3);
x_56 = lean_ctor_get(x_8, 4);
x_57 = lean_ctor_get(x_8, 5);
x_58 = lean_ctor_get(x_8, 6);
x_59 = lean_ctor_get(x_8, 7);
lean_inc(x_59);
lean_inc(x_58);
lean_inc(x_57);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_8);
x_60 = l_Lean_replaceRef(x_22, x_55);
lean_dec(x_55);
x_61 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_61, 0, x_52);
lean_ctor_set(x_61, 1, x_53);
lean_ctor_set(x_61, 2, x_54);
lean_ctor_set(x_61, 3, x_60);
lean_ctor_set(x_61, 4, x_56);
lean_ctor_set(x_61, 5, x_57);
lean_ctor_set(x_61, 6, x_58);
lean_ctor_set(x_61, 7, x_59);
lean_inc(x_9);
lean_inc(x_61);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_62 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1(x_23, x_4, x_5, x_6, x_7, x_61, x_9, x_10);
lean_dec(x_23);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
lean_dec(x_62);
lean_inc(x_4);
x_65 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12(x_63, x_4, x_5, x_6, x_7, x_61, x_9, x_64);
if (lean_obj_tag(x_65) == 0)
{
lean_object* x_66; uint8_t x_67; 
x_66 = lean_ctor_get(x_65, 1);
lean_inc(x_66);
lean_dec(x_65);
x_67 = l_Lean_Elab_Modifiers_isPrivate(x_63);
if (x_67 == 0)
{
lean_object* x_68; lean_object* x_69; 
x_68 = lean_box(0);
x_69 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2(x_22, x_3, x_63, x_2, x_68, x_4, x_5, x_6, x_7, x_61, x_9, x_66);
lean_dec(x_9);
lean_dec(x_61);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_69;
}
else
{
uint8_t x_70; 
x_70 = l_Lean_Elab_Modifiers_isPrivate(x_2);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; 
x_71 = lean_box(0);
x_72 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2(x_22, x_3, x_63, x_2, x_71, x_4, x_5, x_6, x_7, x_61, x_9, x_66);
lean_dec(x_9);
lean_dec(x_61);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_72;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
lean_dec(x_63);
lean_dec(x_22);
x_73 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__3;
x_74 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_73, x_4, x_5, x_6, x_7, x_61, x_9, x_66);
lean_dec(x_9);
lean_dec(x_61);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_74, 1);
lean_inc(x_76);
if (lean_is_exclusive(x_74)) {
 lean_ctor_release(x_74, 0);
 lean_ctor_release(x_74, 1);
 x_77 = x_74;
} else {
 lean_dec_ref(x_74);
 x_77 = lean_box(0);
}
if (lean_is_scalar(x_77)) {
 x_78 = lean_alloc_ctor(1, 2, 0);
} else {
 x_78 = x_77;
}
lean_ctor_set(x_78, 0, x_75);
lean_ctor_set(x_78, 1, x_76);
return x_78;
}
}
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
lean_dec(x_63);
lean_dec(x_61);
lean_dec(x_22);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_79 = lean_ctor_get(x_65, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_65, 1);
lean_inc(x_80);
if (lean_is_exclusive(x_65)) {
 lean_ctor_release(x_65, 0);
 lean_ctor_release(x_65, 1);
 x_81 = x_65;
} else {
 lean_dec_ref(x_65);
 x_81 = lean_box(0);
}
if (lean_is_scalar(x_81)) {
 x_82 = lean_alloc_ctor(1, 2, 0);
} else {
 x_82 = x_81;
}
lean_ctor_set(x_82, 0, x_79);
lean_ctor_set(x_82, 1, x_80);
return x_82;
}
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
lean_dec(x_61);
lean_dec(x_22);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_83 = lean_ctor_get(x_62, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_62, 1);
lean_inc(x_84);
if (lean_is_exclusive(x_62)) {
 lean_ctor_release(x_62, 0);
 lean_ctor_release(x_62, 1);
 x_85 = x_62;
} else {
 lean_dec_ref(x_62);
 x_85 = lean_box(0);
}
if (lean_is_scalar(x_85)) {
 x_86 = lean_alloc_ctor(1, 2, 0);
} else {
 x_86 = x_85;
}
lean_ctor_set(x_86, 0, x_83);
lean_ctor_set(x_86, 1, x_84);
return x_86;
}
}
}
else
{
lean_object* x_87; uint8_t x_88; 
lean_dec(x_19);
lean_inc(x_12);
x_87 = l_Lean_Elab_addAuxDeclarationRanges___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__17(x_12, x_14, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_14);
x_88 = !lean_is_exclusive(x_87);
if (x_88 == 0)
{
lean_object* x_89; lean_object* x_90; uint8_t x_91; lean_object* x_92; 
x_89 = lean_ctor_get(x_87, 0);
lean_dec(x_89);
x_90 = l_Lean_Elab_instInhabitedModifiers___closed__1;
x_91 = 0;
x_92 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_92, 0, x_1);
lean_ctor_set(x_92, 1, x_90);
lean_ctor_set(x_92, 2, x_11);
lean_ctor_set(x_92, 3, x_12);
lean_ctor_set_uint8(x_92, sizeof(void*)*4, x_91);
lean_ctor_set(x_87, 0, x_92);
return x_87;
}
else
{
lean_object* x_93; lean_object* x_94; uint8_t x_95; lean_object* x_96; lean_object* x_97; 
x_93 = lean_ctor_get(x_87, 1);
lean_inc(x_93);
lean_dec(x_87);
x_94 = l_Lean_Elab_instInhabitedModifiers___closed__1;
x_95 = 0;
x_96 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_96, 0, x_1);
lean_ctor_set(x_96, 1, x_94);
lean_ctor_set(x_96, 2, x_11);
lean_ctor_set(x_96, 3, x_12);
lean_ctor_set_uint8(x_96, sizeof(void*)*4, x_95);
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_93);
return x_97;
}
}
}
else
{
lean_object* x_98; uint8_t x_99; 
lean_dec(x_16);
lean_inc(x_12);
x_98 = l_Lean_Elab_addAuxDeclarationRanges___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__17(x_12, x_14, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_14);
x_99 = !lean_is_exclusive(x_98);
if (x_99 == 0)
{
lean_object* x_100; lean_object* x_101; uint8_t x_102; lean_object* x_103; 
x_100 = lean_ctor_get(x_98, 0);
lean_dec(x_100);
x_101 = l_Lean_Elab_instInhabitedModifiers___closed__1;
x_102 = 0;
x_103 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_103, 0, x_1);
lean_ctor_set(x_103, 1, x_101);
lean_ctor_set(x_103, 2, x_11);
lean_ctor_set(x_103, 3, x_12);
lean_ctor_set_uint8(x_103, sizeof(void*)*4, x_102);
lean_ctor_set(x_98, 0, x_103);
return x_98;
}
else
{
lean_object* x_104; lean_object* x_105; uint8_t x_106; lean_object* x_107; lean_object* x_108; 
x_104 = lean_ctor_get(x_98, 1);
lean_inc(x_104);
lean_dec(x_98);
x_105 = l_Lean_Elab_instInhabitedModifiers___closed__1;
x_106 = 0;
x_107 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_107, 0, x_1);
lean_ctor_set(x_107, 1, x_105);
lean_ctor_set(x_107, 2, x_11);
lean_ctor_set(x_107, 3, x_12);
lean_ctor_set_uint8(x_107, sizeof(void*)*4, x_106);
x_108 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_104);
return x_108;
}
}
}
}
lean_object* l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_1);
lean_dec(x_1);
x_13 = l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__1(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
}
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_1);
lean_dec(x_1);
x_12 = l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__2(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_12;
}
}
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__7(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Lean_Elab_elabAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_elabAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Elab_elabDeclAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_elabDeclAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__9(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__11(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__10(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; lean_object* x_15; 
x_14 = lean_unbox(x_5);
lean_dec(x_5);
x_15 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_14, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_15;
}
}
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; lean_object* x_15; 
x_14 = lean_unbox(x_6);
lean_dec(x_6);
x_15 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__2(x_1, x_2, x_3, x_4, x_5, x_14, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_15;
}
}
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_11;
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_11;
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Elab_applyVisibility___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__13___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_1);
lean_dec(x_1);
x_11 = l_Lean_Elab_applyVisibility___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__13(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
lean_object* l_Lean_addDocString___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__16___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_addDocString___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__16(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_addDocString_x27___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__15___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_addDocString_x27___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__15(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_Elab_getDeclarationRange___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__18___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_getDeclarationRange___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__18(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_addDeclarationRanges___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__19___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_addDeclarationRanges___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__19(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_Elab_addAuxDeclarationRanges___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__17___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_addAuxDeclarationRanges___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__17(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_13;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("private fields are not supported yet");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = l_Lean_Elab_Modifiers_isPrivate(x_1);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_3);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__3;
x_14 = l_Lean_throwError___at_Lean_Elab_Term_evalExpr___spec__5(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_14;
}
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid use of attributes in field declaration");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_1, 1);
x_11 = lean_array_get_size(x_10);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_eq(x_11, x_12);
lean_dec(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__3;
x_15 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
return x_15;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_15);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_box(0);
x_21 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__1(x_1, x_20, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_21;
}
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid use of 'unsafe' in field declaration");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 3);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_box(0);
x_12 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__2(x_1, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__3;
x_14 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
return x_14;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_14);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid use of 'partial' in field declaration");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 2);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_box(0);
x_12 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__3(x_1, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__3;
x_14 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
return x_14;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_14);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid use of 'noncomputable' in field declaration");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_checkValidFieldModifier___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_checkValidFieldModifier___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_checkValidFieldModifier(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
x_11 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__4(x_1, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = l_Lean_Elab_Command_checkValidFieldModifier___closed__3;
x_13 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
return x_13;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_13);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Command_checkValidFieldModifier(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields_match__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__2(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = x_3 == x_4;
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_uget(x_2, x_3);
lean_inc(x_1);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_15 = lean_apply_9(x_1, x_5, x_14, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = 1;
x_19 = x_3 + x_18;
x_3 = x_19;
x_5 = x_16;
x_12 = x_17;
goto _start;
}
else
{
uint8_t x_21; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_21 = !lean_is_exclusive(x_15);
if (x_21 == 0)
{
return x_15;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_15, 0);
x_23 = lean_ctor_get(x_15, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_15);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
else
{
lean_object* x_25; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_5);
lean_ctor_set(x_25, 1, x_12);
return x_25;
}
}
}
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_nat_dec_lt(x_4, x_5);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_array_get_size(x_3);
x_16 = lean_nat_dec_le(x_5, x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_2);
lean_ctor_set(x_17, 1, x_12);
return x_17;
}
else
{
size_t x_18; size_t x_19; lean_object* x_20; 
x_18 = lean_usize_of_nat(x_4);
x_19 = lean_usize_of_nat(x_5);
x_20 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__2(x_1, x_3, x_18, x_19, x_2, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_20;
}
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__5(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = x_3 == x_4;
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_uget(x_2, x_3);
lean_inc(x_1);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_15 = lean_apply_9(x_1, x_5, x_14, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = 1;
x_19 = x_3 + x_18;
x_3 = x_19;
x_5 = x_16;
x_12 = x_17;
goto _start;
}
else
{
uint8_t x_21; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_21 = !lean_is_exclusive(x_15);
if (x_21 == 0)
{
return x_15;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_15, 0);
x_23 = lean_ctor_get(x_15, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_15);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
else
{
lean_object* x_25; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_5);
lean_ctor_set(x_25, 1, x_12);
return x_25;
}
}
}
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_nat_dec_lt(x_4, x_5);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_array_get_size(x_3);
x_16 = lean_nat_dec_le(x_5, x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_2);
lean_ctor_set(x_17, 1, x_12);
return x_17;
}
else
{
size_t x_18; size_t x_19; lean_object* x_20; 
x_18 = lean_usize_of_nat(x_4);
x_19 = lean_usize_of_nat(x_5);
x_20 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__5(x_1, x_3, x_18, x_19, x_2, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_20;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; uint8_t x_20; lean_object* x_21; 
lean_inc(x_2);
x_19 = l_Lean_Name_append(x_1, x_2);
x_20 = lean_ctor_get_uint8(x_3, sizeof(void*)*2);
lean_inc(x_12);
x_21 = l_Lean_Elab_applyVisibility___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__13(x_20, x_19, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_ctor_get(x_3, 0);
lean_inc(x_24);
lean_inc(x_22);
x_25 = l_Lean_addDocString_x27___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__15(x_22, x_24, x_12, x_13, x_14, x_15, x_16, x_17, x_23);
lean_dec(x_12);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_25, 0);
lean_dec(x_27);
x_28 = lean_alloc_ctor(0, 7, 2);
lean_ctor_set(x_28, 0, x_4);
lean_ctor_set(x_28, 1, x_3);
lean_ctor_set(x_28, 2, x_22);
lean_ctor_set(x_28, 3, x_2);
lean_ctor_set(x_28, 4, x_7);
lean_ctor_set(x_28, 5, x_8);
lean_ctor_set(x_28, 6, x_9);
lean_ctor_set_uint8(x_28, sizeof(void*)*7, x_5);
lean_ctor_set_uint8(x_28, sizeof(void*)*7 + 1, x_6);
x_29 = lean_array_push(x_10, x_28);
lean_ctor_set(x_25, 0, x_29);
return x_25;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_25, 1);
lean_inc(x_30);
lean_dec(x_25);
x_31 = lean_alloc_ctor(0, 7, 2);
lean_ctor_set(x_31, 0, x_4);
lean_ctor_set(x_31, 1, x_3);
lean_ctor_set(x_31, 2, x_22);
lean_ctor_set(x_31, 3, x_2);
lean_ctor_set(x_31, 4, x_7);
lean_ctor_set(x_31, 5, x_8);
lean_ctor_set(x_31, 6, x_9);
lean_ctor_set_uint8(x_31, sizeof(void*)*7, x_5);
lean_ctor_set_uint8(x_31, sizeof(void*)*7 + 1, x_6);
x_32 = lean_array_push(x_10, x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_30);
return x_33;
}
}
else
{
uint8_t x_34; 
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_34 = !lean_is_exclusive(x_21);
if (x_34 == 0)
{
return x_21;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_21, 0);
x_36 = lean_ctor_get(x_21, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_21);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_mkProjection___lambda__1___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__2___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("', identifiers starting with '_' are reserved to the system");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__2___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__2(lean_object* x_1, lean_object* x_2, uint8_t x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; uint8_t x_18; uint8_t x_19; 
x_17 = l_Lean_Syntax_getId(x_9);
x_18 = l_Lean_isInternalSubobjectFieldName(x_17);
x_19 = !lean_is_exclusive(x_14);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_14, 3);
x_21 = l_Lean_replaceRef(x_9, x_20);
lean_dec(x_20);
lean_ctor_set(x_14, 3, x_21);
if (x_18 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_box(0);
x_23 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__1(x_1, x_17, x_2, x_9, x_3, x_4, x_5, x_6, x_7, x_8, x_22, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_14);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_24 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_24, 0, x_17);
x_25 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__2___closed__1;
x_26 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
x_27 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__2___closed__3;
x_28 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
x_29 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_28, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_14);
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
return x_29;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_29, 0);
x_32 = lean_ctor_get(x_29, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_29);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_34 = lean_ctor_get(x_14, 0);
x_35 = lean_ctor_get(x_14, 1);
x_36 = lean_ctor_get(x_14, 2);
x_37 = lean_ctor_get(x_14, 3);
x_38 = lean_ctor_get(x_14, 4);
x_39 = lean_ctor_get(x_14, 5);
x_40 = lean_ctor_get(x_14, 6);
x_41 = lean_ctor_get(x_14, 7);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_14);
x_42 = l_Lean_replaceRef(x_9, x_37);
lean_dec(x_37);
x_43 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_43, 0, x_34);
lean_ctor_set(x_43, 1, x_35);
lean_ctor_set(x_43, 2, x_36);
lean_ctor_set(x_43, 3, x_42);
lean_ctor_set(x_43, 4, x_38);
lean_ctor_set(x_43, 5, x_39);
lean_ctor_set(x_43, 6, x_40);
lean_ctor_set(x_43, 7, x_41);
if (x_18 == 0)
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_box(0);
x_45 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__1(x_1, x_17, x_2, x_9, x_3, x_4, x_5, x_6, x_7, x_8, x_44, x_10, x_11, x_12, x_13, x_43, x_15, x_16);
lean_dec(x_43);
return x_45;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_46 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_46, 0, x_17);
x_47 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__2___closed__1;
x_48 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
x_49 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__2___closed__3;
x_50 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
x_51 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_50, x_10, x_11, x_12, x_13, x_43, x_15, x_16);
lean_dec(x_43);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
if (lean_is_exclusive(x_51)) {
 lean_ctor_release(x_51, 0);
 lean_ctor_release(x_51, 1);
 x_54 = x_51;
} else {
 lean_dec_ref(x_51);
 x_54 = lean_box(0);
}
if (lean_is_scalar(x_54)) {
 x_55 = lean_alloc_ctor(1, 2, 0);
} else {
 x_55 = x_54;
}
lean_ctor_set(x_55, 0, x_52);
lean_ctor_set(x_55, 1, x_53);
return x_55;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__3(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; uint8_t x_17; uint8_t x_18; uint8_t x_19; 
x_14 = lean_unsigned_to_nat(3u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
x_16 = l_Lean_Syntax_isNone(x_15);
lean_dec(x_15);
x_17 = 0;
x_18 = l___private_Lean_Expr_0__Lean_beqBinderInfo____x40_Lean_Expr___hyg_206_(x_2, x_17);
if (x_16 == 0)
{
uint8_t x_66; 
x_66 = 1;
x_19 = x_66;
goto block_65;
}
else
{
uint8_t x_67; 
x_67 = 0;
x_19 = x_67;
goto block_65;
}
block_65:
{
lean_object* x_20; 
if (x_18 == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_52 = lean_unsigned_to_nat(4u);
x_53 = l_Lean_Syntax_getArg(x_1, x_52);
x_54 = l_Lean_Elab_expandDeclSig(x_53);
lean_dec(x_53);
x_55 = !lean_is_exclusive(x_54);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; 
x_56 = lean_ctor_get(x_54, 1);
x_57 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_54, 1, x_57);
x_20 = x_54;
goto block_51;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_58 = lean_ctor_get(x_54, 0);
x_59 = lean_ctor_get(x_54, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_54);
x_60 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_60, 0, x_59);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_58);
lean_ctor_set(x_61, 1, x_60);
x_20 = x_61;
goto block_51;
}
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_unsigned_to_nat(4u);
x_63 = l_Lean_Syntax_getArg(x_1, x_62);
x_64 = l_Lean_Elab_expandOptDeclSig(x_63);
lean_dec(x_63);
x_20 = x_64;
goto block_51;
}
block_51:
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_unsigned_to_nat(2u);
x_24 = l_Lean_Syntax_getArg(x_1, x_23);
x_25 = l_Lean_Syntax_getArgs(x_24);
lean_dec(x_24);
x_26 = lean_array_get_size(x_25);
if (x_18 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_27 = lean_box(0);
x_28 = lean_box(x_2);
x_29 = lean_box(x_19);
x_30 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__2___boxed), 16, 7);
lean_closure_set(x_30, 0, x_3);
lean_closure_set(x_30, 1, x_4);
lean_closure_set(x_30, 2, x_28);
lean_closure_set(x_30, 3, x_29);
lean_closure_set(x_30, 4, x_21);
lean_closure_set(x_30, 5, x_22);
lean_closure_set(x_30, 6, x_27);
x_31 = lean_unsigned_to_nat(0u);
x_32 = l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1(x_30, x_5, x_25, x_31, x_26, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_26);
lean_dec(x_25);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_33 = lean_unsigned_to_nat(5u);
x_34 = l_Lean_Syntax_getArg(x_1, x_33);
x_35 = l_Lean_Syntax_isNone(x_34);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_36 = lean_unsigned_to_nat(0u);
x_37 = l_Lean_Syntax_getArg(x_34, x_36);
lean_dec(x_34);
x_38 = lean_unsigned_to_nat(1u);
x_39 = l_Lean_Syntax_getArg(x_37, x_38);
lean_dec(x_37);
x_40 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_40, 0, x_39);
x_41 = lean_box(x_2);
x_42 = lean_box(x_19);
x_43 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__2___boxed), 16, 7);
lean_closure_set(x_43, 0, x_3);
lean_closure_set(x_43, 1, x_4);
lean_closure_set(x_43, 2, x_41);
lean_closure_set(x_43, 3, x_42);
lean_closure_set(x_43, 4, x_21);
lean_closure_set(x_43, 5, x_22);
lean_closure_set(x_43, 6, x_40);
x_44 = l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1(x_43, x_5, x_25, x_36, x_26, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_26);
lean_dec(x_25);
return x_44;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_dec(x_34);
x_45 = lean_box(0);
x_46 = lean_box(x_2);
x_47 = lean_box(x_19);
x_48 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__2___boxed), 16, 7);
lean_closure_set(x_48, 0, x_3);
lean_closure_set(x_48, 1, x_4);
lean_closure_set(x_48, 2, x_46);
lean_closure_set(x_48, 3, x_47);
lean_closure_set(x_48, 4, x_21);
lean_closure_set(x_48, 5, x_22);
lean_closure_set(x_48, 6, x_45);
x_49 = lean_unsigned_to_nat(0u);
x_50 = l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1(x_48, x_5, x_25, x_49, x_26, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_26);
lean_dec(x_25);
return x_50;
}
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid 'protected' field in a 'private' structure");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__4___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__4___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__4___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__4___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__4(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; 
x_15 = l_Lean_Elab_Modifiers_isProtected(x_4);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_box(0);
x_17 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__3(x_1, x_2, x_3, x_4, x_5, x_16, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_17;
}
else
{
uint8_t x_18; 
x_18 = l_Lean_Elab_Modifiers_isPrivate(x_6);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_box(0);
x_20 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__3(x_1, x_2, x_3, x_4, x_5, x_19, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_21 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__4___closed__3;
x_22 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_21, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
return x_22;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_22);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__5___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid 'private' field in a 'private' structure");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__5___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__5___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__5___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__5___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Lean_Syntax_getArg(x_1, x_13);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_15 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1(x_14, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
lean_inc(x_6);
x_18 = l_Lean_Elab_Command_checkValidFieldModifier(x_16, x_6, x_7, x_8, x_9, x_10, x_11, x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = l_Lean_Elab_Modifiers_isPrivate(x_16);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_box(0);
x_22 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__4(x_1, x_5, x_2, x_16, x_3, x_4, x_21, x_6, x_7, x_8, x_9, x_10, x_11, x_19);
return x_22;
}
else
{
uint8_t x_23; 
x_23 = l_Lean_Elab_Modifiers_isPrivate(x_4);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_box(0);
x_25 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__4(x_1, x_5, x_2, x_16, x_3, x_4, x_24, x_6, x_7, x_8, x_9, x_10, x_11, x_19);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
lean_dec(x_16);
lean_dec(x_3);
lean_dec(x_2);
x_26 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__5___closed__3;
x_27 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_26, x_6, x_7, x_8, x_9, x_10, x_11, x_19);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
return x_27;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_27, 0);
x_30 = lean_ctor_get(x_27, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_27);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
else
{
uint8_t x_32; 
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_32 = !lean_is_exclusive(x_18);
if (x_32 == 0)
{
return x_18;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_18, 0);
x_34 = lean_ctor_get(x_18, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_18);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
uint8_t x_36; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_36 = !lean_is_exclusive(x_15);
if (x_36 == 0)
{
return x_15;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_15, 0);
x_38 = lean_ctor_get(x_15, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_15);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__6___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected kind of structure field");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__6___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__6___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__6___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__6___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
lean_inc(x_4);
x_13 = l_Lean_Syntax_getKind(x_4);
x_14 = l_Lean_Parser_Command_structExplicitBinder___elambda__1___closed__2;
x_15 = lean_name_eq(x_13, x_14);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = l_Lean_Parser_Command_structImplicitBinder___elambda__1___closed__2;
x_17 = lean_name_eq(x_13, x_16);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = l_Lean_Parser_Command_structInstBinder___elambda__1___closed__2;
x_19 = lean_name_eq(x_13, x_18);
lean_dec(x_13);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_20 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__6___closed__3;
x_21 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__3(x_20, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
return x_21;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_21);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
else
{
uint8_t x_26; lean_object* x_27; 
x_26 = 3;
x_27 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__5(x_4, x_1, x_2, x_3, x_26, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_4);
return x_27;
}
}
else
{
uint8_t x_28; lean_object* x_29; 
lean_dec(x_13);
x_28 = 1;
x_29 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__5(x_4, x_1, x_2, x_3, x_28, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_4);
return x_29;
}
}
else
{
uint8_t x_30; lean_object* x_31; 
lean_dec(x_13);
x_30 = 0;
x_31 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__5(x_4, x_1, x_2, x_3, x_30, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_4);
return x_31;
}
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__7___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(7u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; uint8_t x_15; 
lean_inc(x_4);
x_12 = l_Lean_Syntax_getKind(x_4);
x_13 = l_Lean_Parser_Command_structSimpleBinder___elambda__1___closed__2;
x_14 = lean_name_eq(x_12, x_13);
lean_dec(x_12);
x_15 = !lean_is_exclusive(x_9);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_9, 3);
x_17 = l_Lean_replaceRef(x_4, x_16);
lean_dec(x_16);
lean_ctor_set(x_9, 3, x_17);
if (x_14 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_box(0);
x_19 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__6(x_1, x_3, x_2, x_4, x_18, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_20 = lean_unsigned_to_nat(0u);
x_21 = l_Lean_Syntax_getArg(x_4, x_20);
x_22 = l_prec_x28___x29___closed__3;
x_23 = l_Lean_mkAtomFrom(x_4, x_22);
x_24 = lean_unsigned_to_nat(1u);
x_25 = l_Lean_Syntax_getArg(x_4, x_24);
x_26 = l_Lean_mkOptionalNode___closed__2;
x_27 = lean_array_push(x_26, x_25);
x_28 = l_Lean_nullKind;
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
x_30 = lean_unsigned_to_nat(2u);
x_31 = l_Lean_Syntax_getArg(x_4, x_30);
x_32 = lean_unsigned_to_nat(3u);
x_33 = l_Lean_Syntax_getArg(x_4, x_32);
x_34 = lean_unsigned_to_nat(4u);
x_35 = l_Lean_Syntax_getArg(x_4, x_34);
x_36 = l_prec_x28___x29___closed__7;
x_37 = l_Lean_mkAtomFrom(x_4, x_36);
lean_dec(x_4);
x_38 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__7___closed__1;
x_39 = lean_array_push(x_38, x_21);
x_40 = lean_array_push(x_39, x_23);
x_41 = lean_array_push(x_40, x_29);
x_42 = lean_array_push(x_41, x_31);
x_43 = lean_array_push(x_42, x_33);
x_44 = lean_array_push(x_43, x_35);
x_45 = lean_array_push(x_44, x_37);
x_46 = l_Lean_Parser_Command_structExplicitBinder___elambda__1___closed__2;
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_45);
x_48 = lean_box(0);
x_49 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__6(x_1, x_3, x_2, x_47, x_48, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_49;
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_50 = lean_ctor_get(x_9, 0);
x_51 = lean_ctor_get(x_9, 1);
x_52 = lean_ctor_get(x_9, 2);
x_53 = lean_ctor_get(x_9, 3);
x_54 = lean_ctor_get(x_9, 4);
x_55 = lean_ctor_get(x_9, 5);
x_56 = lean_ctor_get(x_9, 6);
x_57 = lean_ctor_get(x_9, 7);
lean_inc(x_57);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_9);
x_58 = l_Lean_replaceRef(x_4, x_53);
lean_dec(x_53);
x_59 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_59, 0, x_50);
lean_ctor_set(x_59, 1, x_51);
lean_ctor_set(x_59, 2, x_52);
lean_ctor_set(x_59, 3, x_58);
lean_ctor_set(x_59, 4, x_54);
lean_ctor_set(x_59, 5, x_55);
lean_ctor_set(x_59, 6, x_56);
lean_ctor_set(x_59, 7, x_57);
if (x_14 == 0)
{
lean_object* x_60; lean_object* x_61; 
x_60 = lean_box(0);
x_61 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__6(x_1, x_3, x_2, x_4, x_60, x_5, x_6, x_7, x_8, x_59, x_10, x_11);
return x_61;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_62 = lean_unsigned_to_nat(0u);
x_63 = l_Lean_Syntax_getArg(x_4, x_62);
x_64 = l_prec_x28___x29___closed__3;
x_65 = l_Lean_mkAtomFrom(x_4, x_64);
x_66 = lean_unsigned_to_nat(1u);
x_67 = l_Lean_Syntax_getArg(x_4, x_66);
x_68 = l_Lean_mkOptionalNode___closed__2;
x_69 = lean_array_push(x_68, x_67);
x_70 = l_Lean_nullKind;
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_69);
x_72 = lean_unsigned_to_nat(2u);
x_73 = l_Lean_Syntax_getArg(x_4, x_72);
x_74 = lean_unsigned_to_nat(3u);
x_75 = l_Lean_Syntax_getArg(x_4, x_74);
x_76 = lean_unsigned_to_nat(4u);
x_77 = l_Lean_Syntax_getArg(x_4, x_76);
x_78 = l_prec_x28___x29___closed__7;
x_79 = l_Lean_mkAtomFrom(x_4, x_78);
lean_dec(x_4);
x_80 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__7___closed__1;
x_81 = lean_array_push(x_80, x_63);
x_82 = lean_array_push(x_81, x_65);
x_83 = lean_array_push(x_82, x_71);
x_84 = lean_array_push(x_83, x_73);
x_85 = lean_array_push(x_84, x_75);
x_86 = lean_array_push(x_85, x_77);
x_87 = lean_array_push(x_86, x_79);
x_88 = l_Lean_Parser_Command_structExplicitBinder___elambda__1___closed__2;
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_87);
x_90 = lean_box(0);
x_91 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__6(x_1, x_3, x_2, x_89, x_90, x_5, x_6, x_7, x_8, x_59, x_10, x_11);
return x_91;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_empty___closed__1;
x_2 = lean_array_get_size(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; 
x_11 = lean_unsigned_to_nat(5u);
x_12 = l_Lean_Syntax_getArg(x_1, x_11);
x_13 = l_Lean_Syntax_isNone(x_12);
x_14 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__7___boxed), 11, 2);
lean_closure_set(x_14, 0, x_3);
lean_closure_set(x_14, 1, x_2);
if (x_13 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_15 = lean_unsigned_to_nat(2u);
x_16 = l_Lean_Syntax_getArg(x_12, x_15);
lean_dec(x_12);
x_17 = lean_unsigned_to_nat(0u);
x_18 = l_Lean_Syntax_getArg(x_16, x_17);
lean_dec(x_16);
x_19 = l_Lean_Syntax_getArgs(x_18);
lean_dec(x_18);
x_20 = lean_array_get_size(x_19);
x_21 = l_Array_empty___closed__1;
x_22 = l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__4(x_14, x_21, x_19, x_17, x_20, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_20);
lean_dec(x_19);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_12);
x_23 = l_Array_empty___closed__1;
x_24 = lean_unsigned_to_nat(0u);
x_25 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___closed__1;
x_26 = l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__4(x_14, x_23, x_23, x_24, x_25, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_26;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__2(x_1, x_2, x_13, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_2);
return x_15;
}
}
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_13;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__5(x_1, x_2, x_13, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_2);
return x_15;
}
}
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_13;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__1___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
_start:
{
uint8_t x_19; uint8_t x_20; lean_object* x_21; 
x_19 = lean_unbox(x_5);
lean_dec(x_5);
x_20 = lean_unbox(x_6);
lean_dec(x_6);
x_21 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__1(x_1, x_2, x_3, x_4, x_19, x_20, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_1);
return x_21;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
uint8_t x_17; uint8_t x_18; lean_object* x_19; 
x_17 = lean_unbox(x_3);
lean_dec(x_3);
x_18 = lean_unbox(x_4);
lean_dec(x_4);
x_19 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__2(x_1, x_2, x_17, x_18, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_1);
return x_19;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; lean_object* x_15; 
x_14 = lean_unbox(x_2);
lean_dec(x_2);
x_15 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__3(x_1, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_6);
lean_dec(x_1);
return x_15;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; lean_object* x_16; 
x_15 = lean_unbox(x_2);
lean_dec(x_2);
x_16 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__4(x_1, x_15, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
return x_16;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_5);
lean_dec(x_5);
x_14 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__5(x_1, x_2, x_3, x_4, x_13, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_4);
lean_dec(x_1);
return x_14;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_5);
lean_dec(x_3);
return x_13;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_2);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1);
return x_11;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_validStructType_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 3)
{
lean_object* x_4; uint64_t x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_6 = lean_box_uint64(x_5);
x_7 = lean_apply_2(x_2, x_4, x_6);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_2);
x_8 = lean_apply_1(x_3, x_1);
return x_8;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_validStructType_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_validStructType_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l___private_Lean_Elab_Structure_0__Lean_Elab_Command_validStructType(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 3)
{
uint8_t x_2; 
x_2 = 1;
return x_2;
}
else
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_validStructType___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_validStructType(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 4)
{
lean_object* x_4; lean_object* x_5; uint64_t x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_7 = lean_box_uint64(x_6);
x_8 = lean_apply_3(x_2, x_4, x_5, x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_2);
x_9 = lean_apply_1(x_3, x_1);
return x_9;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("expected structure");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' is not a structure");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__4;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Expr_getAppFn(x_1);
if (lean_obj_tag(x_9) == 4)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_get(x_7, x_8);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_10);
x_16 = l_Lean_isStructure(x_15, x_10);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
lean_free_object(x_11);
x_17 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_17, 0, x_10);
x_18 = l_Lean_KernelException_toMessageData___closed__3;
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
x_20 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__5;
x_21 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
x_22 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_21, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
return x_22;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_22);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
lean_dec(x_2);
lean_ctor_set(x_11, 0, x_10);
return x_11;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_27 = lean_ctor_get(x_11, 0);
x_28 = lean_ctor_get(x_11, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_11);
x_29 = lean_ctor_get(x_27, 0);
lean_inc(x_29);
lean_dec(x_27);
lean_inc(x_10);
x_30 = l_Lean_isStructure(x_29, x_10);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_31 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_31, 0, x_10);
x_32 = l_Lean_KernelException_toMessageData___closed__3;
x_33 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_31);
x_34 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__5;
x_35 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
x_36 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_35, x_2, x_3, x_4, x_5, x_6, x_7, x_28);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
if (lean_is_exclusive(x_36)) {
 lean_ctor_release(x_36, 0);
 lean_ctor_release(x_36, 1);
 x_39 = x_36;
} else {
 lean_dec_ref(x_36);
 x_39 = lean_box(0);
}
if (lean_is_scalar(x_39)) {
 x_40 = lean_alloc_ctor(1, 2, 0);
} else {
 x_40 = x_39;
}
lean_ctor_set(x_40, 0, x_37);
lean_ctor_set(x_40, 1, x_38);
return x_40;
}
else
{
lean_object* x_41; 
lean_dec(x_2);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_10);
lean_ctor_set(x_41, 1, x_28);
return x_41;
}
}
}
else
{
lean_object* x_42; lean_object* x_43; 
lean_dec(x_9);
x_42 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__3;
x_43 = l_Lean_throwError___at_Lean_Elab_Term_mkAuxName___spec__1(x_42, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_43;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_findFieldInfo_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_5 < x_4;
if (x_7 == 0)
{
lean_inc(x_6);
return x_6;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_array_uget(x_3, x_5);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_name_eq(x_9, x_1);
lean_dec(x_9);
if (x_10 == 0)
{
size_t x_11; size_t x_12; 
lean_dec(x_8);
x_11 = 1;
x_12 = x_5 + x_11;
{
size_t _tmp_4 = x_12;
lean_object* _tmp_5 = x_2;
x_5 = _tmp_4;
x_6 = _tmp_5;
}
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_8);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_findFieldInfo_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; size_t x_5; size_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_box(0);
x_4 = lean_array_get_size(x_1);
x_5 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_6 = 0;
x_7 = l_Array_findSomeM_x3f___rarg___closed__1;
x_8 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_findFieldInfo_x3f___spec__1(x_2, x_7, x_1, x_5, x_6, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
if (lean_obj_tag(x_9) == 0)
{
return x_3;
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
return x_9;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_findFieldInfo_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_findFieldInfo_x3f___spec__1(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_findFieldInfo_x3f___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_findFieldInfo_x3f(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
uint8_t l___private_Lean_Elab_Structure_0__Lean_Elab_Command_containsFieldName(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_findFieldInfo_x3f(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
else
{
uint8_t x_5; 
lean_dec(x_3);
x_5 = 1;
return x_5;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_containsFieldName___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_containsFieldName(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_inc(x_2);
x_17 = l_Lean_Name_append(x_1, x_2);
x_18 = lean_box(0);
x_19 = 1;
x_20 = 0;
x_21 = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(x_21, 0, x_2);
lean_ctor_set(x_21, 1, x_17);
lean_ctor_set(x_21, 2, x_9);
lean_ctor_set(x_21, 3, x_18);
lean_ctor_set_uint8(x_21, sizeof(void*)*4, x_19);
lean_ctor_set_uint8(x_21, sizeof(void*)*4 + 1, x_20);
x_22 = lean_array_push(x_3, x_21);
x_23 = lean_unsigned_to_nat(1u);
x_24 = lean_nat_add(x_4, x_23);
x_25 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg(x_1, x_5, x_6, x_7, x_8, x_24, x_22, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
return x_25;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_2);
lean_inc(x_1);
x_17 = l_Lean_Meta_mkProjection(x_1, x_2, x_12, x_13, x_14, x_15, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_18);
x_20 = l_Lean_Meta_inferType(x_18, x_12, x_13, x_14, x_15, x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_2);
x_23 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___lambda__1___boxed), 16, 8);
lean_closure_set(x_23, 0, x_3);
lean_closure_set(x_23, 1, x_2);
lean_closure_set(x_23, 2, x_4);
lean_closure_set(x_23, 3, x_5);
lean_closure_set(x_23, 4, x_1);
lean_closure_set(x_23, 5, x_6);
lean_closure_set(x_23, 6, x_7);
lean_closure_set(x_23, 7, x_8);
x_24 = l_Lean_Meta_withLetDecl___at_Lean_Elab_Term_elabLetDeclAux___spec__3___rarg(x_2, x_21, x_18, x_23, x_10, x_11, x_12, x_13, x_14, x_15, x_22);
return x_24;
}
else
{
uint8_t x_25; 
lean_dec(x_18);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_20);
if (x_25 == 0)
{
return x_20;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_20, 0);
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_20);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
uint8_t x_29; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_29 = !lean_is_exclusive(x_17);
if (x_29 == 0)
{
return x_17;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_17, 0);
x_31 = lean_ctor_get(x_17, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_17);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("field '");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' from '");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_array_get_size(x_4);
x_16 = lean_nat_dec_lt(x_6, x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_17 = lean_apply_8(x_5, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_17;
}
else
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_array_fget(x_4, x_6);
x_19 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_containsFieldName(x_7, x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_box(0);
x_21 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___lambda__2(x_2, x_18, x_1, x_7, x_6, x_3, x_4, x_5, x_20, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_22 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_22, 0, x_18);
x_23 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__2;
x_24 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__4;
x_26 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_27, 0, x_3);
x_28 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
x_29 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_30 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
x_31 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_30, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
return x_31;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_31, 0);
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_31);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg), 14, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_4);
return x_17;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_9);
return x_17;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_unsigned_to_nat(0u);
x_15 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg(x_1, x_2, x_3, x_4, x_6, x_14, x_5, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_15;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields___rarg), 13, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_1, x_12);
x_14 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg(x_2, x_13, x_4, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_16 = lean_ctor_get(x_1, 4);
lean_inc(x_16);
lean_inc(x_2);
x_17 = l_Lean_Name_append(x_16, x_2);
x_18 = lean_box(0);
x_19 = 2;
x_20 = 0;
lean_inc(x_8);
x_21 = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(x_21, 0, x_2);
lean_ctor_set(x_21, 1, x_17);
lean_ctor_set(x_21, 2, x_8);
lean_ctor_set(x_21, 3, x_18);
lean_ctor_set_uint8(x_21, sizeof(void*)*4, x_19);
lean_ctor_set_uint8(x_21, sizeof(void*)*4 + 1, x_20);
x_22 = lean_array_push(x_3, x_21);
x_23 = 1;
lean_inc(x_5);
x_24 = l_Lean_getStructureFieldsFlattened(x_4, x_5, x_23);
x_25 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__1___boxed), 11, 3);
lean_closure_set(x_25, 0, x_6);
lean_closure_set(x_25, 1, x_1);
lean_closure_set(x_25, 2, x_7);
x_26 = lean_unsigned_to_nat(0u);
x_27 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg(x_16, x_8, x_5, x_24, x_25, x_26, x_22, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
return x_27;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; 
x_16 = lean_st_ref_get(x_14, x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_ctor_get_uint8(x_1, sizeof(void*)*11);
lean_inc(x_4);
lean_inc(x_19);
lean_inc(x_2);
x_21 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__2), 15, 7);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_2);
lean_closure_set(x_21, 2, x_3);
lean_closure_set(x_21, 3, x_19);
lean_closure_set(x_21, 4, x_4);
lean_closure_set(x_21, 5, x_5);
lean_closure_set(x_21, 6, x_6);
if (x_20 == 0)
{
uint8_t x_22; lean_object* x_23; 
lean_dec(x_19);
lean_dec(x_4);
x_22 = 0;
x_23 = l_Lean_Meta_withLocalDecl___at_Lean_Elab_Term_elabLetDeclAux___spec__2___rarg(x_2, x_22, x_7, x_21, x_9, x_10, x_11, x_12, x_13, x_14, x_18);
return x_23;
}
else
{
uint8_t x_24; 
x_24 = lean_is_class(x_19, x_4);
if (x_24 == 0)
{
uint8_t x_25; lean_object* x_26; 
x_25 = 0;
x_26 = l_Lean_Meta_withLocalDecl___at_Lean_Elab_Term_elabLetDeclAux___spec__2___rarg(x_2, x_25, x_7, x_21, x_9, x_10, x_11, x_12, x_13, x_14, x_18);
return x_26;
}
else
{
uint8_t x_27; lean_object* x_28; 
x_27 = 3;
x_28 = l_Lean_Meta_withLocalDecl___at_Lean_Elab_Term_elabLetDeclAux___spec__2___rarg(x_2, x_27, x_7, x_21, x_9, x_10, x_11, x_12, x_13, x_14, x_18);
return x_28;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("to");
return x_1;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_1, 7);
lean_inc(x_12);
x_13 = lean_array_get_size(x_12);
x_14 = lean_nat_dec_lt(x_2, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_12);
lean_dec(x_2);
lean_dec(x_1);
x_15 = lean_apply_8(x_4, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_15;
}
else
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_array_fget(x_12, x_2);
lean_dec(x_12);
x_17 = !lean_is_exclusive(x_9);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_9, 3);
x_19 = l_Lean_replaceRef(x_16, x_18);
lean_dec(x_18);
lean_ctor_set(x_9, 3, x_19);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_16);
x_20 = l_Lean_Elab_Term_elabType(x_16, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_5);
x_23 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure(x_21, x_5, x_6, x_7, x_8, x_9, x_10, x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
lean_inc(x_24);
x_26 = lean_erase_macro_scopes(x_24);
x_27 = l_Lean_Name_getString_x21(x_26);
lean_dec(x_26);
x_28 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___closed__1;
x_29 = lean_string_append(x_28, x_27);
lean_dec(x_27);
x_30 = lean_box(0);
x_31 = lean_name_mk_string(x_30, x_29);
x_32 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_containsFieldName(x_3, x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_16);
x_33 = lean_box(0);
x_34 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__3(x_1, x_31, x_3, x_24, x_2, x_4, x_21, x_33, x_5, x_6, x_7, x_8, x_9, x_10, x_25);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
lean_dec(x_24);
lean_dec(x_21);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_35 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_35, 0, x_31);
x_36 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__2;
x_37 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
x_38 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_39 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
x_40 = l_Lean_throwErrorAt___at_Lean_Elab_Term_quoteAutoTactic___spec__4(x_16, x_39, x_5, x_6, x_7, x_8, x_9, x_10, x_25);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_16);
x_41 = !lean_is_exclusive(x_40);
if (x_41 == 0)
{
return x_40;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_40, 0);
x_43 = lean_ctor_get(x_40, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_40);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
uint8_t x_45; 
lean_dec(x_21);
lean_dec(x_9);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_45 = !lean_is_exclusive(x_23);
if (x_45 == 0)
{
return x_23;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_23, 0);
x_47 = lean_ctor_get(x_23, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_23);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_9);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_49 = !lean_is_exclusive(x_20);
if (x_49 == 0)
{
return x_20;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_20, 0);
x_51 = lean_ctor_get(x_20, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_20);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_53 = lean_ctor_get(x_9, 0);
x_54 = lean_ctor_get(x_9, 1);
x_55 = lean_ctor_get(x_9, 2);
x_56 = lean_ctor_get(x_9, 3);
x_57 = lean_ctor_get(x_9, 4);
x_58 = lean_ctor_get(x_9, 5);
x_59 = lean_ctor_get(x_9, 6);
x_60 = lean_ctor_get(x_9, 7);
lean_inc(x_60);
lean_inc(x_59);
lean_inc(x_58);
lean_inc(x_57);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_9);
x_61 = l_Lean_replaceRef(x_16, x_56);
lean_dec(x_56);
x_62 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_62, 0, x_53);
lean_ctor_set(x_62, 1, x_54);
lean_ctor_set(x_62, 2, x_55);
lean_ctor_set(x_62, 3, x_61);
lean_ctor_set(x_62, 4, x_57);
lean_ctor_set(x_62, 5, x_58);
lean_ctor_set(x_62, 6, x_59);
lean_ctor_set(x_62, 7, x_60);
lean_inc(x_10);
lean_inc(x_62);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_16);
x_63 = l_Lean_Elab_Term_elabType(x_16, x_5, x_6, x_7, x_8, x_62, x_10, x_11);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
lean_dec(x_63);
lean_inc(x_5);
x_66 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure(x_64, x_5, x_6, x_7, x_8, x_62, x_10, x_65);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; uint8_t x_75; 
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
lean_inc(x_67);
x_69 = lean_erase_macro_scopes(x_67);
x_70 = l_Lean_Name_getString_x21(x_69);
lean_dec(x_69);
x_71 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___closed__1;
x_72 = lean_string_append(x_71, x_70);
lean_dec(x_70);
x_73 = lean_box(0);
x_74 = lean_name_mk_string(x_73, x_72);
x_75 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_containsFieldName(x_3, x_74);
if (x_75 == 0)
{
lean_object* x_76; lean_object* x_77; 
lean_dec(x_16);
x_76 = lean_box(0);
x_77 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__3(x_1, x_74, x_3, x_67, x_2, x_4, x_64, x_76, x_5, x_6, x_7, x_8, x_62, x_10, x_68);
return x_77;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
lean_dec(x_67);
lean_dec(x_64);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_78 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_78, 0, x_74);
x_79 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__2;
x_80 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_78);
x_81 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_82 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
x_83 = l_Lean_throwErrorAt___at_Lean_Elab_Term_quoteAutoTactic___spec__4(x_16, x_82, x_5, x_6, x_7, x_8, x_62, x_10, x_68);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_16);
x_84 = lean_ctor_get(x_83, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_83, 1);
lean_inc(x_85);
if (lean_is_exclusive(x_83)) {
 lean_ctor_release(x_83, 0);
 lean_ctor_release(x_83, 1);
 x_86 = x_83;
} else {
 lean_dec_ref(x_83);
 x_86 = lean_box(0);
}
if (lean_is_scalar(x_86)) {
 x_87 = lean_alloc_ctor(1, 2, 0);
} else {
 x_87 = x_86;
}
lean_ctor_set(x_87, 0, x_84);
lean_ctor_set(x_87, 1, x_85);
return x_87;
}
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
lean_dec(x_64);
lean_dec(x_62);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_88 = lean_ctor_get(x_66, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_66, 1);
lean_inc(x_89);
if (lean_is_exclusive(x_66)) {
 lean_ctor_release(x_66, 0);
 lean_ctor_release(x_66, 1);
 x_90 = x_66;
} else {
 lean_dec_ref(x_66);
 x_90 = lean_box(0);
}
if (lean_is_scalar(x_90)) {
 x_91 = lean_alloc_ctor(1, 2, 0);
} else {
 x_91 = x_90;
}
lean_ctor_set(x_91, 0, x_88);
lean_ctor_set(x_91, 1, x_89);
return x_91;
}
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
lean_dec(x_62);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_92 = lean_ctor_get(x_63, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_63, 1);
lean_inc(x_93);
if (lean_is_exclusive(x_63)) {
 lean_ctor_release(x_63, 0);
 lean_ctor_release(x_63, 1);
 x_94 = x_63;
} else {
 lean_dec_ref(x_63);
 x_94 = lean_box(0);
}
if (lean_is_scalar(x_94)) {
 x_95 = lean_alloc_ctor(1, 2, 0);
} else {
 x_95 = x_94;
}
lean_ctor_set(x_95, 0, x_92);
lean_ctor_set(x_95, 1, x_93);
return x_95;
}
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg), 11, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_1);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_8);
return x_16;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__3___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_7);
lean_inc(x_5);
x_12 = l_Lean_Elab_Term_addAutoBoundImplicits(x_1, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_2, 6);
lean_inc(x_13);
lean_dec(x_2);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
lean_inc(x_7);
x_16 = l_Lean_Meta_mkForallFVars(x_14, x_4, x_7, x_8, x_9, x_10, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_17);
x_20 = lean_box(0);
x_21 = lean_apply_9(x_3, x_19, x_20, x_5, x_6, x_7, x_8, x_9, x_10, x_18);
return x_21;
}
else
{
uint8_t x_22; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_22 = !lean_is_exclusive(x_16);
if (x_22 == 0)
{
return x_16;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_16, 0);
x_24 = lean_ctor_get(x_16, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_16);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_12, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_12, 1);
lean_inc(x_27);
lean_dec(x_12);
x_28 = !lean_is_exclusive(x_13);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; uint8_t x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_13, 0);
lean_inc(x_4);
lean_ctor_set(x_13, 0, x_4);
x_30 = lean_box(0);
x_31 = 1;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_32 = l_Lean_Elab_Term_elabTermEnsuringType(x_29, x_13, x_31, x_30, x_5, x_6, x_7, x_8, x_9, x_10, x_27);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
lean_inc(x_7);
lean_inc(x_26);
x_35 = l_Lean_Meta_mkForallFVars(x_26, x_4, x_7, x_8, x_9, x_10, x_34);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
lean_inc(x_7);
x_38 = l_Lean_Meta_mkLambdaFVars(x_26, x_33, x_7, x_8, x_9, x_10, x_37);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_41, 0, x_36);
x_42 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_42, 0, x_39);
x_43 = lean_apply_9(x_3, x_41, x_42, x_5, x_6, x_7, x_8, x_9, x_10, x_40);
return x_43;
}
else
{
uint8_t x_44; 
lean_dec(x_36);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_44 = !lean_is_exclusive(x_38);
if (x_44 == 0)
{
return x_38;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_38, 0);
x_46 = lean_ctor_get(x_38, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_38);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
else
{
uint8_t x_48; 
lean_dec(x_33);
lean_dec(x_26);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_48 = !lean_is_exclusive(x_35);
if (x_48 == 0)
{
return x_35;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_35, 0);
x_50 = lean_ctor_get(x_35, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_35);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
uint8_t x_52; 
lean_dec(x_26);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_52 = !lean_is_exclusive(x_32);
if (x_52 == 0)
{
return x_32;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_32, 0);
x_54 = lean_ctor_get(x_32, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_32);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; lean_object* x_60; 
x_56 = lean_ctor_get(x_13, 0);
lean_inc(x_56);
lean_dec(x_13);
lean_inc(x_4);
x_57 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_57, 0, x_4);
x_58 = lean_box(0);
x_59 = 1;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_60 = l_Lean_Elab_Term_elabTermEnsuringType(x_56, x_57, x_59, x_58, x_5, x_6, x_7, x_8, x_9, x_10, x_27);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
lean_inc(x_7);
lean_inc(x_26);
x_63 = l_Lean_Meta_mkForallFVars(x_26, x_4, x_7, x_8, x_9, x_10, x_62);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
lean_dec(x_63);
lean_inc(x_7);
x_66 = l_Lean_Meta_mkLambdaFVars(x_26, x_61, x_7, x_8, x_9, x_10, x_65);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
x_69 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_69, 0, x_64);
x_70 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_70, 0, x_67);
x_71 = lean_apply_9(x_3, x_69, x_70, x_5, x_6, x_7, x_8, x_9, x_10, x_68);
return x_71;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
lean_dec(x_64);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_72 = lean_ctor_get(x_66, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_66, 1);
lean_inc(x_73);
if (lean_is_exclusive(x_66)) {
 lean_ctor_release(x_66, 0);
 lean_ctor_release(x_66, 1);
 x_74 = x_66;
} else {
 lean_dec_ref(x_66);
 x_74 = lean_box(0);
}
if (lean_is_scalar(x_74)) {
 x_75 = lean_alloc_ctor(1, 2, 0);
} else {
 x_75 = x_74;
}
lean_ctor_set(x_75, 0, x_72);
lean_ctor_set(x_75, 1, x_73);
return x_75;
}
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
lean_dec(x_61);
lean_dec(x_26);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_76 = lean_ctor_get(x_63, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_63, 1);
lean_inc(x_77);
if (lean_is_exclusive(x_63)) {
 lean_ctor_release(x_63, 0);
 lean_ctor_release(x_63, 1);
 x_78 = x_63;
} else {
 lean_dec_ref(x_63);
 x_78 = lean_box(0);
}
if (lean_is_scalar(x_78)) {
 x_79 = lean_alloc_ctor(1, 2, 0);
} else {
 x_79 = x_78;
}
lean_ctor_set(x_79, 0, x_76);
lean_ctor_set(x_79, 1, x_77);
return x_79;
}
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
lean_dec(x_26);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_80 = lean_ctor_get(x_60, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_60, 1);
lean_inc(x_81);
if (lean_is_exclusive(x_60)) {
 lean_ctor_release(x_60, 0);
 lean_ctor_release(x_60, 1);
 x_82 = x_60;
} else {
 lean_dec_ref(x_60);
 x_82 = lean_box(0);
}
if (lean_is_scalar(x_82)) {
 x_83 = lean_alloc_ctor(1, 2, 0);
} else {
 x_83 = x_82;
}
lean_ctor_set(x_83, 0, x_80);
lean_ctor_set(x_83, 1, x_81);
return x_83;
}
}
}
}
else
{
uint8_t x_84; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_84 = !lean_is_exclusive(x_12);
if (x_84 == 0)
{
return x_12;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_12, 0);
x_86 = lean_ctor_get(x_12, 1);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_12);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_86);
return x_87;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_1, 5);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_1, 6);
lean_inc(x_12);
lean_dec(x_1);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_2);
x_13 = lean_box(0);
x_14 = lean_apply_9(x_3, x_13, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_14;
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_12);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_12, 0);
lean_inc(x_6);
lean_inc(x_4);
x_17 = l_Lean_Elab_Term_addAutoBoundImplicits(x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_2);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_box(0);
x_21 = 1;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_22 = l_Lean_Elab_Term_elabTerm(x_16, x_20, x_21, x_4, x_5, x_6, x_7, x_8, x_9, x_19);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
lean_inc(x_6);
x_25 = l_Lean_Meta_mkLambdaFVars(x_18, x_23, x_6, x_7, x_8, x_9, x_24);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
lean_ctor_set(x_12, 0, x_26);
x_28 = lean_apply_9(x_3, x_20, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_27);
return x_28;
}
else
{
uint8_t x_29; 
lean_free_object(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_29 = !lean_is_exclusive(x_25);
if (x_29 == 0)
{
return x_25;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_25, 0);
x_31 = lean_ctor_get(x_25, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_25);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
else
{
uint8_t x_33; 
lean_dec(x_18);
lean_free_object(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_33 = !lean_is_exclusive(x_22);
if (x_33 == 0)
{
return x_22;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_22, 0);
x_35 = lean_ctor_get(x_22, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_22);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
uint8_t x_37; 
lean_free_object(x_12);
lean_dec(x_16);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_37 = !lean_is_exclusive(x_17);
if (x_37 == 0)
{
return x_17;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_17, 0);
x_39 = lean_ctor_get(x_17, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_17);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_12, 0);
lean_inc(x_41);
lean_dec(x_12);
lean_inc(x_6);
lean_inc(x_4);
x_42 = l_Lean_Elab_Term_addAutoBoundImplicits(x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_2);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; lean_object* x_47; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = lean_box(0);
x_46 = 1;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_47 = l_Lean_Elab_Term_elabTerm(x_41, x_45, x_46, x_4, x_5, x_6, x_7, x_8, x_9, x_44);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
lean_inc(x_6);
x_50 = l_Lean_Meta_mkLambdaFVars(x_43, x_48, x_6, x_7, x_8, x_9, x_49);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_53, 0, x_51);
x_54 = lean_apply_9(x_3, x_45, x_53, x_4, x_5, x_6, x_7, x_8, x_9, x_52);
return x_54;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_55 = lean_ctor_get(x_50, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_50, 1);
lean_inc(x_56);
if (lean_is_exclusive(x_50)) {
 lean_ctor_release(x_50, 0);
 lean_ctor_release(x_50, 1);
 x_57 = x_50;
} else {
 lean_dec_ref(x_50);
 x_57 = lean_box(0);
}
if (lean_is_scalar(x_57)) {
 x_58 = lean_alloc_ctor(1, 2, 0);
} else {
 x_58 = x_57;
}
lean_ctor_set(x_58, 0, x_55);
lean_ctor_set(x_58, 1, x_56);
return x_58;
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
lean_dec(x_43);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_59 = lean_ctor_get(x_47, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_47, 1);
lean_inc(x_60);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 x_61 = x_47;
} else {
 lean_dec_ref(x_47);
 x_61 = lean_box(0);
}
if (lean_is_scalar(x_61)) {
 x_62 = lean_alloc_ctor(1, 2, 0);
} else {
 x_62 = x_61;
}
lean_ctor_set(x_62, 0, x_59);
lean_ctor_set(x_62, 1, x_60);
return x_62;
}
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
lean_dec(x_41);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_63 = lean_ctor_get(x_42, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_42, 1);
lean_inc(x_64);
if (lean_is_exclusive(x_42)) {
 lean_ctor_release(x_42, 0);
 lean_ctor_release(x_42, 1);
 x_65 = x_42;
} else {
 lean_dec_ref(x_42);
 x_65 = lean_box(0);
}
if (lean_is_scalar(x_65)) {
 x_66 = lean_alloc_ctor(1, 2, 0);
} else {
 x_66 = x_65;
}
lean_ctor_set(x_66, 0, x_63);
lean_ctor_set(x_66, 1, x_64);
return x_66;
}
}
}
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_11, 0);
lean_inc(x_67);
lean_dec(x_11);
x_68 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue___rarg___lambda__1___boxed), 11, 3);
lean_closure_set(x_68, 0, x_2);
lean_closure_set(x_68, 1, x_1);
lean_closure_set(x_68, 2, x_3);
x_69 = l_Lean_Elab_Term_elabTypeWithAutoBoundImplicit___rarg(x_67, x_68, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_69;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue___rarg), 10, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_1);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_4);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_5);
x_6 = lean_box(0);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_apply_1(x_5, x_8);
return x_9;
}
}
else
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_3);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_2(x_4, x_10, x_2);
return x_11;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__1___rarg), 5, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__3___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__4___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
case 1:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
default: 
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_box(0);
x_10 = lean_apply_1(x_4, x_9);
return x_10;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__4___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__4___rarg(x_5, x_2, x_3, x_4);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__5___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__1___rarg___boxed), 8, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__2___rarg___boxed), 8, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__3___rarg___boxed), 8, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__5___rarg___boxed), 8, 0);
return x_2;
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_7, 3);
x_12 = l_Lean_replaceRef(x_1, x_11);
lean_dec(x_11);
lean_ctor_set(x_7, 3, x_12);
x_13 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__5___rarg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_14 = lean_ctor_get(x_7, 0);
x_15 = lean_ctor_get(x_7, 1);
x_16 = lean_ctor_get(x_7, 2);
x_17 = lean_ctor_get(x_7, 3);
x_18 = lean_ctor_get(x_7, 4);
x_19 = lean_ctor_get(x_7, 5);
x_20 = lean_ctor_get(x_7, 6);
x_21 = lean_ctor_get(x_7, 7);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_7);
x_22 = l_Lean_replaceRef(x_1, x_17);
lean_dec(x_17);
x_23 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_23, 0, x_14);
lean_ctor_set(x_23, 1, x_15);
lean_ctor_set(x_23, 2, x_16);
lean_ctor_set(x_23, 3, x_22);
lean_ctor_set(x_23, 4, x_18);
lean_ctor_set(x_23, 5, x_19);
lean_ctor_set(x_23, 6, x_20);
lean_ctor_set(x_23, 7, x_21);
x_24 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__5___rarg(x_2, x_3, x_4, x_5, x_6, x_23, x_8, x_9);
lean_dec(x_23);
return x_24;
}
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__4___rarg___boxed), 9, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; uint8_t x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_16 = lean_ctor_get(x_1, 2);
x_17 = lean_ctor_get_uint8(x_1, sizeof(void*)*7 + 1);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_2);
x_19 = 0;
lean_inc(x_16);
x_20 = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(x_20, 0, x_3);
lean_ctor_set(x_20, 1, x_16);
lean_ctor_set(x_20, 2, x_8);
lean_ctor_set(x_20, 3, x_18);
lean_ctor_set_uint8(x_20, sizeof(void*)*4, x_19);
lean_ctor_set_uint8(x_20, sizeof(void*)*4 + 1, x_17);
x_21 = lean_array_push(x_4, x_20);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_add(x_5, x_22);
x_24 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg(x_6, x_23, x_21, x_7, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
return x_24;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; uint8_t x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_16 = lean_ctor_get(x_1, 2);
x_17 = lean_ctor_get_uint8(x_1, sizeof(void*)*7 + 1);
x_18 = 0;
lean_inc(x_16);
x_19 = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(x_19, 0, x_2);
lean_ctor_set(x_19, 1, x_16);
lean_ctor_set(x_19, 2, x_8);
lean_ctor_set(x_19, 3, x_3);
lean_ctor_set_uint8(x_19, sizeof(void*)*4, x_18);
lean_ctor_set_uint8(x_19, sizeof(void*)*4 + 1, x_17);
x_20 = lean_array_push(x_4, x_19);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_5, x_21);
x_23 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg(x_6, x_22, x_20, x_7, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
return x_23;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid field, type expected");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__3___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__3___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__3___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
if (lean_obj_tag(x_7) == 0)
{
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_16 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__3___closed__3;
x_17 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__1___rarg(x_16, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_8, 0);
lean_inc(x_18);
lean_dec(x_8);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_18);
x_19 = l_Lean_Meta_inferType(x_18, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_ctor_get_uint8(x_1, sizeof(void*)*7);
lean_inc(x_2);
x_23 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__1___boxed), 15, 7);
lean_closure_set(x_23, 0, x_1);
lean_closure_set(x_23, 1, x_18);
lean_closure_set(x_23, 2, x_2);
lean_closure_set(x_23, 3, x_3);
lean_closure_set(x_23, 4, x_4);
lean_closure_set(x_23, 5, x_5);
lean_closure_set(x_23, 6, x_6);
x_24 = l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabImplicitLambda___spec__1___rarg(x_2, x_22, x_20, x_23, x_9, x_10, x_11, x_12, x_13, x_14, x_21);
return x_24;
}
else
{
uint8_t x_25; 
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_19);
if (x_25 == 0)
{
return x_19;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_19, 0);
x_27 = lean_ctor_get(x_19, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_19);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
else
{
lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_7, 0);
lean_inc(x_29);
lean_dec(x_7);
x_30 = lean_ctor_get_uint8(x_1, sizeof(void*)*7);
lean_inc(x_2);
x_31 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__2___boxed), 15, 7);
lean_closure_set(x_31, 0, x_1);
lean_closure_set(x_31, 1, x_2);
lean_closure_set(x_31, 2, x_8);
lean_closure_set(x_31, 3, x_3);
lean_closure_set(x_31, 4, x_4);
lean_closure_set(x_31, 5, x_5);
lean_closure_set(x_31, 6, x_6);
x_32 = l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabImplicitLambda___spec__1___rarg(x_2, x_30, x_29, x_31, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
return x_32;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; 
lean_inc(x_1);
x_15 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__3), 15, 6);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_2);
lean_closure_set(x_15, 2, x_3);
lean_closure_set(x_15, 3, x_4);
lean_closure_set(x_15, 4, x_5);
lean_closure_set(x_15, 5, x_6);
x_16 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue___rarg(x_1, x_7, x_15, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_16;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; 
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_1);
x_19 = l_Lean_Meta_inferType(x_1, x_14, x_15, x_16, x_17, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_20);
x_23 = lean_box(0);
x_24 = 1;
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
x_25 = l_Lean_Elab_Term_elabTermEnsuringType(x_10, x_22, x_24, x_23, x_12, x_13, x_14, x_15, x_16, x_17, x_21);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_26);
x_29 = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(x_29, 0, x_2);
lean_ctor_set(x_29, 1, x_3);
lean_ctor_set(x_29, 2, x_1);
lean_ctor_set(x_29, 3, x_28);
lean_ctor_set_uint8(x_29, sizeof(void*)*4, x_4);
lean_ctor_set_uint8(x_29, sizeof(void*)*4 + 1, x_5);
x_30 = lean_array_push(x_6, x_29);
x_31 = lean_unsigned_to_nat(1u);
x_32 = lean_nat_add(x_7, x_31);
x_33 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg(x_8, x_32, x_30, x_9, x_12, x_13, x_14, x_15, x_16, x_17, x_27);
return x_33;
}
else
{
uint8_t x_34; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_25);
if (x_34 == 0)
{
return x_25;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_25, 0);
x_36 = lean_ctor_get(x_25, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_25);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
uint8_t x_38; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_38 = !lean_is_exclusive(x_19);
if (x_38 == 0)
{
return x_19;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_19, 0);
x_40 = lean_ctor_get(x_19, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_19);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' has been declared in parent structure");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("omit field '");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' type to set default value");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.Elab.Structure");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_private.Lean.Elab.Structure.0.Lean.Elab.Command.withFields");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__7;
x_2 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__8;
x_3 = lean_unsigned_to_nat(323u);
x_4 = lean_unsigned_to_nat(37u);
x_5 = l_Lean_Name_getString_x21___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_1);
x_13 = lean_nat_dec_lt(x_2, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_2);
lean_dec(x_1);
x_14 = lean_apply_8(x_4, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_15 = lean_array_fget(x_1, x_2);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 3);
lean_inc(x_17);
x_18 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_findFieldInfo_x3f(x_3, x_17);
x_19 = !lean_is_exclusive(x_9);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_9, 3);
x_21 = l_Lean_replaceRef(x_16, x_20);
lean_dec(x_20);
lean_dec(x_16);
lean_ctor_set(x_9, 3, x_21);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_22 = lean_ctor_get(x_15, 4);
lean_inc(x_22);
x_23 = l_Lean_Syntax_getArgs(x_22);
lean_dec(x_22);
x_24 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__4), 14, 6);
lean_closure_set(x_24, 0, x_15);
lean_closure_set(x_24, 1, x_17);
lean_closure_set(x_24, 2, x_3);
lean_closure_set(x_24, 3, x_2);
lean_closure_set(x_24, 4, x_1);
lean_closure_set(x_24, 5, x_4);
x_25 = 1;
x_26 = lean_box(x_25);
x_27 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBinders___rarg___boxed), 10, 3);
lean_closure_set(x_27, 0, x_23);
lean_closure_set(x_27, 1, x_24);
lean_closure_set(x_27, 2, x_26);
x_28 = l_Lean_Elab_Term_withAutoBoundImplicitLocal___rarg(x_27, x_25, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_28;
}
else
{
lean_object* x_29; uint8_t x_30; 
x_29 = lean_ctor_get(x_18, 0);
lean_inc(x_29);
lean_dec(x_18);
x_30 = lean_ctor_get_uint8(x_29, sizeof(void*)*4);
switch (x_30) {
case 0:
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_29);
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_31 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_31, 0, x_17);
x_32 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__2;
x_33 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_31);
x_34 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_35 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
x_36 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__2___rarg(x_35, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_36;
}
case 1:
{
lean_object* x_37; 
x_37 = lean_ctor_get(x_15, 6);
lean_inc(x_37);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_29);
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_38 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_38, 0, x_17);
x_39 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__2;
x_40 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
x_41 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__2;
x_42 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
x_43 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__3___rarg(x_42, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_43;
}
else
{
lean_object* x_44; 
x_44 = lean_ctor_get(x_15, 5);
lean_inc(x_44);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; 
lean_dec(x_17);
x_45 = lean_ctor_get(x_29, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_29, 1);
lean_inc(x_46);
x_47 = lean_ctor_get(x_29, 2);
lean_inc(x_47);
x_48 = lean_ctor_get_uint8(x_29, sizeof(void*)*4 + 1);
lean_dec(x_29);
x_49 = lean_ctor_get(x_37, 0);
lean_inc(x_49);
lean_dec(x_37);
x_50 = lean_ctor_get(x_15, 4);
lean_inc(x_50);
lean_dec(x_15);
x_51 = l_Lean_Syntax_getArgs(x_50);
lean_dec(x_50);
x_52 = lean_array_get_size(x_51);
x_53 = lean_unsigned_to_nat(0u);
x_54 = lean_nat_dec_lt(x_53, x_52);
lean_dec(x_52);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; 
lean_dec(x_51);
x_55 = lean_box(0);
x_56 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__5(x_47, x_45, x_46, x_30, x_48, x_3, x_2, x_1, x_4, x_49, x_55, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_2);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_57 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__3___rarg(x_9, x_10, x_11);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_60 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_6, x_7, x_8, x_9, x_10, x_59);
x_61 = lean_ctor_get(x_60, 1);
lean_inc(x_61);
lean_dec(x_60);
x_62 = l_Lean_Elab_Term_getMainModule___rarg(x_10, x_61);
x_63 = lean_ctor_get(x_62, 1);
lean_inc(x_63);
lean_dec(x_62);
x_64 = l_myMacro____x40_Init_Notation___hyg_12336____closed__9;
lean_inc(x_58);
x_65 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_65, 0, x_58);
lean_ctor_set(x_65, 1, x_64);
x_66 = l_Array_empty___closed__1;
x_67 = lean_array_push(x_66, x_65);
x_68 = l_Array_appendCore___rarg(x_66, x_51);
lean_dec(x_51);
x_69 = l_Lean_nullKind___closed__2;
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_68);
x_71 = lean_array_push(x_66, x_70);
x_72 = l_myMacro____x40_Init_Notation___hyg_12336____closed__13;
x_73 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_73, 0, x_58);
lean_ctor_set(x_73, 1, x_72);
x_74 = lean_array_push(x_71, x_73);
x_75 = lean_array_push(x_74, x_49);
x_76 = l_myMacro____x40_Init_Notation___hyg_12336____closed__12;
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_75);
x_78 = lean_array_push(x_67, x_77);
x_79 = l_myMacro____x40_Init_Notation___hyg_12336____closed__10;
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_78);
x_81 = lean_box(0);
x_82 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__5(x_47, x_45, x_46, x_30, x_48, x_3, x_2, x_1, x_4, x_80, x_81, x_5, x_6, x_7, x_8, x_9, x_10, x_63);
lean_dec(x_2);
return x_82;
}
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
lean_dec(x_37);
lean_dec(x_29);
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_83 = lean_ctor_get(x_44, 0);
lean_inc(x_83);
lean_dec(x_44);
x_84 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_84, 0, x_17);
x_85 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__4;
x_86 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_84);
x_87 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__6;
x_88 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_87);
x_89 = l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__4___rarg(x_83, x_88, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_83);
return x_89;
}
}
}
default: 
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
lean_dec(x_29);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_90 = l_Lean_Elab_Term_getFVarLocalDecl_x21___closed__1;
x_91 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__9;
x_92 = lean_panic_fn(x_90, x_91);
x_93 = lean_apply_7(x_92, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_93;
}
}
}
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_94 = lean_ctor_get(x_9, 0);
x_95 = lean_ctor_get(x_9, 1);
x_96 = lean_ctor_get(x_9, 2);
x_97 = lean_ctor_get(x_9, 3);
x_98 = lean_ctor_get(x_9, 4);
x_99 = lean_ctor_get(x_9, 5);
x_100 = lean_ctor_get(x_9, 6);
x_101 = lean_ctor_get(x_9, 7);
lean_inc(x_101);
lean_inc(x_100);
lean_inc(x_99);
lean_inc(x_98);
lean_inc(x_97);
lean_inc(x_96);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_9);
x_102 = l_Lean_replaceRef(x_16, x_97);
lean_dec(x_97);
lean_dec(x_16);
x_103 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_103, 0, x_94);
lean_ctor_set(x_103, 1, x_95);
lean_ctor_set(x_103, 2, x_96);
lean_ctor_set(x_103, 3, x_102);
lean_ctor_set(x_103, 4, x_98);
lean_ctor_set(x_103, 5, x_99);
lean_ctor_set(x_103, 6, x_100);
lean_ctor_set(x_103, 7, x_101);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; uint8_t x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_104 = lean_ctor_get(x_15, 4);
lean_inc(x_104);
x_105 = l_Lean_Syntax_getArgs(x_104);
lean_dec(x_104);
x_106 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__4), 14, 6);
lean_closure_set(x_106, 0, x_15);
lean_closure_set(x_106, 1, x_17);
lean_closure_set(x_106, 2, x_3);
lean_closure_set(x_106, 3, x_2);
lean_closure_set(x_106, 4, x_1);
lean_closure_set(x_106, 5, x_4);
x_107 = 1;
x_108 = lean_box(x_107);
x_109 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBinders___rarg___boxed), 10, 3);
lean_closure_set(x_109, 0, x_105);
lean_closure_set(x_109, 1, x_106);
lean_closure_set(x_109, 2, x_108);
x_110 = l_Lean_Elab_Term_withAutoBoundImplicitLocal___rarg(x_109, x_107, x_5, x_6, x_7, x_8, x_103, x_10, x_11);
return x_110;
}
else
{
lean_object* x_111; uint8_t x_112; 
x_111 = lean_ctor_get(x_18, 0);
lean_inc(x_111);
lean_dec(x_18);
x_112 = lean_ctor_get_uint8(x_111, sizeof(void*)*4);
switch (x_112) {
case 0:
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
lean_dec(x_111);
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_113 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_113, 0, x_17);
x_114 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__2;
x_115 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_115, 0, x_114);
lean_ctor_set(x_115, 1, x_113);
x_116 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_117 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_117, 0, x_115);
lean_ctor_set(x_117, 1, x_116);
x_118 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__2___rarg(x_117, x_5, x_6, x_7, x_8, x_103, x_10, x_11);
lean_dec(x_10);
lean_dec(x_103);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_118;
}
case 1:
{
lean_object* x_119; 
x_119 = lean_ctor_get(x_15, 6);
lean_inc(x_119);
if (lean_obj_tag(x_119) == 0)
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; 
lean_dec(x_111);
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_120 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_120, 0, x_17);
x_121 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__2;
x_122 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_122, 0, x_121);
lean_ctor_set(x_122, 1, x_120);
x_123 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__2;
x_124 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_124, 0, x_122);
lean_ctor_set(x_124, 1, x_123);
x_125 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__3___rarg(x_124, x_5, x_6, x_7, x_8, x_103, x_10, x_11);
lean_dec(x_10);
lean_dec(x_103);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_125;
}
else
{
lean_object* x_126; 
x_126 = lean_ctor_get(x_15, 5);
lean_inc(x_126);
if (lean_obj_tag(x_126) == 0)
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; uint8_t x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; uint8_t x_136; 
lean_dec(x_17);
x_127 = lean_ctor_get(x_111, 0);
lean_inc(x_127);
x_128 = lean_ctor_get(x_111, 1);
lean_inc(x_128);
x_129 = lean_ctor_get(x_111, 2);
lean_inc(x_129);
x_130 = lean_ctor_get_uint8(x_111, sizeof(void*)*4 + 1);
lean_dec(x_111);
x_131 = lean_ctor_get(x_119, 0);
lean_inc(x_131);
lean_dec(x_119);
x_132 = lean_ctor_get(x_15, 4);
lean_inc(x_132);
lean_dec(x_15);
x_133 = l_Lean_Syntax_getArgs(x_132);
lean_dec(x_132);
x_134 = lean_array_get_size(x_133);
x_135 = lean_unsigned_to_nat(0u);
x_136 = lean_nat_dec_lt(x_135, x_134);
lean_dec(x_134);
if (x_136 == 0)
{
lean_object* x_137; lean_object* x_138; 
lean_dec(x_133);
x_137 = lean_box(0);
x_138 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__5(x_129, x_127, x_128, x_112, x_130, x_3, x_2, x_1, x_4, x_131, x_137, x_5, x_6, x_7, x_8, x_103, x_10, x_11);
lean_dec(x_2);
return x_138;
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; 
x_139 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__3___rarg(x_103, x_10, x_11);
x_140 = lean_ctor_get(x_139, 0);
lean_inc(x_140);
x_141 = lean_ctor_get(x_139, 1);
lean_inc(x_141);
lean_dec(x_139);
x_142 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_6, x_7, x_8, x_103, x_10, x_141);
x_143 = lean_ctor_get(x_142, 1);
lean_inc(x_143);
lean_dec(x_142);
x_144 = l_Lean_Elab_Term_getMainModule___rarg(x_10, x_143);
x_145 = lean_ctor_get(x_144, 1);
lean_inc(x_145);
lean_dec(x_144);
x_146 = l_myMacro____x40_Init_Notation___hyg_12336____closed__9;
lean_inc(x_140);
x_147 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_147, 0, x_140);
lean_ctor_set(x_147, 1, x_146);
x_148 = l_Array_empty___closed__1;
x_149 = lean_array_push(x_148, x_147);
x_150 = l_Array_appendCore___rarg(x_148, x_133);
lean_dec(x_133);
x_151 = l_Lean_nullKind___closed__2;
x_152 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_152, 0, x_151);
lean_ctor_set(x_152, 1, x_150);
x_153 = lean_array_push(x_148, x_152);
x_154 = l_myMacro____x40_Init_Notation___hyg_12336____closed__13;
x_155 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_155, 0, x_140);
lean_ctor_set(x_155, 1, x_154);
x_156 = lean_array_push(x_153, x_155);
x_157 = lean_array_push(x_156, x_131);
x_158 = l_myMacro____x40_Init_Notation___hyg_12336____closed__12;
x_159 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_159, 0, x_158);
lean_ctor_set(x_159, 1, x_157);
x_160 = lean_array_push(x_149, x_159);
x_161 = l_myMacro____x40_Init_Notation___hyg_12336____closed__10;
x_162 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_162, 0, x_161);
lean_ctor_set(x_162, 1, x_160);
x_163 = lean_box(0);
x_164 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__5(x_129, x_127, x_128, x_112, x_130, x_3, x_2, x_1, x_4, x_162, x_163, x_5, x_6, x_7, x_8, x_103, x_10, x_145);
lean_dec(x_2);
return x_164;
}
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; 
lean_dec(x_119);
lean_dec(x_111);
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_165 = lean_ctor_get(x_126, 0);
lean_inc(x_165);
lean_dec(x_126);
x_166 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_166, 0, x_17);
x_167 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__4;
x_168 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_168, 0, x_167);
lean_ctor_set(x_168, 1, x_166);
x_169 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__6;
x_170 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_170, 0, x_168);
lean_ctor_set(x_170, 1, x_169);
x_171 = l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__4___rarg(x_165, x_170, x_5, x_6, x_7, x_8, x_103, x_10, x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_165);
return x_171;
}
}
}
default: 
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; 
lean_dec(x_111);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_172 = l_Lean_Elab_Term_getFVarLocalDecl_x21___closed__1;
x_173 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__9;
x_174 = lean_panic_fn(x_172, x_173);
x_175 = lean_apply_7(x_174, x_5, x_6, x_7, x_8, x_103, x_10, x_11);
return x_175;
}
}
}
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg), 11, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_5);
lean_dec(x_1);
return x_16;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_5);
lean_dec(x_1);
return x_16;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__5___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
_start:
{
uint8_t x_19; uint8_t x_20; lean_object* x_21; 
x_19 = lean_unbox(x_4);
lean_dec(x_4);
x_20 = lean_unbox(x_5);
lean_dec(x_5);
x_21 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__5(x_1, x_2, x_3, x_19, x_20, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_11);
lean_dec(x_7);
return x_21;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 3)
{
lean_object* x_4; uint64_t x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_6 = lean_box_uint64(x_5);
x_7 = lean_apply_2(x_2, x_4, x_6);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_2);
x_8 = lean_apply_1(x_3, x_1);
return x_8;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected structure resulting type");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_9 = l_Lean_Meta_whnf(x_1, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 3)
{
uint8_t x_11; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_9, 0);
lean_dec(x_12);
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
lean_ctor_set(x_9, 0, x_13);
return x_9;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
lean_dec(x_9);
x_15 = lean_ctor_get(x_10, 0);
lean_inc(x_15);
lean_dec(x_10);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_10);
x_17 = lean_ctor_get(x_9, 1);
lean_inc(x_17);
lean_dec(x_9);
x_18 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__3;
x_19 = l_Lean_throwError___at___private_Lean_Elab_Inductive_0__Lean_Elab_Command_getResultingUniverse___spec__1(x_18, x_2, x_3, x_4, x_5, x_6, x_7, x_17);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_19;
}
}
else
{
uint8_t x_20; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_20 = !lean_is_exclusive(x_9);
if (x_20 == 0)
{
return x_9;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_9, 0);
x_22 = lean_ctor_get(x_9, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_9);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
return x_9;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___spec__3(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = x_3 == x_4;
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_array_uget(x_2, x_3);
lean_inc(x_1);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_16 = lean_apply_10(x_1, x_5, x_15, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = 1;
x_20 = x_3 + x_19;
x_3 = x_20;
x_5 = x_17;
x_13 = x_18;
goto _start;
}
else
{
uint8_t x_22; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_16);
if (x_22 == 0)
{
return x_16;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_16, 0);
x_24 = lean_ctor_get(x_16, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_16);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
lean_object* x_26; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_5);
lean_ctor_set(x_26, 1, x_13);
return x_26;
}
}
}
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = lean_nat_dec_lt(x_4, x_5);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_2);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
else
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_array_get_size(x_3);
x_17 = lean_nat_dec_le(x_5, x_16);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_2);
lean_ctor_set(x_18, 1, x_13);
return x_18;
}
else
{
size_t x_19; size_t x_20; lean_object* x_21; 
x_19 = lean_usize_of_nat(x_4);
x_20 = lean_usize_of_nat(x_5);
x_21 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___spec__3(x_1, x_3, x_19, x_20, x_2, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_21;
}
}
}
}
lean_object* l_Array_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_alloc_closure((void*)(l_Array_forM___at_Lean_Elab_Term_collectUsedFVarsAtFVars___spec__1___lambda__1___boxed), 11, 1);
lean_closure_set(x_13, 0, x_1);
x_14 = lean_box(0);
x_15 = l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___spec__2(x_13, x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_15;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_1, 2);
lean_inc(x_10);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_11 = l_Lean_Meta_inferType(x_10, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_14 = l_Lean_Elab_Term_collectUsedFVars(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_1, 3);
lean_inc(x_15);
lean_dec(x_1);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_16 = !lean_is_exclusive(x_14);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_14, 0);
lean_dec(x_17);
x_18 = lean_box(0);
lean_ctor_set(x_14, 0, x_18);
return x_14;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_14, 1);
lean_inc(x_19);
lean_dec(x_14);
x_20 = lean_box(0);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_14, 1);
lean_inc(x_22);
lean_dec(x_14);
x_23 = lean_ctor_get(x_15, 0);
lean_inc(x_23);
lean_dec(x_15);
x_24 = l_Lean_Elab_Term_collectUsedFVars(x_23, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_22);
return x_24;
}
}
else
{
uint8_t x_25; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_14);
if (x_25 == 0)
{
return x_14;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_14, 0);
x_27 = lean_ctor_get(x_14, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_14);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
uint8_t x_29; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_29 = !lean_is_exclusive(x_11);
if (x_29 == 0)
{
return x_11;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_11, 0);
x_31 = lean_ctor_get(x_11, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_11);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___lambda__1___boxed), 9, 0);
return x_1;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_array_get_size(x_1);
x_12 = l_Lean_Elab_Term_collectUsedFVarsAtFVars___closed__1;
x_13 = lean_unsigned_to_nat(0u);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_14 = l_Array_forM___at_Lean_Elab_Term_collectUsedFVarsAtFVars___spec__1(x_12, x_1, x_13, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_array_get_size(x_2);
x_17 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___closed__1;
x_18 = l_Array_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___spec__1(x_17, x_2, x_13, x_16, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_15);
lean_dec(x_16);
return x_18;
}
else
{
uint8_t x_19; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_19 = !lean_is_exclusive(x_14);
if (x_19 == 0)
{
return x_14;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_14, 0);
x_21 = lean_ctor_get(x_14, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_14);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_15 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_16 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___spec__3(x_1, x_2, x_14, x_15, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_2);
return x_16;
}
}
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_14;
}
}
lean_object* l_Array_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Array_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_13;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_removeUnused_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_removeUnused_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_removeUnused_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_removeUnused(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_st_ref_get(x_9, x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_CollectFVars_instInhabitedState___closed__1;
x_14 = lean_st_mk_ref(x_13, x_12);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_15);
x_17 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed(x_2, x_3, x_15, x_4, x_5, x_6, x_7, x_8, x_9, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_st_ref_get(x_9, x_18);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_st_ref_get(x_15, x_20);
lean_dec(x_15);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_Elab_Term_removeUnused(x_1, x_22, x_4, x_5, x_6, x_7, x_8, x_9, x_23);
return x_24;
}
else
{
uint8_t x_25; 
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_25 = !lean_is_exclusive(x_17);
if (x_25 == 0)
{
return x_17;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_17, 0);
x_27 = lean_ctor_get(x_17, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_17);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_removeUnused___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_removeUnused(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_apply_3(x_2, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_12 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_removeUnused(x_1, x_2, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
x_16 = lean_ctor_get(x_13, 0);
lean_inc(x_16);
lean_dec(x_13);
x_17 = lean_ctor_get(x_14, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_14, 1);
lean_inc(x_18);
lean_dec(x_14);
x_19 = lean_apply_1(x_4, x_18);
x_20 = l_Lean_Meta_withLCtx___at_Lean_Elab_Term_elabSyntheticHole___spec__1___rarg(x_16, x_17, x_19, x_5, x_6, x_7, x_8, x_9, x_10, x_15);
return x_20;
}
else
{
uint8_t x_21; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_21 = !lean_is_exclusive(x_12);
if (x_21 == 0)
{
return x_12;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_12, 0);
x_23 = lean_ctor_get(x_12, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_12);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed___rarg___boxed), 11, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_10 = l_Lean_Meta_inferType(x_1, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Elab_Term_levelMVarToParam_x27(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
lean_dec(x_15);
x_16 = lean_box(0);
lean_ctor_set(x_13, 0, x_16);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_13, 1);
lean_inc(x_17);
lean_dec(x_13);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
uint8_t x_20; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_20 = !lean_is_exclusive(x_10);
if (x_20 == 0)
{
return x_10;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_10, 0);
x_22 = lean_ctor_get(x_10, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_10);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVar(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___spec__3(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = x_3 == x_4;
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_array_uget(x_2, x_3);
lean_inc(x_1);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_16 = lean_apply_10(x_1, x_5, x_15, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = 1;
x_20 = x_3 + x_19;
x_3 = x_20;
x_5 = x_17;
x_13 = x_18;
goto _start;
}
else
{
uint8_t x_22; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_16);
if (x_22 == 0)
{
return x_16;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_16, 0);
x_24 = lean_ctor_get(x_16, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_16);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
lean_object* x_26; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_5);
lean_ctor_set(x_26, 1, x_13);
return x_26;
}
}
}
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = lean_nat_dec_lt(x_4, x_5);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_2);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
else
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_array_get_size(x_3);
x_17 = lean_nat_dec_le(x_5, x_16);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_2);
lean_ctor_set(x_18, 1, x_13);
return x_18;
}
else
{
size_t x_19; size_t x_20; lean_object* x_21; 
x_19 = lean_usize_of_nat(x_4);
x_20 = lean_usize_of_nat(x_5);
x_21 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___spec__3(x_1, x_3, x_19, x_20, x_2, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_21;
}
}
}
}
lean_object* l_Array_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_alloc_closure((void*)(l_Array_forM___at_Lean_Elab_Term_collectUsedFVarsAtFVars___spec__1___lambda__1___boxed), 11, 1);
lean_closure_set(x_13, 0, x_1);
x_14 = lean_box(0);
x_15 = l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___spec__2(x_13, x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_15;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVar___boxed), 9, 0);
return x_1;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_array_get_size(x_1);
x_11 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___closed__1;
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Array_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___spec__1(x_11, x_1, x_12, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_10);
return x_13;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_15 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_16 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___spec__3(x_1, x_2, x_14, x_15, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_2);
return x_16;
}
}
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_14;
}
}
lean_object* l_Array_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Array_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_13;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___spec__1(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_2 < x_1;
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_13 = x_3;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_11);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; 
x_15 = lean_array_uget(x_3, x_2);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_array_uset(x_3, x_2, x_16);
x_18 = x_15;
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_18, 2);
lean_inc(x_21);
x_22 = lean_ctor_get_uint8(x_18, sizeof(void*)*4);
x_23 = lean_ctor_get_uint8(x_18, sizeof(void*)*4 + 1);
x_24 = lean_ctor_get(x_18, 3);
lean_inc(x_24);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_21);
x_25 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVar(x_21, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_25) == 0)
{
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_26; size_t x_27; size_t x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = 1;
x_28 = x_2 + x_27;
x_29 = x_18;
x_30 = lean_array_uset(x_17, x_2, x_29);
x_2 = x_28;
x_3 = x_30;
x_11 = x_26;
goto _start;
}
else
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_18);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_33 = lean_ctor_get(x_18, 3);
lean_dec(x_33);
x_34 = lean_ctor_get(x_18, 2);
lean_dec(x_34);
x_35 = lean_ctor_get(x_18, 1);
lean_dec(x_35);
x_36 = lean_ctor_get(x_18, 0);
lean_dec(x_36);
x_37 = lean_ctor_get(x_25, 1);
lean_inc(x_37);
lean_dec(x_25);
x_38 = !lean_is_exclusive(x_24);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; size_t x_43; size_t x_44; lean_object* x_45; lean_object* x_46; 
x_39 = lean_ctor_get(x_24, 0);
x_40 = l_Lean_Elab_Term_levelMVarToParam_x27(x_39, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_37);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
lean_ctor_set(x_24, 0, x_41);
x_43 = 1;
x_44 = x_2 + x_43;
x_45 = x_18;
x_46 = lean_array_uset(x_17, x_2, x_45);
x_2 = x_44;
x_3 = x_46;
x_11 = x_42;
goto _start;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; size_t x_53; size_t x_54; lean_object* x_55; lean_object* x_56; 
x_48 = lean_ctor_get(x_24, 0);
lean_inc(x_48);
lean_dec(x_24);
x_49 = l_Lean_Elab_Term_levelMVarToParam_x27(x_48, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_37);
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
x_52 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_18, 3, x_52);
x_53 = 1;
x_54 = x_2 + x_53;
x_55 = x_18;
x_56 = lean_array_uset(x_17, x_2, x_55);
x_2 = x_54;
x_3 = x_56;
x_11 = x_51;
goto _start;
}
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; size_t x_66; size_t x_67; lean_object* x_68; lean_object* x_69; 
lean_dec(x_18);
x_58 = lean_ctor_get(x_25, 1);
lean_inc(x_58);
lean_dec(x_25);
x_59 = lean_ctor_get(x_24, 0);
lean_inc(x_59);
if (lean_is_exclusive(x_24)) {
 lean_ctor_release(x_24, 0);
 x_60 = x_24;
} else {
 lean_dec_ref(x_24);
 x_60 = lean_box(0);
}
x_61 = l_Lean_Elab_Term_levelMVarToParam_x27(x_59, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_58);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
if (lean_is_scalar(x_60)) {
 x_64 = lean_alloc_ctor(1, 1, 0);
} else {
 x_64 = x_60;
}
lean_ctor_set(x_64, 0, x_62);
x_65 = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(x_65, 0, x_19);
lean_ctor_set(x_65, 1, x_20);
lean_ctor_set(x_65, 2, x_21);
lean_ctor_set(x_65, 3, x_64);
lean_ctor_set_uint8(x_65, sizeof(void*)*4, x_22);
lean_ctor_set_uint8(x_65, sizeof(void*)*4 + 1, x_23);
x_66 = 1;
x_67 = x_2 + x_66;
x_68 = x_65;
x_69 = lean_array_uset(x_17, x_2, x_68);
x_2 = x_67;
x_3 = x_69;
x_11 = x_63;
goto _start;
}
}
}
else
{
uint8_t x_71; 
lean_dec(x_24);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_71 = !lean_is_exclusive(x_25);
if (x_71 == 0)
{
return x_25;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_25, 0);
x_73 = lean_ctor_get(x_25, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_25);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_12 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars(x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_14 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars(x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; size_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_array_get_size(x_3);
x_17 = lean_usize_of_nat(x_16);
lean_dec(x_16);
x_18 = x_3;
x_19 = lean_box_usize(x_17);
x_20 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___boxed__const__1;
x_21 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___spec__1___boxed), 11, 3);
lean_closure_set(x_21, 0, x_19);
lean_closure_set(x_21, 1, x_20);
lean_closure_set(x_21, 2, x_18);
x_22 = x_21;
x_23 = lean_apply_8(x_22, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_15);
return x_23;
}
else
{
uint8_t x_24; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_24 = !lean_is_exclusive(x_14);
if (x_24 == 0)
{
return x_14;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_14, 0);
x_26 = lean_ctor_get(x_14, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_14);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
uint8_t x_28; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_28 = !lean_is_exclusive(x_12);
if (x_28 == 0)
{
return x_12;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_12, 0);
x_30 = lean_ctor_get(x_12, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_12);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_13 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_14 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___spec__1(x_12, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_14;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParam(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_st_ref_get(x_9, x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_st_mk_ref(x_13, x_12);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
lean_inc(x_9);
lean_inc(x_15);
x_17 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux(x_1, x_2, x_3, x_15, x_4, x_5, x_6, x_7, x_8, x_9, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_st_ref_get(x_9, x_19);
lean_dec(x_9);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_st_ref_get(x_15, x_21);
lean_dec(x_15);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_22, 0);
lean_dec(x_24);
lean_ctor_set(x_22, 0, x_18);
return x_22;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_18);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
uint8_t x_27; 
lean_dec(x_15);
lean_dec(x_9);
x_27 = !lean_is_exclusive(x_17);
if (x_27 == 0)
{
return x_17;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_17, 0);
x_29 = lean_ctor_get(x_17, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_17);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParam___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParam(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields___spec__2(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = x_3 == x_4;
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_uget(x_2, x_3);
lean_inc(x_1);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_15 = lean_apply_9(x_1, x_5, x_14, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = 1;
x_19 = x_3 + x_18;
x_3 = x_19;
x_5 = x_16;
x_12 = x_17;
goto _start;
}
else
{
uint8_t x_21; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_21 = !lean_is_exclusive(x_15);
if (x_21 == 0)
{
return x_15;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_15, 0);
x_23 = lean_ctor_get(x_15, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_15);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
else
{
lean_object* x_25; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_5);
lean_ctor_set(x_25, 1, x_12);
return x_25;
}
}
}
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_nat_dec_lt(x_4, x_5);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_array_get_size(x_3);
x_16 = lean_nat_dec_le(x_5, x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_2);
lean_ctor_set(x_17, 1, x_12);
return x_17;
}
else
{
size_t x_18; size_t x_19; lean_object* x_20; 
x_18 = lean_usize_of_nat(x_4);
x_19 = lean_usize_of_nat(x_5);
x_20 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields___spec__2(x_1, x_3, x_18, x_19, x_2, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_20;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_4, 2);
lean_inc(x_12);
lean_dec(x_4);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_13 = l_Lean_Meta_inferType(x_12, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_16 = l_Lean_Meta_getLevel(x_14, x_7, x_8, x_9, x_10, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVars___spec__1___closed__1;
x_20 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVars___spec__1___closed__2;
x_21 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVars___spec__1___closed__3;
x_22 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVars___spec__1___closed__4;
x_23 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVars___spec__1___closed__5;
x_24 = l_Lean_MetavarContext_instantiateLevelMVars_match__2___rarg(x_17, x_19, x_20, x_21, x_22, x_23);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_25 = lean_apply_5(x_24, x_7, x_8, x_9, x_10, x_18);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l_Lean_Elab_Command_accLevelAtCtor(x_26, x_1, x_2, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_27);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_28;
}
else
{
uint8_t x_29; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_29 = !lean_is_exclusive(x_25);
if (x_29 == 0)
{
return x_25;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_25, 0);
x_31 = lean_ctor_get(x_25, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_25);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
else
{
uint8_t x_33; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_16);
if (x_33 == 0)
{
return x_16;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_16, 0);
x_35 = lean_ctor_get(x_16, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_16);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
uint8_t x_37; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_37 = !lean_is_exclusive(x_13);
if (x_37 == 0)
{
return x_13;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_13, 0);
x_39 = lean_ctor_get(x_13, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_13);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields___lambda__1___boxed), 11, 2);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_2);
x_12 = lean_array_get_size(x_3);
x_13 = l_Array_empty___closed__1;
x_14 = lean_unsigned_to_nat(0u);
x_15 = l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields___spec__1(x_11, x_13, x_3, x_14, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_12);
return x_15;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields___spec__2(x_1, x_2, x_13, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_2);
return x_15;
}
}
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_13;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_3);
return x_11;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 5)
{
lean_object* x_4; uint64_t x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_6 = lean_box_uint64(x_5);
x_7 = lean_apply_2(x_2, x_4, x_6);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_2);
x_8 = lean_apply_1(x_3, x_1);
return x_8;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failed to compute resulting universe level of structure, provide universe explicitly");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_2);
x_10 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Lean_Level_getOffsetAux(x_11, x_13);
x_15 = l_Lean_Level_getLevelOffset(x_11);
lean_dec(x_11);
if (lean_obj_tag(x_15) == 5)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_14);
x_17 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields(x_15, x_14, x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_Elab_Command_mkResultUniverse(x_18, x_14);
lean_dec(x_14);
x_21 = l_Lean_Meta_assignLevelMVar(x_16, x_20, x_5, x_6, x_7, x_8, x_19);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = l_Lean_Meta_instantiateMVars(x_2, x_5, x_6, x_7, x_8, x_22);
return x_23;
}
else
{
uint8_t x_24; 
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_24 = !lean_is_exclusive(x_17);
if (x_24 == 0)
{
return x_17;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_17, 0);
x_26 = lean_ctor_get(x_17, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_17);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
lean_object* x_28; lean_object* x_29; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_2);
x_28 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__3;
x_29 = l_Lean_throwError___at_Lean_Elab_Term_synthesizeInst___spec__1(x_28, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_29;
}
}
else
{
uint8_t x_30; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_30 = !lean_is_exclusive(x_10);
if (x_30 == 0)
{
return x_10;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_10, 0);
x_32 = lean_ctor_get(x_10, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_10);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_10 = l_Lean_Meta_inferType(x_2, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Meta_instantiateMVars(x_11, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = l_Lean_CollectLevelParams_main(x_15, x_1);
lean_ctor_set(x_13, 0, x_16);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_13, 0);
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_13);
x_19 = l_Lean_CollectLevelParams_main(x_17, x_1);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
uint8_t x_21; 
lean_dec(x_1);
x_21 = !lean_is_exclusive(x_13);
if (x_21 == 0)
{
return x_13;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_13, 0);
x_23 = lean_ctor_get(x_13, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_13);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
else
{
uint8_t x_25; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_10);
if (x_25 == 0)
{
return x_10;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_10, 0);
x_27 = lean_ctor_get(x_10, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_10);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVar(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars___spec__2(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = x_3 == x_4;
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_uget(x_2, x_3);
lean_inc(x_1);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_15 = lean_apply_9(x_1, x_5, x_14, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = 1;
x_19 = x_3 + x_18;
x_3 = x_19;
x_5 = x_16;
x_12 = x_17;
goto _start;
}
else
{
uint8_t x_21; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_21 = !lean_is_exclusive(x_15);
if (x_21 == 0)
{
return x_15;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_15, 0);
x_23 = lean_ctor_get(x_15, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_15);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
else
{
lean_object* x_25; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_5);
lean_ctor_set(x_25, 1, x_12);
return x_25;
}
}
}
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_nat_dec_lt(x_4, x_5);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_array_get_size(x_3);
x_16 = lean_nat_dec_le(x_5, x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_2);
lean_ctor_set(x_17, 1, x_12);
return x_17;
}
else
{
size_t x_18; size_t x_19; lean_object* x_20; 
x_18 = lean_usize_of_nat(x_4);
x_19 = lean_usize_of_nat(x_5);
x_20 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars___spec__2(x_1, x_3, x_18, x_19, x_2, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_20;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVar___boxed), 9, 0);
return x_1;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_array_get_size(x_1);
x_11 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars___closed__1;
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars___spec__1(x_11, x_2, x_1, x_12, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_10);
return x_13;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars___spec__2(x_1, x_2, x_13, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_2);
return x_15;
}
}
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_13;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___spec__2(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = x_3 == x_4;
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_uget(x_2, x_3);
lean_inc(x_1);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_15 = lean_apply_9(x_1, x_5, x_14, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = 1;
x_19 = x_3 + x_18;
x_3 = x_19;
x_5 = x_16;
x_12 = x_17;
goto _start;
}
else
{
uint8_t x_21; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_21 = !lean_is_exclusive(x_15);
if (x_21 == 0)
{
return x_15;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_15, 0);
x_23 = lean_ctor_get(x_15, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_15);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
else
{
lean_object* x_25; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_5);
lean_ctor_set(x_25, 1, x_12);
return x_25;
}
}
}
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_nat_dec_lt(x_4, x_5);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_array_get_size(x_3);
x_16 = lean_nat_dec_le(x_5, x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_2);
lean_ctor_set(x_17, 1, x_12);
return x_17;
}
else
{
size_t x_18; size_t x_19; lean_object* x_20; 
x_18 = lean_usize_of_nat(x_4);
x_19 = lean_usize_of_nat(x_5);
x_20 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___spec__2(x_1, x_3, x_18, x_19, x_2, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_20;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_2, 2);
lean_inc(x_10);
lean_dec(x_2);
x_11 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVar(x_1, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___lambda__1___boxed), 9, 0);
return x_1;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = l_Lean_CollectLevelParams_instInhabitedState___closed__1;
x_13 = l_Lean_CollectLevelParams_main(x_1, x_12);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_14 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars(x_2, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_17 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars(x_3, x_15, x_5, x_6, x_7, x_8, x_9, x_10, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_array_get_size(x_4);
x_21 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___closed__1;
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___spec__1(x_21, x_18, x_4, x_22, x_20, x_5, x_6, x_7, x_8, x_9, x_10, x_19);
lean_dec(x_20);
if (lean_obj_tag(x_23) == 0)
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_23, 0);
x_26 = lean_ctor_get(x_25, 2);
lean_inc(x_26);
lean_dec(x_25);
lean_ctor_set(x_23, 0, x_26);
return x_23;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_27 = lean_ctor_get(x_23, 0);
x_28 = lean_ctor_get(x_23, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_23);
x_29 = lean_ctor_get(x_27, 2);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
return x_30;
}
}
else
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_23);
if (x_31 == 0)
{
return x_23;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_23, 0);
x_33 = lean_ctor_get(x_23, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_23);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
uint8_t x_35; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_35 = !lean_is_exclusive(x_17);
if (x_35 == 0)
{
return x_17;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_17, 0);
x_37 = lean_ctor_get(x_17, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_17);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
uint8_t x_39; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_39 = !lean_is_exclusive(x_14);
if (x_39 == 0)
{
return x_14;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_14, 0);
x_41 = lean_ctor_get(x_14, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_14);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___spec__2(x_1, x_2, x_13, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_2);
return x_15;
}
}
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_13;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_2);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_4, x_5);
return x_6;
}
case 1:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_3);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_2, x_7);
return x_8;
}
default: 
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_2);
x_9 = lean_box(0);
x_10 = lean_apply_1(x_3, x_9);
return x_10;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__1___rarg(x_5, x_2, x_3, x_4);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_1, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_1, x_7);
x_9 = lean_apply_2(x_4, x_8, x_2);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_4);
x_10 = lean_apply_1(x_3, x_2);
return x_10;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__2___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_eq(x_2, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_sub(x_2, x_13);
lean_dec(x_2);
x_15 = l_Lean_Elab_Command_instInhabitedStructFieldInfo;
x_16 = lean_array_get(x_15, x_1, x_14);
x_17 = lean_ctor_get(x_16, 2);
lean_inc(x_17);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_18 = l_Lean_Elab_Term_getFVarLocalDecl_x21(x_17, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_21 = l_Lean_Meta_instantiateMVars(x_3, x_6, x_7, x_8, x_9, x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_mkOptionalNode___closed__2;
x_25 = lean_array_push(x_24, x_17);
x_26 = lean_expr_abstract(x_22, x_25);
lean_dec(x_25);
lean_dec(x_22);
x_27 = lean_ctor_get_uint8(x_16, sizeof(void*)*4);
lean_dec(x_16);
switch (x_27) {
case 0:
{
lean_object* x_28; uint8_t x_29; lean_object* x_30; lean_object* x_31; 
x_28 = l_Lean_LocalDecl_userName(x_19);
x_29 = l_Lean_LocalDecl_binderInfo(x_19);
x_30 = l_Lean_LocalDecl_type(x_19);
lean_dec(x_19);
x_31 = l_Lean_mkForall(x_28, x_29, x_30, x_26);
x_2 = x_14;
x_3 = x_31;
x_10 = x_23;
goto _start;
}
case 1:
{
lean_object* x_33; lean_object* x_34; 
x_33 = l_Lean_LocalDecl_value(x_19);
lean_dec(x_19);
x_34 = lean_expr_instantiate1(x_26, x_33);
lean_dec(x_33);
lean_dec(x_26);
x_2 = x_14;
x_3 = x_34;
x_10 = x_23;
goto _start;
}
default: 
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_40; lean_object* x_41; 
x_36 = l_Lean_LocalDecl_userName(x_19);
x_37 = l_myMacro____x40_Init_Notation___hyg_12938____closed__14;
x_38 = l_Lean_Name_appendBefore(x_36, x_37);
x_39 = l_Lean_LocalDecl_binderInfo(x_19);
x_40 = l_Lean_LocalDecl_type(x_19);
lean_dec(x_19);
x_41 = l_Lean_mkForall(x_38, x_39, x_40, x_26);
x_2 = x_14;
x_3 = x_41;
x_10 = x_23;
goto _start;
}
}
}
else
{
uint8_t x_43; 
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_43 = !lean_is_exclusive(x_21);
if (x_43 == 0)
{
return x_21;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_21, 0);
x_45 = lean_ctor_get(x_21, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_21);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_47 = !lean_is_exclusive(x_18);
if (x_47 == 0)
{
return x_18;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_18, 0);
x_49 = lean_ctor_get(x_18, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_18);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
lean_object* x_51; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_3);
lean_ctor_set(x_51, 1, x_10);
return x_51;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1);
return x_11;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkCtor(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 4);
lean_inc(x_13);
x_14 = l_List_map___at_Lean_Meta_addInstance___spec__1(x_2);
x_15 = l_Lean_mkConst(x_13, x_14);
x_16 = l_Lean_mkAppN(x_15, x_3);
x_17 = lean_array_get_size(x_4);
x_18 = !lean_is_exclusive(x_9);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_9, 3);
x_20 = l_Lean_replaceRef(x_12, x_19);
lean_dec(x_19);
lean_dec(x_12);
lean_ctor_set(x_9, 3, x_20);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_21 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields(x_4, x_17, x_16, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
lean_inc(x_7);
lean_inc(x_3);
x_24 = l_Lean_Meta_mkForallFVars(x_3, x_22, x_7, x_8, x_9, x_10, x_23);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l_Lean_Meta_instantiateMVars(x_25, x_7, x_8, x_9, x_10, x_26);
if (lean_obj_tag(x_27) == 0)
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_29 = lean_ctor_get(x_27, 0);
x_30 = lean_array_get_size(x_3);
lean_dec(x_3);
x_31 = lean_ctor_get(x_1, 9);
lean_inc(x_31);
lean_dec(x_1);
x_32 = lean_ctor_get_uint8(x_31, sizeof(void*)*4);
if (x_32 == 0)
{
lean_object* x_33; uint8_t x_34; lean_object* x_35; lean_object* x_36; 
x_33 = lean_ctor_get(x_31, 3);
lean_inc(x_33);
lean_dec(x_31);
x_34 = 1;
x_35 = l_Lean_Expr_inferImplicit(x_29, x_30, x_34);
lean_dec(x_30);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_33);
lean_ctor_set(x_36, 1, x_35);
lean_ctor_set(x_27, 0, x_36);
return x_27;
}
else
{
lean_object* x_37; uint8_t x_38; lean_object* x_39; lean_object* x_40; 
x_37 = lean_ctor_get(x_31, 3);
lean_inc(x_37);
lean_dec(x_31);
x_38 = 0;
x_39 = l_Lean_Expr_inferImplicit(x_29, x_30, x_38);
lean_dec(x_30);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_37);
lean_ctor_set(x_40, 1, x_39);
lean_ctor_set(x_27, 0, x_40);
return x_27;
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_41 = lean_ctor_get(x_27, 0);
x_42 = lean_ctor_get(x_27, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_27);
x_43 = lean_array_get_size(x_3);
lean_dec(x_3);
x_44 = lean_ctor_get(x_1, 9);
lean_inc(x_44);
lean_dec(x_1);
x_45 = lean_ctor_get_uint8(x_44, sizeof(void*)*4);
if (x_45 == 0)
{
lean_object* x_46; uint8_t x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_46 = lean_ctor_get(x_44, 3);
lean_inc(x_46);
lean_dec(x_44);
x_47 = 1;
x_48 = l_Lean_Expr_inferImplicit(x_41, x_43, x_47);
lean_dec(x_43);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_46);
lean_ctor_set(x_49, 1, x_48);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_42);
return x_50;
}
else
{
lean_object* x_51; uint8_t x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_51 = lean_ctor_get(x_44, 3);
lean_inc(x_51);
lean_dec(x_44);
x_52 = 0;
x_53 = l_Lean_Expr_inferImplicit(x_41, x_43, x_52);
lean_dec(x_43);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_51);
lean_ctor_set(x_54, 1, x_53);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_42);
return x_55;
}
}
}
else
{
uint8_t x_56; 
lean_dec(x_3);
lean_dec(x_1);
x_56 = !lean_is_exclusive(x_27);
if (x_56 == 0)
{
return x_27;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_27, 0);
x_58 = lean_ctor_get(x_27, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_27);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
else
{
uint8_t x_60; 
lean_dec(x_9);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
x_60 = !lean_is_exclusive(x_24);
if (x_60 == 0)
{
return x_24;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_24, 0);
x_62 = lean_ctor_get(x_24, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_24);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
else
{
uint8_t x_64; 
lean_dec(x_9);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
x_64 = !lean_is_exclusive(x_21);
if (x_64 == 0)
{
return x_21;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_21, 0);
x_66 = lean_ctor_get(x_21, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_21);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
}
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_68 = lean_ctor_get(x_9, 0);
x_69 = lean_ctor_get(x_9, 1);
x_70 = lean_ctor_get(x_9, 2);
x_71 = lean_ctor_get(x_9, 3);
x_72 = lean_ctor_get(x_9, 4);
x_73 = lean_ctor_get(x_9, 5);
x_74 = lean_ctor_get(x_9, 6);
x_75 = lean_ctor_get(x_9, 7);
lean_inc(x_75);
lean_inc(x_74);
lean_inc(x_73);
lean_inc(x_72);
lean_inc(x_71);
lean_inc(x_70);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_9);
x_76 = l_Lean_replaceRef(x_12, x_71);
lean_dec(x_71);
lean_dec(x_12);
x_77 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_77, 0, x_68);
lean_ctor_set(x_77, 1, x_69);
lean_ctor_set(x_77, 2, x_70);
lean_ctor_set(x_77, 3, x_76);
lean_ctor_set(x_77, 4, x_72);
lean_ctor_set(x_77, 5, x_73);
lean_ctor_set(x_77, 6, x_74);
lean_ctor_set(x_77, 7, x_75);
lean_inc(x_10);
lean_inc(x_77);
lean_inc(x_8);
lean_inc(x_7);
x_78 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields(x_4, x_17, x_16, x_5, x_6, x_7, x_8, x_77, x_10, x_11);
if (lean_obj_tag(x_78) == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_78, 1);
lean_inc(x_80);
lean_dec(x_78);
lean_inc(x_7);
lean_inc(x_3);
x_81 = l_Lean_Meta_mkForallFVars(x_3, x_79, x_7, x_8, x_77, x_10, x_80);
if (lean_obj_tag(x_81) == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_81, 1);
lean_inc(x_83);
lean_dec(x_81);
x_84 = l_Lean_Meta_instantiateMVars(x_82, x_7, x_8, x_77, x_10, x_83);
if (lean_obj_tag(x_84) == 0)
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; uint8_t x_90; 
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_84, 1);
lean_inc(x_86);
if (lean_is_exclusive(x_84)) {
 lean_ctor_release(x_84, 0);
 lean_ctor_release(x_84, 1);
 x_87 = x_84;
} else {
 lean_dec_ref(x_84);
 x_87 = lean_box(0);
}
x_88 = lean_array_get_size(x_3);
lean_dec(x_3);
x_89 = lean_ctor_get(x_1, 9);
lean_inc(x_89);
lean_dec(x_1);
x_90 = lean_ctor_get_uint8(x_89, sizeof(void*)*4);
if (x_90 == 0)
{
lean_object* x_91; uint8_t x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_91 = lean_ctor_get(x_89, 3);
lean_inc(x_91);
lean_dec(x_89);
x_92 = 1;
x_93 = l_Lean_Expr_inferImplicit(x_85, x_88, x_92);
lean_dec(x_88);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_91);
lean_ctor_set(x_94, 1, x_93);
if (lean_is_scalar(x_87)) {
 x_95 = lean_alloc_ctor(0, 2, 0);
} else {
 x_95 = x_87;
}
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_86);
return x_95;
}
else
{
lean_object* x_96; uint8_t x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_96 = lean_ctor_get(x_89, 3);
lean_inc(x_96);
lean_dec(x_89);
x_97 = 0;
x_98 = l_Lean_Expr_inferImplicit(x_85, x_88, x_97);
lean_dec(x_88);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_96);
lean_ctor_set(x_99, 1, x_98);
if (lean_is_scalar(x_87)) {
 x_100 = lean_alloc_ctor(0, 2, 0);
} else {
 x_100 = x_87;
}
lean_ctor_set(x_100, 0, x_99);
lean_ctor_set(x_100, 1, x_86);
return x_100;
}
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; 
lean_dec(x_3);
lean_dec(x_1);
x_101 = lean_ctor_get(x_84, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_84, 1);
lean_inc(x_102);
if (lean_is_exclusive(x_84)) {
 lean_ctor_release(x_84, 0);
 lean_ctor_release(x_84, 1);
 x_103 = x_84;
} else {
 lean_dec_ref(x_84);
 x_103 = lean_box(0);
}
if (lean_is_scalar(x_103)) {
 x_104 = lean_alloc_ctor(1, 2, 0);
} else {
 x_104 = x_103;
}
lean_ctor_set(x_104, 0, x_101);
lean_ctor_set(x_104, 1, x_102);
return x_104;
}
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
lean_dec(x_77);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
x_105 = lean_ctor_get(x_81, 0);
lean_inc(x_105);
x_106 = lean_ctor_get(x_81, 1);
lean_inc(x_106);
if (lean_is_exclusive(x_81)) {
 lean_ctor_release(x_81, 0);
 lean_ctor_release(x_81, 1);
 x_107 = x_81;
} else {
 lean_dec_ref(x_81);
 x_107 = lean_box(0);
}
if (lean_is_scalar(x_107)) {
 x_108 = lean_alloc_ctor(1, 2, 0);
} else {
 x_108 = x_107;
}
lean_ctor_set(x_108, 0, x_105);
lean_ctor_set(x_108, 1, x_106);
return x_108;
}
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
lean_dec(x_77);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
x_109 = lean_ctor_get(x_78, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_78, 1);
lean_inc(x_110);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 x_111 = x_78;
} else {
 lean_dec_ref(x_78);
 x_111 = lean_box(0);
}
if (lean_is_scalar(x_111)) {
 x_112 = lean_alloc_ctor(1, 2, 0);
} else {
 x_112 = x_111;
}
lean_ctor_set(x_112, 0, x_109);
lean_ctor_set(x_112, 1, x_110);
return x_112;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkCtor___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkCtor(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkProjections___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_4);
lean_dec(x_4);
x_6 = lean_mk_projections(x_1, x_2, x_3, x_5);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addProjections_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addProjections_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addProjections_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addProjections(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_st_ref_get(x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_mk_projections(x_14, x_1, x_2, x_3);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_Lean_throwKernelException___at_Lean_Elab_Command_elabEvalUnsafe___spec__3(x_16, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_15, 0);
lean_inc(x_18);
lean_dec(x_15);
x_19 = l_Lean_setEnv___at_Lean_Elab_Term_evalExpr___spec__1(x_18, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
lean_dec(x_8);
lean_dec(x_4);
return x_19;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addProjections___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_3);
lean_dec(x_3);
x_12 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addProjections(x_1, x_2, x_11, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkAuxConstructions___lambda__1(uint8_t x_1, uint8_t x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
if (x_1 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_10);
lean_dec(x_6);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
if (x_2 == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_10);
lean_dec(x_6);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_12);
return x_16;
}
else
{
if (x_3 == 0)
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_10);
lean_dec(x_6);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_12);
return x_18;
}
else
{
lean_object* x_19; 
x_19 = l_Lean_mkNoConfusion___at___private_Lean_Elab_Inductive_0__Lean_Elab_Command_mkAuxConstructions___spec__4(x_4, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_19;
}
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkAuxConstructions(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l___private_Lean_Elab_Inductive_0__Lean_Elab_Command_mkAuxConstructions___closed__2;
lean_inc(x_12);
x_14 = l_Lean_Environment_contains(x_12, x_13);
x_15 = l_myMacro____x40_Init_Notation___hyg_6045____closed__4;
lean_inc(x_12);
x_16 = l_Lean_Environment_contains(x_12, x_15);
x_17 = l_myMacro____x40_Init_Notation___hyg_6561____closed__4;
x_18 = l_Lean_Environment_contains(x_12, x_17);
lean_inc(x_6);
lean_inc(x_2);
x_19 = l_Lean_mkRecOn___at___private_Lean_Elab_Inductive_0__Lean_Elab_Command_mkAuxConstructions___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
if (lean_obj_tag(x_19) == 0)
{
if (x_14 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_box(0);
x_22 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkAuxConstructions___lambda__1(x_14, x_16, x_18, x_1, x_21, x_2, x_3, x_4, x_5, x_6, x_7, x_20);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_19, 1);
lean_inc(x_23);
lean_dec(x_19);
lean_inc(x_6);
lean_inc(x_2);
x_24 = l_Lean_mkCasesOn___at___private_Lean_Elab_Inductive_0__Lean_Elab_Command_mkAuxConstructions___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_23);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkAuxConstructions___lambda__1(x_14, x_16, x_18, x_1, x_25, x_2, x_3, x_4, x_5, x_6, x_7, x_26);
lean_dec(x_25);
return x_27;
}
else
{
uint8_t x_28; 
lean_dec(x_6);
lean_dec(x_2);
x_28 = !lean_is_exclusive(x_24);
if (x_28 == 0)
{
return x_24;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_24, 0);
x_30 = lean_ctor_get(x_24, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_24);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
else
{
uint8_t x_32; 
lean_dec(x_6);
lean_dec(x_2);
x_32 = !lean_is_exclusive(x_19);
if (x_32 == 0)
{
return x_19;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_19, 0);
x_34 = lean_ctor_get(x_19, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_19);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkAuxConstructions___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; uint8_t x_14; uint8_t x_15; lean_object* x_16; 
x_13 = lean_unbox(x_1);
lean_dec(x_1);
x_14 = lean_unbox(x_2);
lean_dec(x_2);
x_15 = lean_unbox(x_3);
lean_dec(x_3);
x_16 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkAuxConstructions___lambda__1(x_13, x_14, x_15, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
return x_16;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkAuxConstructions___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkAuxConstructions(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_apply_3(x_2, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_setReducibilityStatus___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__1(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_st_ref_take(x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = !lean_is_exclusive(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_11, 0);
x_15 = lean_set_reducibility_status(x_14, x_1, x_2);
lean_ctor_set(x_11, 0, x_15);
x_16 = lean_st_ref_set(x_8, x_11, x_12);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_16, 0);
lean_dec(x_18);
x_19 = lean_box(0);
lean_ctor_set(x_16, 0, x_19);
return x_16;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
lean_dec(x_16);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_23 = lean_ctor_get(x_11, 0);
x_24 = lean_ctor_get(x_11, 1);
x_25 = lean_ctor_get(x_11, 2);
x_26 = lean_ctor_get(x_11, 3);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_11);
x_27 = lean_set_reducibility_status(x_23, x_1, x_2);
x_28 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_24);
lean_ctor_set(x_28, 2, x_25);
lean_ctor_set(x_28, 3, x_26);
x_29 = lean_st_ref_set(x_8, x_28, x_12);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
if (lean_is_exclusive(x_29)) {
 lean_ctor_release(x_29, 0);
 lean_ctor_release(x_29, 1);
 x_31 = x_29;
} else {
 lean_dec_ref(x_29);
 x_31 = lean_box(0);
}
x_32 = lean_box(0);
if (lean_is_scalar(x_31)) {
 x_33 = lean_alloc_ctor(0, 2, 0);
} else {
 x_33 = x_31;
}
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_30);
return x_33;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__4(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = x_3 == x_4;
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_uget(x_2, x_3);
lean_inc(x_1);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_15 = lean_apply_9(x_1, x_5, x_14, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = 1;
x_19 = x_3 + x_18;
x_3 = x_19;
x_5 = x_16;
x_12 = x_17;
goto _start;
}
else
{
uint8_t x_21; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_21 = !lean_is_exclusive(x_15);
if (x_21 == 0)
{
return x_15;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_15, 0);
x_23 = lean_ctor_get(x_15, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_15);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
else
{
lean_object* x_25; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_5);
lean_ctor_set(x_25, 1, x_12);
return x_25;
}
}
}
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_nat_dec_lt(x_4, x_5);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_array_get_size(x_3);
x_16 = lean_nat_dec_le(x_5, x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_2);
lean_ctor_set(x_17, 1, x_12);
return x_17;
}
else
{
size_t x_18; size_t x_19; lean_object* x_20; 
x_18 = lean_usize_of_nat(x_4);
x_19 = lean_usize_of_nat(x_5);
x_20 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__4(x_1, x_3, x_18, x_19, x_2, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_20;
}
}
}
}
lean_object* l_Array_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_alloc_closure((void*)(l_Array_forM___at_Lean_Meta_ToHide_fixpointStep___spec__4___lambda__1___boxed), 10, 1);
lean_closure_set(x_12, 0, x_1);
x_13 = lean_box(0);
x_14 = l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__3(x_12, x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_dec(x_9);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_13 = l_Lean_Meta_mkId(x_12, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = 1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_10);
x_17 = l_Lean_Meta_mkAuxDefinition(x_10, x_11, x_14, x_16, x_16, x_4, x_5, x_6, x_7, x_15);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; uint8_t x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = 0;
x_20 = l_Lean_setReducibilityStatus___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__1(x_10, x_19, x_2, x_3, x_4, x_5, x_6, x_7, x_18);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_20;
}
else
{
uint8_t x_21; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_21 = !lean_is_exclusive(x_17);
if (x_21 == 0)
{
return x_17;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_17, 0);
x_23 = lean_ctor_get(x_17, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_17);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
else
{
uint8_t x_25; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_25 = !lean_is_exclusive(x_13);
if (x_25 == 0)
{
return x_13;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_13, 0);
x_27 = lean_ctor_get(x_13, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_13);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___lambda__1___boxed), 8, 0);
return x_1;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_10 = l_Lean_Meta_getLocalInstances(x_5, x_6, x_7, x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_array_get_size(x_2);
x_14 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___closed__1;
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_alloc_closure((void*)(l_Array_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__2___boxed), 11, 4);
lean_closure_set(x_16, 0, x_14);
lean_closure_set(x_16, 1, x_2);
lean_closure_set(x_16, 2, x_15);
lean_closure_set(x_16, 3, x_13);
x_17 = l_Lean_Meta_withLCtx___at_Lean_Elab_Term_elabSyntheticHole___spec__1___rarg(x_1, x_11, x_16, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_17;
}
}
lean_object* l_Lean_setReducibilityStatus___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_2);
lean_dec(x_2);
x_11 = l_Lean_setReducibilityStatus___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__1(x_1, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__4(x_1, x_2, x_13, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_2);
return x_15;
}
}
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_13;
}
}
lean_object* l_Array_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Array_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__3(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = x_3 == x_4;
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_uget(x_2, x_3);
lean_inc(x_1);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_15 = lean_apply_9(x_1, x_5, x_14, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = 1;
x_19 = x_3 + x_18;
x_3 = x_19;
x_5 = x_16;
x_12 = x_17;
goto _start;
}
else
{
uint8_t x_21; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_21 = !lean_is_exclusive(x_15);
if (x_21 == 0)
{
return x_15;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_15, 0);
x_23 = lean_ctor_get(x_15, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_15);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
else
{
lean_object* x_25; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_5);
lean_ctor_set(x_25, 1, x_12);
return x_25;
}
}
}
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_nat_dec_lt(x_4, x_5);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_array_get_size(x_3);
x_16 = lean_nat_dec_le(x_5, x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_2);
lean_ctor_set(x_17, 1, x_12);
return x_17;
}
else
{
size_t x_18; size_t x_19; lean_object* x_20; 
x_18 = lean_usize_of_nat(x_4);
x_19 = lean_usize_of_nat(x_5);
x_20 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__3(x_1, x_3, x_18, x_19, x_2, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_20;
}
}
}
}
lean_object* l_Array_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_alloc_closure((void*)(l_Array_forM___at_Lean_Meta_ToHide_fixpointStep___spec__4___lambda__1___boxed), 10, 1);
lean_closure_set(x_12, 0, x_1);
x_13 = lean_box(0);
x_14 = l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__2(x_12, x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
}
lean_object* l_List_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__4(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
x_7 = lean_ctor_get_uint8(x_4, sizeof(void*)*4 + 1);
lean_dec(x_4);
x_8 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set_uint8(x_8, sizeof(void*)*1, x_7);
x_9 = l_List_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__4(x_5);
lean_ctor_set(x_1, 1, x_9);
lean_ctor_set(x_1, 0, x_8);
return x_1;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_1);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
x_13 = lean_ctor_get_uint8(x_10, sizeof(void*)*4 + 1);
lean_dec(x_10);
x_14 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set_uint8(x_14, sizeof(void*)*1, x_13);
x_15 = l_List_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__4(x_11);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__7(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = x_3 == x_4;
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_uget(x_2, x_3);
lean_inc(x_1);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_15 = lean_apply_9(x_1, x_5, x_14, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = 1;
x_19 = x_3 + x_18;
x_3 = x_19;
x_5 = x_16;
x_12 = x_17;
goto _start;
}
else
{
uint8_t x_21; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_21 = !lean_is_exclusive(x_15);
if (x_21 == 0)
{
return x_15;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_15, 0);
x_23 = lean_ctor_get(x_15, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_15);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
else
{
lean_object* x_25; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_5);
lean_ctor_set(x_25, 1, x_12);
return x_25;
}
}
}
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_nat_dec_lt(x_4, x_5);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_array_get_size(x_3);
x_16 = lean_nat_dec_le(x_5, x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_2);
lean_ctor_set(x_17, 1, x_12);
return x_17;
}
else
{
size_t x_18; size_t x_19; lean_object* x_20; 
x_18 = lean_usize_of_nat(x_4);
x_19 = lean_usize_of_nat(x_5);
x_20 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__7(x_1, x_3, x_18, x_19, x_2, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_20;
}
}
}
}
lean_object* l_Array_filterM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__5___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_3);
x_11 = lean_apply_8(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_unbox(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
uint8_t x_14; 
lean_dec(x_3);
x_14 = !lean_is_exclusive(x_11);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_11, 0);
lean_dec(x_15);
lean_ctor_set(x_11, 0, x_2);
return x_11;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_dec(x_11);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_2);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_11);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_11, 0);
lean_dec(x_19);
x_20 = lean_array_push(x_2, x_3);
lean_ctor_set(x_11, 0, x_20);
return x_11;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_11, 1);
lean_inc(x_21);
lean_dec(x_11);
x_22 = lean_array_push(x_2, x_3);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
}
}
else
{
uint8_t x_24; 
lean_dec(x_3);
lean_dec(x_2);
x_24 = !lean_is_exclusive(x_11);
if (x_24 == 0)
{
return x_11;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_11, 0);
x_26 = lean_ctor_get(x_11, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_11);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
lean_object* l_Array_filterM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_alloc_closure((void*)(l_Array_filterM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__5___lambda__1), 10, 1);
lean_closure_set(x_12, 0, x_1);
x_13 = l_Array_empty___closed__1;
x_14 = l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__6(x_12, x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
}
lean_object* l_List_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__8(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_List_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__8(x_5);
lean_ctor_set(x_1, 1, x_7);
lean_ctor_set(x_1, 0, x_6);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_List_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__8(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
lean_object* l_List_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_dec(x_1);
x_13 = 0;
x_14 = lean_unsigned_to_nat(1000u);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_15 = l_Lean_Meta_addInstance(x_11, x_13, x_14, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_1 = x_12;
x_8 = x_16;
goto _start;
}
else
{
uint8_t x_18; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_default");
return x_1;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_2 < x_1;
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_12 = x_3;
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_array_uget(x_3, x_2);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_array_uset(x_3, x_2, x_15);
x_17 = x_14;
x_18 = lean_ctor_get(x_17, 2);
lean_inc(x_18);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_19 = l_Lean_Meta_inferType(x_18, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_ctor_get(x_17, 1);
lean_inc(x_22);
x_23 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10___closed__2;
x_24 = l_Lean_Name_append(x_22, x_23);
lean_dec(x_22);
x_25 = lean_ctor_get(x_17, 3);
lean_inc(x_25);
lean_dec(x_17);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; size_t x_31; size_t x_32; lean_object* x_33; lean_object* x_34; 
x_26 = l_Lean_instInhabitedExpr;
x_27 = l_Option_get_x21___rarg___closed__4;
x_28 = lean_panic_fn(x_26, x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_20);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_24);
lean_ctor_set(x_30, 1, x_29);
x_31 = 1;
x_32 = x_2 + x_31;
x_33 = x_30;
x_34 = lean_array_uset(x_16, x_2, x_33);
x_2 = x_32;
x_3 = x_34;
x_10 = x_21;
goto _start;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; size_t x_39; size_t x_40; lean_object* x_41; lean_object* x_42; 
x_36 = lean_ctor_get(x_25, 0);
lean_inc(x_36);
lean_dec(x_25);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_20);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_24);
lean_ctor_set(x_38, 1, x_37);
x_39 = 1;
x_40 = x_2 + x_39;
x_41 = x_38;
x_42 = lean_array_uset(x_16, x_2, x_41);
x_2 = x_40;
x_3 = x_42;
x_10 = x_21;
goto _start;
}
}
else
{
uint8_t x_44; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_44 = !lean_is_exclusive(x_19);
if (x_44 == 0)
{
return x_19;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_19, 0);
x_46 = lean_ctor_get(x_19, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_19);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_1, 2);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = l_Lean_Elab_addAuxDeclarationRanges___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__17(x_10, x_11, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_11);
return x_12;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("', it is equal to structure constructor name");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__2___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_2, 2);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 9);
x_12 = lean_ctor_get(x_11, 3);
x_13 = lean_name_eq(x_10, x_12);
lean_dec(x_10);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_box(0);
x_15 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1(x_2, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
lean_dec(x_3);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_16 = lean_ctor_get(x_2, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_2, 3);
lean_inc(x_17);
lean_dec(x_2);
x_18 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_18, 0, x_17);
x_19 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__2___closed__1;
x_20 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
x_21 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__2___closed__2;
x_22 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
x_23 = l_Lean_throwErrorAt___at_Lean_Elab_Term_quoteAutoTactic___spec__4(x_16, x_22, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_16);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
return x_23;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_23, 0);
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_23);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
uint8_t l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__3(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = l_Lean_Elab_Command_StructFieldInfo_isFromParent(x_1);
if (x_2 == 0)
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
else
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_1, 2);
x_10 = l_Lean_Elab_Term_getFVarLocalDecl_x21(x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = l_Lean_Elab_Command_StructFieldInfo_isSubobject(x_1);
if (x_13 == 0)
{
uint8_t x_14; lean_object* x_15; 
lean_dec(x_12);
x_14 = 0;
x_15 = lean_box(x_14);
lean_ctor_set(x_10, 0, x_15);
return x_10;
}
else
{
uint8_t x_16; uint8_t x_17; lean_object* x_18; 
x_16 = l_Lean_LocalDecl_binderInfo(x_12);
lean_dec(x_12);
x_17 = l_Lean_BinderInfo_isInstImplicit(x_16);
x_18 = lean_box(x_17);
lean_ctor_set(x_10, 0, x_18);
return x_10;
}
}
else
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_10, 0);
x_20 = lean_ctor_get(x_10, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_10);
x_21 = l_Lean_Elab_Command_StructFieldInfo_isSubobject(x_1);
if (x_21 == 0)
{
uint8_t x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_19);
x_22 = 0;
x_23 = lean_box(x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_20);
return x_24;
}
else
{
uint8_t x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; 
x_25 = l_Lean_LocalDecl_binderInfo(x_19);
lean_dec(x_19);
x_26 = l_Lean_BinderInfo_isInstImplicit(x_25);
x_27 = lean_box(x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_20);
return x_28;
}
}
}
else
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_10);
if (x_29 == 0)
{
return x_10;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_10, 0);
x_31 = lean_ctor_get(x_10, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_10);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
uint8_t l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 3);
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
uint8_t x_4; 
x_4 = 1;
return x_4;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; lean_object* x_5; 
x_3 = l_Lean_Expr_fvarId_x21(x_2);
x_4 = 1;
x_5 = l_Lean_LocalContext_setBinderInfo(x_1, x_3, x_4);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__7(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_Lean_Elab_Command_StructFieldInfo_isFromParent(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_2, 2);
x_5 = l_Lean_Expr_fvarId_x21(x_4);
x_6 = 0;
x_7 = l_Lean_LocalContext_setBinderInfo(x_1, x_5, x_6);
return x_7;
}
else
{
return x_1;
}
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__3___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__4___boxed), 8, 0);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__5___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__6___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__7___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_initFn____x40_Lean_Elab_Util___hyg_1077____closed__1;
x_2 = l_myMacro____x40_Init_NotationExtra___hyg_5637____closed__17;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("type: ");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__7;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_15 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParam(x_7, x_1, x_2, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_183 = lean_ctor_get(x_12, 0);
lean_inc(x_183);
x_184 = lean_ctor_get(x_12, 1);
lean_inc(x_184);
x_185 = lean_ctor_get(x_12, 2);
lean_inc(x_185);
x_186 = lean_ctor_get(x_12, 3);
lean_inc(x_186);
x_187 = lean_ctor_get(x_12, 4);
lean_inc(x_187);
x_188 = lean_ctor_get(x_12, 5);
lean_inc(x_188);
x_189 = lean_ctor_get(x_12, 6);
lean_inc(x_189);
x_190 = lean_ctor_get(x_12, 7);
lean_inc(x_190);
x_191 = l_Lean_replaceRef(x_4, x_186);
lean_dec(x_186);
x_192 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_192, 0, x_183);
lean_ctor_set(x_192, 1, x_184);
lean_ctor_set(x_192, 2, x_185);
lean_ctor_set(x_192, 3, x_191);
lean_ctor_set(x_192, 4, x_187);
lean_ctor_set(x_192, 5, x_188);
lean_ctor_set(x_192, 6, x_189);
lean_ctor_set(x_192, 7, x_190);
if (x_5 == 0)
{
lean_object* x_193; 
lean_inc(x_13);
lean_inc(x_192);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_8);
lean_inc(x_6);
x_193 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse(x_6, x_8, x_9, x_10, x_11, x_192, x_13, x_17);
if (lean_obj_tag(x_193) == 0)
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; 
x_194 = lean_ctor_get(x_193, 0);
lean_inc(x_194);
x_195 = lean_ctor_get(x_193, 1);
lean_inc(x_195);
lean_dec(x_193);
lean_inc(x_13);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_8);
x_196 = l_Lean_Elab_Command_checkResultingUniverse(x_194, x_8, x_9, x_10, x_11, x_192, x_13, x_195);
if (lean_obj_tag(x_196) == 0)
{
lean_object* x_197; 
x_197 = lean_ctor_get(x_196, 1);
lean_inc(x_197);
lean_dec(x_196);
x_18 = x_6;
x_19 = x_197;
goto block_182;
}
else
{
uint8_t x_198; 
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
x_198 = !lean_is_exclusive(x_196);
if (x_198 == 0)
{
return x_196;
}
else
{
lean_object* x_199; lean_object* x_200; lean_object* x_201; 
x_199 = lean_ctor_get(x_196, 0);
x_200 = lean_ctor_get(x_196, 1);
lean_inc(x_200);
lean_inc(x_199);
lean_dec(x_196);
x_201 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_201, 0, x_199);
lean_ctor_set(x_201, 1, x_200);
return x_201;
}
}
}
else
{
uint8_t x_202; 
lean_dec(x_192);
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
x_202 = !lean_is_exclusive(x_193);
if (x_202 == 0)
{
return x_193;
}
else
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; 
x_203 = lean_ctor_get(x_193, 0);
x_204 = lean_ctor_get(x_193, 1);
lean_inc(x_204);
lean_inc(x_203);
lean_dec(x_193);
x_205 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_205, 0, x_203);
lean_ctor_set(x_205, 1, x_204);
return x_205;
}
}
}
else
{
lean_object* x_206; 
lean_inc(x_13);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_206 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse(x_16, x_6, x_8, x_9, x_10, x_11, x_192, x_13, x_17);
if (lean_obj_tag(x_206) == 0)
{
lean_object* x_207; lean_object* x_208; 
x_207 = lean_ctor_get(x_206, 0);
lean_inc(x_207);
x_208 = lean_ctor_get(x_206, 1);
lean_inc(x_208);
lean_dec(x_206);
x_18 = x_207;
x_19 = x_208;
goto block_182;
}
else
{
uint8_t x_209; 
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
x_209 = !lean_is_exclusive(x_206);
if (x_209 == 0)
{
return x_206;
}
else
{
lean_object* x_210; lean_object* x_211; lean_object* x_212; 
x_210 = lean_ctor_get(x_206, 0);
x_211 = lean_ctor_get(x_206, 1);
lean_inc(x_211);
lean_inc(x_210);
lean_dec(x_206);
x_212 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_212, 0, x_210);
lean_ctor_set(x_212, 1, x_211);
return x_212;
}
}
}
block_182:
{
lean_object* x_20; uint8_t x_159; lean_object* x_160; lean_object* x_170; lean_object* x_171; lean_object* x_172; uint8_t x_173; 
x_170 = lean_st_ref_get(x_13, x_19);
x_171 = lean_ctor_get(x_170, 0);
lean_inc(x_171);
x_172 = lean_ctor_get(x_171, 3);
lean_inc(x_172);
lean_dec(x_171);
x_173 = lean_ctor_get_uint8(x_172, sizeof(void*)*1);
lean_dec(x_172);
if (x_173 == 0)
{
lean_object* x_174; uint8_t x_175; 
x_174 = lean_ctor_get(x_170, 1);
lean_inc(x_174);
lean_dec(x_170);
x_175 = 0;
x_159 = x_175;
x_160 = x_174;
goto block_169;
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; uint8_t x_181; 
x_176 = lean_ctor_get(x_170, 1);
lean_inc(x_176);
lean_dec(x_170);
x_177 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__6;
x_178 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(x_177, x_8, x_9, x_10, x_11, x_12, x_13, x_176);
x_179 = lean_ctor_get(x_178, 0);
lean_inc(x_179);
x_180 = lean_ctor_get(x_178, 1);
lean_inc(x_180);
lean_dec(x_178);
x_181 = lean_unbox(x_179);
lean_dec(x_179);
x_159 = x_181;
x_160 = x_180;
goto block_169;
}
block_158:
{
lean_object* x_21; 
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_18);
x_21 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure(x_18, x_7, x_1, x_16, x_8, x_9, x_10, x_11, x_12, x_13, x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_ctor_get(x_3, 2);
lean_inc(x_24);
x_25 = lean_ctor_get(x_3, 3);
lean_inc(x_25);
x_26 = l_Lean_Elab_sortDeclLevelParams(x_24, x_25, x_22);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_7);
lean_dec(x_3);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_28, 0, x_27);
x_29 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_29, 0, x_28);
x_30 = !lean_is_exclusive(x_12);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_12, 3);
x_32 = l_Lean_replaceRef(x_4, x_31);
lean_dec(x_31);
lean_ctor_set(x_12, 3, x_32);
x_33 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1(x_29, x_8, x_9, x_10, x_11, x_12, x_13, x_23);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_34 = lean_ctor_get(x_12, 0);
x_35 = lean_ctor_get(x_12, 1);
x_36 = lean_ctor_get(x_12, 2);
x_37 = lean_ctor_get(x_12, 3);
x_38 = lean_ctor_get(x_12, 4);
x_39 = lean_ctor_get(x_12, 5);
x_40 = lean_ctor_get(x_12, 6);
x_41 = lean_ctor_get(x_12, 7);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_12);
x_42 = l_Lean_replaceRef(x_4, x_37);
lean_dec(x_37);
x_43 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_43, 0, x_34);
lean_ctor_set(x_43, 1, x_35);
lean_ctor_set(x_43, 2, x_36);
lean_ctor_set(x_43, 3, x_42);
lean_ctor_set(x_43, 4, x_38);
lean_ctor_set(x_43, 5, x_39);
lean_ctor_set(x_43, 6, x_40);
lean_ctor_set(x_43, 7, x_41);
x_44 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1(x_29, x_8, x_9, x_10, x_11, x_43, x_13, x_23);
lean_dec(x_13);
lean_dec(x_43);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_44;
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_26, 0);
lean_inc(x_45);
lean_dec(x_26);
x_46 = l_Array_append___rarg(x_7, x_1);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_3);
x_47 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkCtor(x_3, x_45, x_46, x_16, x_8, x_9, x_10, x_11, x_12, x_13, x_23);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
lean_inc(x_10);
lean_inc(x_46);
x_50 = l_Lean_Meta_mkForallFVars(x_46, x_18, x_10, x_11, x_12, x_13, x_49);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_53 = l_Lean_Meta_instantiateMVars(x_51, x_10, x_11, x_12, x_13, x_52);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; lean_object* x_64; lean_object* x_65; 
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = lean_ctor_get(x_3, 4);
lean_inc(x_56);
x_57 = lean_box(0);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_48);
lean_ctor_set(x_58, 1, x_57);
lean_inc(x_56);
x_59 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_59, 0, x_56);
lean_ctor_set(x_59, 1, x_54);
lean_ctor_set(x_59, 2, x_58);
x_60 = lean_array_get_size(x_46);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_57);
x_62 = lean_ctor_get(x_3, 1);
lean_inc(x_62);
x_63 = lean_ctor_get_uint8(x_62, sizeof(void*)*2 + 3);
lean_inc(x_60);
x_64 = lean_alloc_ctor(6, 3, 1);
lean_ctor_set(x_64, 0, x_45);
lean_ctor_set(x_64, 1, x_60);
lean_ctor_set(x_64, 2, x_61);
lean_ctor_set_uint8(x_64, sizeof(void*)*3, x_63);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_64);
x_65 = l_Lean_Elab_Term_ensureNoUnassignedMVars(x_64, x_8, x_9, x_10, x_11, x_12, x_13, x_55);
if (lean_obj_tag(x_65) == 0)
{
lean_object* x_66; lean_object* x_67; 
x_66 = lean_ctor_get(x_65, 1);
lean_inc(x_66);
lean_dec(x_65);
lean_inc(x_12);
lean_inc(x_8);
x_67 = l_Lean_addDecl___at_Lean_Elab_Term_evalExpr___spec__3(x_64, x_8, x_9, x_10, x_11, x_12, x_13, x_66);
lean_dec(x_64);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; uint8_t x_75; lean_object* x_76; 
x_68 = lean_ctor_get(x_67, 1);
lean_inc(x_68);
lean_dec(x_67);
x_69 = lean_array_get_size(x_16);
x_70 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__1;
x_71 = lean_unsigned_to_nat(0u);
x_72 = l_Array_filter___rarg(x_70, x_16, x_71, x_69);
x_73 = lean_array_to_list(lean_box(0), x_72);
x_74 = l_List_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__4(x_73);
x_75 = lean_ctor_get_uint8(x_3, sizeof(void*)*11);
lean_dec(x_3);
lean_inc(x_12);
lean_inc(x_8);
lean_inc(x_56);
x_76 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addProjections(x_56, x_74, x_75, x_8, x_9, x_10, x_11, x_12, x_13, x_68);
if (lean_obj_tag(x_76) == 0)
{
lean_object* x_77; lean_object* x_78; 
x_77 = lean_ctor_get(x_76, 1);
lean_inc(x_77);
lean_dec(x_76);
lean_inc(x_12);
lean_inc(x_8);
x_78 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkAuxConstructions(x_56, x_8, x_9, x_10, x_11, x_12, x_13, x_77);
if (lean_obj_tag(x_78) == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_78, 1);
lean_inc(x_79);
lean_dec(x_78);
x_80 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__2;
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_81 = l_Array_filterM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__5(x_80, x_16, x_71, x_69, x_8, x_9, x_10, x_11, x_12, x_13, x_79);
if (lean_obj_tag(x_81) == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; uint8_t x_87; lean_object* x_88; 
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_81, 1);
lean_inc(x_83);
lean_dec(x_81);
x_84 = lean_array_to_list(lean_box(0), x_82);
x_85 = l_List_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__8(x_84);
x_86 = lean_ctor_get(x_62, 1);
lean_inc(x_86);
lean_dec(x_62);
x_87 = 0;
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_8);
x_88 = l_Lean_Elab_Term_applyAttributesAt(x_56, x_86, x_87, x_8, x_9, x_10, x_11, x_12, x_13, x_83);
lean_dec(x_86);
if (lean_obj_tag(x_88) == 0)
{
lean_object* x_89; lean_object* x_90; 
x_89 = lean_ctor_get(x_88, 1);
lean_inc(x_89);
lean_dec(x_88);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_90 = l_List_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__9(x_85, x_8, x_9, x_10, x_11, x_12, x_13, x_89);
if (lean_obj_tag(x_90) == 0)
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; size_t x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_91 = lean_ctor_get(x_90, 1);
lean_inc(x_91);
lean_dec(x_90);
x_92 = lean_ctor_get(x_10, 1);
lean_inc(x_92);
x_93 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__3;
x_94 = l_Array_filter___rarg(x_93, x_16, x_71, x_69);
x_95 = lean_array_get_size(x_94);
x_96 = lean_usize_of_nat(x_95);
lean_dec(x_95);
x_97 = x_94;
x_98 = lean_box_usize(x_96);
x_99 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___boxed__const__1;
x_100 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10___boxed), 10, 3);
lean_closure_set(x_100, 0, x_98);
lean_closure_set(x_100, 1, x_99);
lean_closure_set(x_100, 2, x_97);
x_101 = x_100;
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_102 = lean_apply_7(x_101, x_8, x_9, x_10, x_11, x_12, x_13, x_91);
if (lean_obj_tag(x_102) == 0)
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_103 = lean_ctor_get(x_102, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_102, 1);
lean_inc(x_104);
lean_dec(x_102);
x_105 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__4;
x_106 = l_Array_foldlMUnsafe___at_Array_foldl___spec__1___rarg(x_105, x_92, x_46, x_71, x_60);
lean_dec(x_60);
lean_dec(x_46);
x_107 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__5;
x_108 = l_Array_foldlMUnsafe___at_Array_foldl___spec__1___rarg(x_107, x_106, x_16, x_71, x_69);
lean_dec(x_69);
lean_dec(x_16);
x_109 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults(x_108, x_103, x_8, x_9, x_10, x_11, x_12, x_13, x_104);
return x_109;
}
else
{
uint8_t x_110; 
lean_dec(x_92);
lean_dec(x_69);
lean_dec(x_60);
lean_dec(x_46);
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_110 = !lean_is_exclusive(x_102);
if (x_110 == 0)
{
return x_102;
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_111 = lean_ctor_get(x_102, 0);
x_112 = lean_ctor_get(x_102, 1);
lean_inc(x_112);
lean_inc(x_111);
lean_dec(x_102);
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_111);
lean_ctor_set(x_113, 1, x_112);
return x_113;
}
}
}
else
{
uint8_t x_114; 
lean_dec(x_69);
lean_dec(x_60);
lean_dec(x_46);
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_114 = !lean_is_exclusive(x_90);
if (x_114 == 0)
{
return x_90;
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; 
x_115 = lean_ctor_get(x_90, 0);
x_116 = lean_ctor_get(x_90, 1);
lean_inc(x_116);
lean_inc(x_115);
lean_dec(x_90);
x_117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_117, 0, x_115);
lean_ctor_set(x_117, 1, x_116);
return x_117;
}
}
}
else
{
uint8_t x_118; 
lean_dec(x_85);
lean_dec(x_69);
lean_dec(x_60);
lean_dec(x_46);
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_118 = !lean_is_exclusive(x_88);
if (x_118 == 0)
{
return x_88;
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_119 = lean_ctor_get(x_88, 0);
x_120 = lean_ctor_get(x_88, 1);
lean_inc(x_120);
lean_inc(x_119);
lean_dec(x_88);
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_119);
lean_ctor_set(x_121, 1, x_120);
return x_121;
}
}
}
else
{
uint8_t x_122; 
lean_dec(x_69);
lean_dec(x_62);
lean_dec(x_60);
lean_dec(x_56);
lean_dec(x_46);
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_122 = !lean_is_exclusive(x_81);
if (x_122 == 0)
{
return x_81;
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_123 = lean_ctor_get(x_81, 0);
x_124 = lean_ctor_get(x_81, 1);
lean_inc(x_124);
lean_inc(x_123);
lean_dec(x_81);
x_125 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_125, 0, x_123);
lean_ctor_set(x_125, 1, x_124);
return x_125;
}
}
}
else
{
uint8_t x_126; 
lean_dec(x_69);
lean_dec(x_62);
lean_dec(x_60);
lean_dec(x_56);
lean_dec(x_46);
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_126 = !lean_is_exclusive(x_78);
if (x_126 == 0)
{
return x_78;
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_127 = lean_ctor_get(x_78, 0);
x_128 = lean_ctor_get(x_78, 1);
lean_inc(x_128);
lean_inc(x_127);
lean_dec(x_78);
x_129 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_129, 0, x_127);
lean_ctor_set(x_129, 1, x_128);
return x_129;
}
}
}
else
{
uint8_t x_130; 
lean_dec(x_69);
lean_dec(x_62);
lean_dec(x_60);
lean_dec(x_56);
lean_dec(x_46);
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_130 = !lean_is_exclusive(x_76);
if (x_130 == 0)
{
return x_76;
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_131 = lean_ctor_get(x_76, 0);
x_132 = lean_ctor_get(x_76, 1);
lean_inc(x_132);
lean_inc(x_131);
lean_dec(x_76);
x_133 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_133, 0, x_131);
lean_ctor_set(x_133, 1, x_132);
return x_133;
}
}
}
else
{
uint8_t x_134; 
lean_dec(x_62);
lean_dec(x_60);
lean_dec(x_56);
lean_dec(x_46);
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
x_134 = !lean_is_exclusive(x_67);
if (x_134 == 0)
{
return x_67;
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_135 = lean_ctor_get(x_67, 0);
x_136 = lean_ctor_get(x_67, 1);
lean_inc(x_136);
lean_inc(x_135);
lean_dec(x_67);
x_137 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_137, 0, x_135);
lean_ctor_set(x_137, 1, x_136);
return x_137;
}
}
}
else
{
uint8_t x_138; 
lean_dec(x_64);
lean_dec(x_62);
lean_dec(x_60);
lean_dec(x_56);
lean_dec(x_46);
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
x_138 = !lean_is_exclusive(x_65);
if (x_138 == 0)
{
return x_65;
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_139 = lean_ctor_get(x_65, 0);
x_140 = lean_ctor_get(x_65, 1);
lean_inc(x_140);
lean_inc(x_139);
lean_dec(x_65);
x_141 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_141, 0, x_139);
lean_ctor_set(x_141, 1, x_140);
return x_141;
}
}
}
else
{
uint8_t x_142; 
lean_dec(x_48);
lean_dec(x_46);
lean_dec(x_45);
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
x_142 = !lean_is_exclusive(x_53);
if (x_142 == 0)
{
return x_53;
}
else
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; 
x_143 = lean_ctor_get(x_53, 0);
x_144 = lean_ctor_get(x_53, 1);
lean_inc(x_144);
lean_inc(x_143);
lean_dec(x_53);
x_145 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_145, 0, x_143);
lean_ctor_set(x_145, 1, x_144);
return x_145;
}
}
}
else
{
uint8_t x_146; 
lean_dec(x_48);
lean_dec(x_46);
lean_dec(x_45);
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
x_146 = !lean_is_exclusive(x_50);
if (x_146 == 0)
{
return x_50;
}
else
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; 
x_147 = lean_ctor_get(x_50, 0);
x_148 = lean_ctor_get(x_50, 1);
lean_inc(x_148);
lean_inc(x_147);
lean_dec(x_50);
x_149 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_149, 0, x_147);
lean_ctor_set(x_149, 1, x_148);
return x_149;
}
}
}
else
{
uint8_t x_150; 
lean_dec(x_46);
lean_dec(x_45);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
x_150 = !lean_is_exclusive(x_47);
if (x_150 == 0)
{
return x_47;
}
else
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_151 = lean_ctor_get(x_47, 0);
x_152 = lean_ctor_get(x_47, 1);
lean_inc(x_152);
lean_inc(x_151);
lean_dec(x_47);
x_153 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_153, 0, x_151);
lean_ctor_set(x_153, 1, x_152);
return x_153;
}
}
}
}
else
{
uint8_t x_154; 
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
x_154 = !lean_is_exclusive(x_21);
if (x_154 == 0)
{
return x_21;
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; 
x_155 = lean_ctor_get(x_21, 0);
x_156 = lean_ctor_get(x_21, 1);
lean_inc(x_156);
lean_inc(x_155);
lean_dec(x_21);
x_157 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_157, 0, x_155);
lean_ctor_set(x_157, 1, x_156);
return x_157;
}
}
}
block_169:
{
if (x_159 == 0)
{
x_20 = x_160;
goto block_158;
}
else
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; 
lean_inc(x_18);
x_161 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_161, 0, x_18);
x_162 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__8;
x_163 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_163, 0, x_162);
lean_ctor_set(x_163, 1, x_161);
x_164 = l_Lean_KernelException_toMessageData___closed__15;
x_165 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_165, 0, x_163);
lean_ctor_set(x_165, 1, x_164);
x_166 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__6;
x_167 = l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(x_166, x_165, x_8, x_9, x_10, x_11, x_12, x_13, x_160);
x_168 = lean_ctor_get(x_167, 1);
lean_inc(x_168);
lean_dec(x_167);
x_20 = x_168;
goto block_158;
}
}
}
}
else
{
uint8_t x_213; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
x_213 = !lean_is_exclusive(x_15);
if (x_213 == 0)
{
return x_15;
}
else
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; 
x_214 = lean_ctor_get(x_15, 0);
x_215 = lean_ctor_get(x_15, 1);
lean_inc(x_215);
lean_inc(x_214);
lean_dec(x_15);
x_216 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_216, 0, x_214);
lean_ctor_set(x_216, 1, x_215);
return x_216;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; lean_object* x_14; 
x_12 = 0;
x_13 = lean_box(0);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_14 = l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(x_12, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_5);
lean_inc(x_1);
x_16 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse(x_1, x_5, x_6, x_7, x_8, x_9, x_10, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_5);
x_19 = l_Lean_Elab_Command_shouldInferResultUniverse(x_17, x_5, x_6, x_7, x_8, x_9, x_10, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_ctor_get(x_2, 5);
lean_inc(x_22);
x_23 = lean_ctor_get(x_2, 6);
lean_inc(x_23);
lean_inc(x_4);
lean_inc(x_23);
x_24 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___boxed), 14, 6);
lean_closure_set(x_24, 0, x_23);
lean_closure_set(x_24, 1, x_4);
lean_closure_set(x_24, 2, x_2);
lean_closure_set(x_24, 3, x_3);
lean_closure_set(x_24, 4, x_20);
lean_closure_set(x_24, 5, x_1);
x_25 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed___rarg(x_22, x_23, x_4, x_24, x_5, x_6, x_7, x_8, x_9, x_10, x_21);
lean_dec(x_4);
lean_dec(x_23);
lean_dec(x_22);
return x_25;
}
else
{
uint8_t x_26; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_19);
if (x_26 == 0)
{
return x_19;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_19, 0);
x_28 = lean_ctor_get(x_19, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_19);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
uint8_t x_30; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_30 = !lean_is_exclusive(x_16);
if (x_30 == 0)
{
return x_16;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_16, 0);
x_32 = lean_ctor_get(x_16, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_16);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
else
{
uint8_t x_34; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_14);
if (x_34 == 0)
{
return x_14;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_14, 0);
x_36 = lean_ctor_get(x_14, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_14);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__9), 11, 3);
lean_closure_set(x_13, 0, x_1);
lean_closure_set(x_13, 1, x_2);
lean_closure_set(x_13, 2, x_3);
x_14 = lean_unsigned_to_nat(0u);
x_15 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg(x_4, x_14, x_5, x_13, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_15;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
lean_inc(x_12);
lean_inc(x_1);
x_13 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__10), 12, 4);
lean_closure_set(x_13, 0, x_2);
lean_closure_set(x_13, 1, x_1);
lean_closure_set(x_13, 2, x_12);
lean_closure_set(x_13, 3, x_3);
x_14 = !lean_is_exclusive(x_9);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_9, 3);
x_16 = l_Lean_replaceRef(x_12, x_15);
lean_dec(x_15);
lean_dec(x_12);
lean_ctor_set(x_9, 3, x_16);
x_17 = lean_unsigned_to_nat(0u);
x_18 = l_Array_empty___closed__1;
x_19 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg(x_1, x_17, x_18, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_20 = lean_ctor_get(x_9, 0);
x_21 = lean_ctor_get(x_9, 1);
x_22 = lean_ctor_get(x_9, 2);
x_23 = lean_ctor_get(x_9, 3);
x_24 = lean_ctor_get(x_9, 4);
x_25 = lean_ctor_get(x_9, 5);
x_26 = lean_ctor_get(x_9, 6);
x_27 = lean_ctor_get(x_9, 7);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_9);
x_28 = l_Lean_replaceRef(x_12, x_23);
lean_dec(x_23);
lean_dec(x_12);
x_29 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_29, 0, x_20);
lean_ctor_set(x_29, 1, x_21);
lean_ctor_set(x_29, 2, x_22);
lean_ctor_set(x_29, 3, x_28);
lean_ctor_set(x_29, 4, x_24);
lean_ctor_set(x_29, 5, x_25);
lean_ctor_set(x_29, 6, x_26);
lean_ctor_set(x_29, 7, x_27);
x_30 = lean_unsigned_to_nat(0u);
x_31 = l_Array_empty___closed__1;
x_32 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg(x_1, x_30, x_31, x_13, x_5, x_6, x_7, x_8, x_29, x_10, x_11);
return x_32;
}
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("expected Type");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__2___boxed), 9, 1);
lean_closure_set(x_9, 0, x_1);
x_10 = lean_ctor_get(x_1, 10);
lean_inc(x_10);
x_11 = lean_array_get_size(x_10);
x_12 = lean_unsigned_to_nat(0u);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_13 = l_Array_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__1(x_9, x_10, x_12, x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_11);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_ctor_get(x_1, 8);
lean_inc(x_15);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_15);
x_16 = l_Lean_Elab_Term_elabType(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_validStructType(x_17);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_1);
x_20 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__3;
x_21 = l_Lean_throwErrorAt___at_Lean_Elab_Term_quoteAutoTactic___spec__4(x_15, x_20, x_2, x_3, x_4, x_5, x_6, x_7, x_18);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_15);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
return x_21;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_21);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
else
{
lean_object* x_26; lean_object* x_27; 
lean_dec(x_15);
x_26 = lean_box(0);
x_27 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__11(x_1, x_17, x_10, x_26, x_2, x_3, x_4, x_5, x_6, x_7, x_18);
return x_27;
}
}
else
{
uint8_t x_28; 
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_28 = !lean_is_exclusive(x_16);
if (x_28 == 0)
{
return x_16;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_16, 0);
x_30 = lean_ctor_get(x_16, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_16);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
uint8_t x_32; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_13);
if (x_32 == 0)
{
return x_13;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_13, 0);
x_34 = lean_ctor_get(x_13, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_13);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__3(x_1, x_2, x_13, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_2);
return x_15;
}
}
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_13;
}
}
lean_object* l_Array_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Array_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_12;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__7(x_1, x_2, x_13, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_2);
return x_15;
}
}
lean_object* l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Array_foldlMUnsafe___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_13;
}
}
lean_object* l_Array_filterM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Array_filterM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_12;
}
}
lean_object* l_List_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_List_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__9(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10(x_11, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__3___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__3(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__5___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__5(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__6___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__6(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__7___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__7(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; lean_object* x_16; 
x_15 = lean_unbox(x_5);
lean_dec(x_5);
x_16 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8(x_1, x_2, x_3, x_4, x_15, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_4);
lean_dec(x_1);
return x_16;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__11(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
return x_12;
}
}
lean_object* l_Lean_Elab_Command_elabStructure_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_3(x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_elabStructure_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabStructure_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_7, x_8);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_dec_eq(x_7, x_10);
lean_dec(x_7);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = l_Lean_Elab_Command_checkValidInductiveModifier___rarg___lambda__1___closed__3;
x_13 = l_Lean_throwError___at_Lean_Elab_Command_elabEnd___spec__1(x_12, x_3, x_4, x_5);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_14 = l_Lean_Elab_instInhabitedAttribute;
x_15 = lean_array_get(x_14, x_6, x_8);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_Lean_initFn____x40_Lean_Class___hyg_643____closed__1;
x_18 = lean_name_eq(x_16, x_17);
lean_dec(x_16);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = l_Lean_Elab_Command_checkValidInductiveModifier___rarg___lambda__1___closed__3;
x_20 = l_Lean_throwError___at_Lean_Elab_Command_elabEnd___spec__1(x_19, x_3, x_4, x_5);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_3);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_5);
return x_22;
}
}
}
else
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_7);
lean_dec(x_3);
x_23 = lean_box(0);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_5);
return x_24;
}
}
}
lean_object* l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_box(0);
x_8 = l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1___lambda__1(x_1, x_7, x_3, x_4, x_5);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = l_Lean_Elab_Command_checkValidInductiveModifier___rarg___lambda__2___closed__3;
x_10 = l_Lean_throwError___at_Lean_Elab_Command_elabExport___spec__6(x_9, x_3, x_4, x_5);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_10);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
lean_object* l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_box(0);
x_7 = l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1___lambda__2(x_1, x_6, x_2, x_3, x_4);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = l_Lean_Elab_Command_checkValidInductiveModifier___rarg___closed__3;
x_9 = l_Lean_throwError___at_Lean_Elab_Command_elabExport___spec__6(x_8, x_2, x_3, x_4);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
return x_9;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_9);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Command_elabStructure___spec__3(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_2 < x_1;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
x_8 = x_3;
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_6);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_array_uget(x_3, x_2);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_array_uset(x_3, x_2, x_11);
x_13 = x_10;
x_14 = l_Lean_Syntax_getId(x_13);
lean_inc(x_4);
x_15 = l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_elabDeriving___spec__1(x_14, x_4, x_5, x_6);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; lean_object* x_21; lean_object* x_22; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_13);
lean_ctor_set(x_18, 1, x_16);
x_19 = 1;
x_20 = x_2 + x_19;
x_21 = x_18;
x_22 = lean_array_uset(x_12, x_2, x_21);
x_2 = x_20;
x_3 = x_22;
x_6 = x_17;
goto _start;
}
else
{
uint8_t x_24; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_4);
x_24 = !lean_is_exclusive(x_15);
if (x_24 == 0)
{
return x_15;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_15, 0);
x_26 = lean_ctor_get(x_15, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_15);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_getOptDerivingClasses___at_Lean_Elab_Command_elabStructure___spec__2___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_getOptDerivingClasses___at_Lean_Elab_Command_elabStructure___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = l_Lean_Syntax_isNone(x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; size_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Lean_Syntax_getArg(x_1, x_6);
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Lean_Syntax_getArg(x_7, x_8);
lean_dec(x_7);
x_10 = l_Lean_Syntax_getSepArgs(x_9);
lean_dec(x_9);
x_11 = lean_array_get_size(x_10);
x_12 = lean_usize_of_nat(x_11);
lean_dec(x_11);
x_13 = x_10;
x_14 = lean_box_usize(x_12);
x_15 = l_Lean_Elab_getOptDerivingClasses___at_Lean_Elab_Command_elabStructure___spec__2___boxed__const__1;
x_16 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_Command_elabStructure___spec__3___boxed), 6, 3);
lean_closure_set(x_16, 0, x_14);
lean_closure_set(x_16, 1, x_15);
lean_closure_set(x_16, 2, x_13);
x_17 = x_16;
x_18 = lean_apply_3(x_17, x_2, x_3, x_4);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_3);
lean_dec(x_2);
x_19 = l_Array_empty___closed__1;
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_4);
return x_20;
}
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabStructure___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
lean_object* l_Lean_Elab_mkDeclName___at_Lean_Elab_Command_elabStructure___spec__5___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; lean_object* x_14; 
lean_inc(x_2);
x_12 = l_Lean_Name_append(x_1, x_2);
x_13 = lean_ctor_get_uint8(x_3, sizeof(void*)*2);
lean_inc(x_5);
x_14 = l_Lean_Elab_applyVisibility___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__13(x_13, x_12, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
x_15 = lean_box(x_13);
if (lean_obj_tag(x_15) == 1)
{
if (lean_obj_tag(x_1) == 1)
{
uint8_t x_16; 
lean_dec(x_5);
x_16 = !lean_is_exclusive(x_14);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_14, 0);
x_18 = lean_ctor_get(x_1, 1);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_box(0);
x_20 = lean_name_mk_string(x_19, x_18);
x_21 = l_Lean_Name_append(x_20, x_2);
lean_dec(x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_17);
lean_ctor_set(x_22, 1, x_21);
lean_ctor_set(x_14, 0, x_22);
return x_14;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_23 = lean_ctor_get(x_14, 0);
x_24 = lean_ctor_get(x_14, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_14);
x_25 = lean_ctor_get(x_1, 1);
lean_inc(x_25);
lean_dec(x_1);
x_26 = lean_box(0);
x_27 = lean_name_mk_string(x_26, x_25);
x_28 = l_Lean_Name_append(x_27, x_2);
lean_dec(x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_23);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_24);
return x_30;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_2);
lean_dec(x_1);
x_31 = lean_ctor_get(x_14, 1);
lean_inc(x_31);
lean_dec(x_14);
x_32 = l_Lean_Elab_mkDeclName___rarg___lambda__1___closed__3;
x_33 = l_Lean_throwError___at_Lean_Elab_Command_elabStructure___spec__6(x_32, x_5, x_6, x_7, x_8, x_9, x_10, x_31);
return x_33;
}
}
else
{
uint8_t x_34; 
lean_dec(x_15);
lean_dec(x_5);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_14);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_14, 0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_2);
lean_ctor_set(x_14, 0, x_36);
return x_14;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_37 = lean_ctor_get(x_14, 0);
x_38 = lean_ctor_get(x_14, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_14);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_2);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
return x_40;
}
}
}
else
{
uint8_t x_41; 
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_41 = !lean_is_exclusive(x_14);
if (x_41 == 0)
{
return x_14;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_14, 0);
x_43 = lean_ctor_get(x_14, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_14);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
}
lean_object* l_Lean_Elab_mkDeclName___at_Lean_Elab_Command_elabStructure___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
lean_inc(x_3);
x_11 = l_Lean_extractMacroScopes(x_3);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_Name_isAtomic(x_12);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = l_Lean_Elab_isFreshInstanceName(x_12);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
lean_dec(x_1);
x_15 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_15, 0, x_3);
x_16 = l_Lean_Elab_mkDeclName___rarg___closed__2;
x_17 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
x_18 = l_Lean_KernelException_toMessageData___closed__3;
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_19, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
return x_20;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_20);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_box(0);
x_26 = l_Lean_Elab_mkDeclName___at_Lean_Elab_Command_elabStructure___spec__5___lambda__1(x_1, x_3, x_2, x_25, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_12);
x_27 = lean_box(0);
x_28 = l_Lean_Elab_mkDeclName___at_Lean_Elab_Command_elabStructure___spec__5___lambda__1(x_1, x_3, x_2, x_27, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_28;
}
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabStructure___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at_Lean_Elab_Command_elabStructure___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_9, 0, x_1);
x_10 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__2;
x_11 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
x_12 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_13 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = l_Lean_throwError___at_Lean_Elab_Command_elabStructure___spec__8(x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_14;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabStructure___spec__10(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = x_3 == x_4;
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_uget(x_2, x_3);
lean_inc(x_1);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_15 = lean_apply_9(x_1, x_5, x_14, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = 1;
x_19 = x_3 + x_18;
x_3 = x_19;
x_5 = x_16;
x_12 = x_17;
goto _start;
}
else
{
uint8_t x_21; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_21 = !lean_is_exclusive(x_15);
if (x_21 == 0)
{
return x_15;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_15, 0);
x_23 = lean_ctor_get(x_15, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_15);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
else
{
lean_object* x_25; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_5);
lean_ctor_set(x_25, 1, x_12);
return x_25;
}
}
}
lean_object* l_Array_foldlMUnsafe___at_Lean_Elab_Command_elabStructure___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_nat_dec_lt(x_4, x_5);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_array_get_size(x_3);
x_16 = lean_nat_dec_le(x_5, x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_2);
lean_ctor_set(x_17, 1, x_12);
return x_17;
}
else
{
size_t x_18; size_t x_19; lean_object* x_20; 
x_18 = lean_usize_of_nat(x_4);
x_19 = lean_usize_of_nat(x_5);
x_20 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabStructure___spec__10(x_1, x_3, x_18, x_19, x_2, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_20;
}
}
}
}
lean_object* l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_13 = lean_ctor_get(x_10, 0);
x_14 = lean_ctor_get(x_10, 1);
x_15 = lean_ctor_get(x_10, 2);
x_16 = lean_ctor_get(x_10, 3);
x_17 = lean_ctor_get(x_10, 4);
x_18 = lean_ctor_get(x_10, 5);
x_19 = lean_ctor_get(x_10, 6);
x_20 = lean_ctor_get(x_10, 7);
x_21 = l_Lean_replaceRef(x_1, x_16);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
x_22 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_22, 0, x_13);
lean_ctor_set(x_22, 1, x_14);
lean_ctor_set(x_22, 2, x_15);
lean_ctor_set(x_22, 3, x_21);
lean_ctor_set(x_22, 4, x_17);
lean_ctor_set(x_22, 5, x_18);
lean_ctor_set(x_22, 6, x_19);
lean_ctor_set(x_22, 7, x_20);
lean_inc(x_6);
x_23 = l_Lean_Elab_mkDeclName___at_Lean_Elab_Command_elabStructure___spec__5(x_2, x_3, x_4, x_6, x_7, x_8, x_9, x_22, x_11, x_12);
lean_dec(x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_ctor_get(x_24, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = lean_ctor_get(x_3, 0);
lean_inc(x_28);
lean_dec(x_3);
lean_inc(x_26);
x_29 = l_Lean_addDocString_x27___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__15(x_26, x_28, x_6, x_7, x_8, x_9, x_10, x_11, x_25);
lean_dec(x_6);
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_29, 0);
lean_dec(x_31);
x_32 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_32, 0, x_27);
lean_ctor_set(x_32, 1, x_26);
lean_ctor_set(x_32, 2, x_5);
lean_ctor_set(x_29, 0, x_32);
return x_29;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_29, 1);
lean_inc(x_33);
lean_dec(x_29);
x_34 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_34, 0, x_27);
lean_ctor_set(x_34, 1, x_26);
lean_ctor_set(x_34, 2, x_5);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_36 = !lean_is_exclusive(x_23);
if (x_36 == 0)
{
return x_23;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_23, 0);
x_38 = lean_ctor_get(x_23, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_23);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
lean_object* l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = l_Lean_Syntax_getId(x_2);
x_11 = l_List_elem___at_Lean_NameHashSet_insert___spec__2(x_10, x_1);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_7);
lean_dec(x_3);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_1);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_9);
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_1);
x_14 = !lean_is_exclusive(x_7);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_7, 3);
x_16 = l_Lean_replaceRef(x_2, x_15);
lean_dec(x_15);
lean_ctor_set(x_7, 3, x_16);
x_17 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at_Lean_Elab_Command_elabStructure___spec__7(x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_18 = lean_ctor_get(x_7, 0);
x_19 = lean_ctor_get(x_7, 1);
x_20 = lean_ctor_get(x_7, 2);
x_21 = lean_ctor_get(x_7, 3);
x_22 = lean_ctor_get(x_7, 4);
x_23 = lean_ctor_get(x_7, 5);
x_24 = lean_ctor_get(x_7, 6);
x_25 = lean_ctor_get(x_7, 7);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_7);
x_26 = l_Lean_replaceRef(x_2, x_21);
lean_dec(x_21);
x_27 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_27, 0, x_18);
lean_ctor_set(x_27, 1, x_19);
lean_ctor_set(x_27, 2, x_20);
lean_ctor_set(x_27, 3, x_26);
lean_ctor_set(x_27, 4, x_22);
lean_ctor_set(x_27, 5, x_23);
lean_ctor_set(x_27, 6, x_24);
lean_ctor_set(x_27, 7, x_25);
x_28 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at_Lean_Elab_Command_elabStructure___spec__7(x_10, x_3, x_4, x_5, x_6, x_27, x_8, x_9);
lean_dec(x_27);
return x_28;
}
}
}
}
static lean_object* _init_l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4___lambda__2___boxed), 9, 0);
return x_1;
}
}
lean_object* l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = l_Lean_Elab_expandDeclIdCore(x_3);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Syntax_isNone(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_16 = lean_unsigned_to_nat(1u);
x_17 = l_Lean_Syntax_getArg(x_14, x_16);
lean_dec(x_14);
x_18 = l_Lean_Syntax_getArgs(x_17);
lean_dec(x_17);
x_19 = l_Array_getEvenElems___rarg(x_18);
lean_dec(x_18);
x_20 = lean_array_get_size(x_19);
x_21 = l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4___closed__1;
x_22 = lean_unsigned_to_nat(0u);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_23 = l_Array_foldlMUnsafe___at_Lean_Elab_Command_elabStructure___spec__9(x_21, x_2, x_19, x_22, x_20, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_20);
lean_dec(x_19);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4___lambda__1(x_3, x_1, x_4, x_13, x_24, x_5, x_6, x_7, x_8, x_9, x_10, x_25);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_26;
}
else
{
uint8_t x_27; 
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_23);
if (x_27 == 0)
{
return x_23;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_23, 0);
x_29 = lean_ctor_get(x_23, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_23);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
lean_object* x_31; 
lean_dec(x_14);
x_31 = l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4___lambda__1(x_3, x_1, x_4, x_13, x_2, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_31;
}
}
}
lean_object* l_Lean_Elab_addDeclarationRanges___at_Lean_Elab_Command_elabStructure___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
lean_inc(x_2);
x_10 = l_Lean_Syntax_getKind(x_2);
x_11 = l_Lean_Parser_Command_example___elambda__1___closed__2;
x_12 = lean_name_eq(x_10, x_11);
lean_dec(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_13 = l_Lean_Elab_getDeclarationRange___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__18(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Elab_getDeclarationSelectionRef(x_2);
x_17 = l_Lean_Elab_getDeclarationRange___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__18(x_16, x_3, x_4, x_5, x_6, x_7, x_8, x_15);
lean_dec(x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_14);
lean_ctor_set(x_20, 1, x_18);
x_21 = l_Lean_addDeclarationRanges___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__19(x_1, x_20, x_3, x_4, x_5, x_6, x_7, x_8, x_19);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_2);
lean_dec(x_1);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_9);
return x_23;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabStructure___spec__14(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = x_3 == x_4;
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_array_uget(x_2, x_3);
lean_inc(x_1);
lean_inc(x_7);
lean_inc(x_6);
x_11 = lean_apply_5(x_1, x_5, x_10, x_6, x_7, x_8);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = 1;
x_15 = x_3 + x_14;
x_3 = x_15;
x_5 = x_12;
x_8 = x_13;
goto _start;
}
else
{
uint8_t x_17; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_17 = !lean_is_exclusive(x_11);
if (x_17 == 0)
{
return x_11;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_11, 0);
x_19 = lean_ctor_get(x_11, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_11);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
else
{
lean_object* x_21; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_5);
lean_ctor_set(x_21, 1, x_8);
return x_21;
}
}
}
lean_object* l_Array_foldlMUnsafe___at_Lean_Elab_Command_elabStructure___spec__13(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = lean_nat_dec_lt(x_4, x_5);
if (x_9 == 0)
{
lean_object* x_10; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_2);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
else
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_array_get_size(x_3);
x_12 = lean_nat_dec_le(x_5, x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_2);
lean_ctor_set(x_13, 1, x_8);
return x_13;
}
else
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = lean_usize_of_nat(x_4);
x_15 = lean_usize_of_nat(x_5);
x_16 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabStructure___spec__14(x_1, x_3, x_14, x_15, x_2, x_6, x_7, x_8);
return x_16;
}
}
}
}
lean_object* l_Array_forM___at_Lean_Elab_Command_elabStructure___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_alloc_closure((void*)(l_Array_forM___at_Lean_Core_instMetaEvalCoreM___spec__4___lambda__1___boxed), 6, 1);
lean_closure_set(x_8, 0, x_1);
x_9 = lean_box(0);
x_10 = l_Array_foldlMUnsafe___at_Lean_Elab_Command_elabStructure___spec__13(x_8, x_9, x_2, x_3, x_4, x_5, x_6, x_7);
return x_10;
}
}
lean_object* l_Lean_Elab_Command_elabStructure___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, uint8_t x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19) {
_start:
{
lean_object* x_20; 
lean_inc(x_15);
lean_inc(x_13);
x_20 = l_Lean_Elab_Term_addAutoBoundImplicits(x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_Elab_Term_getLevelNames___rarg(x_14, x_15, x_16, x_17, x_18, x_22);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
lean_inc(x_5);
x_26 = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(x_26, 0, x_1);
lean_ctor_set(x_26, 1, x_2);
lean_ctor_set(x_26, 2, x_3);
lean_ctor_set(x_26, 3, x_24);
lean_ctor_set(x_26, 4, x_5);
lean_ctor_set(x_26, 5, x_6);
lean_ctor_set(x_26, 6, x_21);
lean_ctor_set(x_26, 7, x_7);
lean_ctor_set(x_26, 8, x_8);
lean_ctor_set(x_26, 9, x_9);
lean_ctor_set(x_26, 10, x_10);
lean_ctor_set_uint8(x_26, sizeof(void*)*11, x_4);
x_27 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView), 8, 1);
lean_closure_set(x_27, 0, x_26);
x_28 = 0;
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
x_29 = l_Lean_Elab_Term_withAutoBoundImplicitLocal___rarg(x_27, x_28, x_13, x_14, x_15, x_16, x_17, x_18, x_25);
if (lean_obj_tag(x_29) == 0)
{
if (x_11 == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
lean_inc(x_5);
x_31 = l_Lean_Meta_mkSizeOfInstances(x_5, x_15, x_16, x_17, x_18, x_30);
if (lean_obj_tag(x_31) == 0)
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_31, 0);
lean_dec(x_33);
lean_ctor_set(x_31, 0, x_5);
return x_31;
}
else
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_dec(x_31);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_5);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_dec(x_5);
x_36 = !lean_is_exclusive(x_31);
if (x_36 == 0)
{
return x_31;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_31, 0);
x_38 = lean_ctor_get(x_31, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_31);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
else
{
uint8_t x_40; 
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
x_40 = !lean_is_exclusive(x_29);
if (x_40 == 0)
{
lean_object* x_41; 
x_41 = lean_ctor_get(x_29, 0);
lean_dec(x_41);
lean_ctor_set(x_29, 0, x_5);
return x_29;
}
else
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_ctor_get(x_29, 1);
lean_inc(x_42);
lean_dec(x_29);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_5);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
else
{
uint8_t x_44; 
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_5);
x_44 = !lean_is_exclusive(x_29);
if (x_44 == 0)
{
return x_29;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_29, 0);
x_46 = lean_ctor_get(x_29, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_29);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
else
{
uint8_t x_48; 
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_48 = !lean_is_exclusive(x_20);
if (x_48 == 0)
{
return x_20;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_20, 0);
x_50 = lean_ctor_get(x_20, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_20);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
}
lean_object* l_Lean_Elab_Command_elabStructure___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, uint8_t x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19) {
_start:
{
lean_object* x_20; 
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_3);
lean_inc(x_2);
x_20 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields(x_1, x_2, x_3, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_box(x_5);
x_24 = lean_box(x_9);
x_25 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabStructure___lambda__1___boxed), 19, 11);
lean_closure_set(x_25, 0, x_1);
lean_closure_set(x_25, 1, x_2);
lean_closure_set(x_25, 2, x_4);
lean_closure_set(x_25, 3, x_23);
lean_closure_set(x_25, 4, x_3);
lean_closure_set(x_25, 5, x_6);
lean_closure_set(x_25, 6, x_7);
lean_closure_set(x_25, 7, x_8);
lean_closure_set(x_25, 8, x_12);
lean_closure_set(x_25, 9, x_21);
lean_closure_set(x_25, 10, x_24);
x_26 = 1;
x_27 = lean_box(x_26);
x_28 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBinders___rarg___boxed), 10, 3);
lean_closure_set(x_28, 0, x_10);
lean_closure_set(x_28, 1, x_25);
lean_closure_set(x_28, 2, x_27);
x_29 = lean_box(x_26);
x_30 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withAutoBoundImplicitLocal___rarg___boxed), 9, 2);
lean_closure_set(x_30, 0, x_28);
lean_closure_set(x_30, 1, x_29);
x_31 = l_Lean_Elab_Term_withLevelNames___rarg(x_11, x_30, x_13, x_14, x_15, x_16, x_17, x_18, x_22);
return x_31;
}
else
{
uint8_t x_32; 
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_20);
if (x_32 == 0)
{
return x_20;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_20, 0);
x_34 = lean_ctor_get(x_20, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_20);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
lean_object* l_Lean_Elab_Command_elabStructure___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, uint8_t x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = l_Lean_Elab_Term_getLevelNames___rarg(x_11, x_12, x_13, x_14, x_15, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_ctor_get(x_14, 4);
lean_inc(x_20);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_2);
lean_inc(x_18);
x_21 = l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4(x_20, x_18, x_1, x_2, x_10, x_11, x_12, x_13, x_14, x_15, x_19);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
x_25 = lean_ctor_get(x_22, 2);
lean_inc(x_25);
lean_dec(x_22);
lean_inc(x_3);
lean_inc(x_24);
x_26 = l_Lean_Elab_addDeclarationRanges___at_Lean_Elab_Command_elabStructure___spec__11(x_24, x_3, x_10, x_11, x_12, x_13, x_14, x_15, x_23);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
lean_inc(x_24);
lean_inc(x_2);
lean_inc(x_3);
x_28 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___boxed), 10, 3);
lean_closure_set(x_28, 0, x_3);
lean_closure_set(x_28, 1, x_2);
lean_closure_set(x_28, 2, x_24);
x_29 = lean_box(x_4);
x_30 = lean_box(x_7);
lean_inc(x_24);
x_31 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabStructure___lambda__2___boxed), 19, 11);
lean_closure_set(x_31, 0, x_3);
lean_closure_set(x_31, 1, x_2);
lean_closure_set(x_31, 2, x_24);
lean_closure_set(x_31, 3, x_18);
lean_closure_set(x_31, 4, x_29);
lean_closure_set(x_31, 5, x_9);
lean_closure_set(x_31, 6, x_5);
lean_closure_set(x_31, 7, x_6);
lean_closure_set(x_31, 8, x_30);
lean_closure_set(x_31, 9, x_8);
lean_closure_set(x_31, 10, x_25);
x_32 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Term_instMonadLogTermElabM___spec__2___rarg), 9, 2);
lean_closure_set(x_32, 0, x_28);
lean_closure_set(x_32, 1, x_31);
x_33 = l_Lean_Elab_Term_withDeclName___rarg(x_24, x_32, x_10, x_11, x_12, x_13, x_14, x_15, x_27);
return x_33;
}
else
{
uint8_t x_34; 
lean_dec(x_18);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_34 = !lean_is_exclusive(x_21);
if (x_34 == 0)
{
return x_21;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_21, 0);
x_36 = lean_ctor_get(x_21, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_21);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
lean_object* l_Lean_Elab_Command_elabStructure___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_mkOptionalNode___closed__2;
x_7 = lean_array_push(x_6, x_1);
x_8 = l_Lean_Elab_DerivingClassView_applyHandlers(x_2, x_7, x_3, x_4, x_5);
return x_8;
}
}
lean_object* l_Lean_Elab_Command_elabStructure___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_box(0);
x_14 = lean_box(x_4);
x_15 = lean_box(x_6);
x_16 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabStructure___lambda__3___boxed), 16, 8);
lean_closure_set(x_16, 0, x_1);
lean_closure_set(x_16, 1, x_2);
lean_closure_set(x_16, 2, x_3);
lean_closure_set(x_16, 3, x_14);
lean_closure_set(x_16, 4, x_5);
lean_closure_set(x_16, 5, x_9);
lean_closure_set(x_16, 6, x_15);
lean_closure_set(x_16, 7, x_7);
lean_inc(x_10);
x_17 = l_Lean_Elab_Command_runTermElabM___rarg(x_13, x_16, x_10, x_11, x_12);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabStructure___lambda__4), 5, 1);
lean_closure_set(x_20, 0, x_18);
x_21 = lean_array_get_size(x_8);
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_Array_forM___at_Lean_Elab_Command_elabStructure___spec__12(x_20, x_8, x_22, x_21, x_10, x_11, x_19);
lean_dec(x_21);
return x_23;
}
else
{
uint8_t x_24; 
lean_dec(x_11);
lean_dec(x_10);
x_24 = !lean_is_exclusive(x_17);
if (x_24 == 0)
{
return x_17;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_17, 0);
x_26 = lean_ctor_get(x_17, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_17);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Command_elabStructure___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = l_Lean_initFn____x40_Lean_Class___hyg_643____closed__1;
x_3 = lean_box(0);
x_4 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
lean_object* l_Lean_Elab_Command_elabStructure(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_3);
x_6 = l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1(x_1, x_3, x_4, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_2, x_8);
x_10 = l_Lean_Syntax_getKind(x_9);
x_11 = l_myMacro____x40_Init_NotationExtra___hyg_5637____closed__20;
x_12 = lean_name_eq(x_10, x_11);
lean_dec(x_10);
x_13 = lean_unsigned_to_nat(1u);
x_14 = l_Lean_Syntax_getArg(x_2, x_13);
x_15 = lean_unsigned_to_nat(2u);
x_16 = l_Lean_Syntax_getArg(x_2, x_15);
x_17 = l_Lean_Syntax_getArgs(x_16);
lean_dec(x_16);
x_18 = lean_unsigned_to_nat(3u);
x_19 = l_Lean_Syntax_getArg(x_2, x_18);
x_20 = l_Lean_Syntax_isNone(x_19);
x_21 = lean_unsigned_to_nat(4u);
x_22 = l_Lean_Syntax_getArg(x_2, x_21);
x_23 = lean_unsigned_to_nat(6u);
x_24 = l_Lean_Syntax_getArg(x_2, x_23);
lean_inc(x_4);
lean_inc(x_3);
x_25 = l_Lean_Elab_getOptDerivingClasses___at_Lean_Elab_Command_elabStructure___spec__2(x_24, x_3, x_4, x_7);
lean_dec(x_24);
if (x_12 == 0)
{
uint8_t x_79; 
x_79 = 0;
x_26 = x_79;
goto block_78;
}
else
{
uint8_t x_80; 
x_80 = 1;
x_26 = x_80;
goto block_78;
}
block_78:
{
lean_object* x_27; 
if (x_26 == 0)
{
x_27 = x_1;
goto block_75;
}
else
{
lean_object* x_76; lean_object* x_77; 
x_76 = l_Lean_Elab_Command_elabStructure___closed__1;
x_77 = l_Lean_Elab_Modifiers_addAttribute(x_1, x_76);
x_27 = x_77;
goto block_75;
}
block_75:
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
if (x_20 == 0)
{
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_59 = lean_ctor_get(x_25, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_25, 1);
lean_inc(x_60);
lean_dec(x_25);
x_61 = l_Lean_Syntax_getArg(x_19, x_8);
lean_dec(x_19);
x_62 = l_Lean_Syntax_getArg(x_61, x_13);
lean_dec(x_61);
x_63 = l_Lean_Syntax_getSepArgs(x_62);
lean_dec(x_62);
x_28 = x_63;
x_29 = x_59;
x_30 = x_60;
goto block_58;
}
else
{
uint8_t x_64; 
lean_dec(x_27);
lean_dec(x_22);
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_64 = !lean_is_exclusive(x_25);
if (x_64 == 0)
{
return x_25;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_25, 0);
x_66 = lean_ctor_get(x_25, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_25);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
}
}
else
{
lean_dec(x_19);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_25, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_25, 1);
lean_inc(x_69);
lean_dec(x_25);
x_70 = l_Array_empty___closed__1;
x_28 = x_70;
x_29 = x_68;
x_30 = x_69;
goto block_58;
}
else
{
uint8_t x_71; 
lean_dec(x_27);
lean_dec(x_22);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_71 = !lean_is_exclusive(x_25);
if (x_71 == 0)
{
return x_25;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_25, 0);
x_73 = lean_ctor_get(x_25, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_25);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
}
block_58:
{
uint8_t x_31; 
x_31 = l_Lean_Syntax_isNone(x_22);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = l_Lean_Syntax_getArg(x_22, x_8);
lean_dec(x_22);
x_33 = l_Lean_Syntax_getArg(x_32, x_13);
lean_dec(x_32);
x_34 = l_Lean_Elab_Command_elabStructure___lambda__5(x_14, x_27, x_2, x_12, x_28, x_26, x_17, x_29, x_33, x_3, x_4, x_30);
lean_dec(x_29);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
lean_dec(x_22);
x_35 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Command_mkDefViewOfConstant___spec__1(x_3, x_4, x_30);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = l_Lean_Elab_Command_getCurrMacroScope(x_3, x_4, x_37);
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
lean_dec(x_38);
x_40 = l_Lean_Elab_Command_getMainModule___rarg(x_4, x_39);
x_41 = lean_ctor_get(x_40, 1);
lean_inc(x_41);
lean_dec(x_40);
x_42 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1136____closed__28;
lean_inc(x_36);
x_43 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_43, 0, x_36);
lean_ctor_set(x_43, 1, x_42);
x_44 = l_Array_empty___closed__1;
x_45 = lean_array_push(x_44, x_43);
x_46 = l_myMacro____x40_Init_Notation___hyg_12938____closed__14;
x_47 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_47, 0, x_36);
lean_ctor_set(x_47, 1, x_46);
x_48 = lean_array_push(x_44, x_47);
x_49 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1136____closed__31;
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_48);
x_51 = lean_array_push(x_44, x_50);
x_52 = l_Lean_nullKind___closed__2;
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_51);
x_54 = lean_array_push(x_45, x_53);
x_55 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1136____closed__27;
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_54);
x_57 = l_Lean_Elab_Command_elabStructure___lambda__5(x_14, x_27, x_2, x_12, x_28, x_26, x_17, x_29, x_56, x_3, x_4, x_41);
lean_dec(x_29);
return x_57;
}
}
}
}
}
else
{
uint8_t x_81; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_81 = !lean_is_exclusive(x_6);
if (x_81 == 0)
{
return x_6;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_6, 0);
x_83 = lean_ctor_get(x_6, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_6);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
return x_84;
}
}
}
}
lean_object* l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1___lambda__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Command_elabStructure___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_9 = l_Array_mapMUnsafe_map___at_Lean_Elab_Command_elabStructure___spec__3(x_7, x_8, x_3, x_4, x_5, x_6);
lean_dec(x_5);
return x_9;
}
}
lean_object* l_Lean_Elab_getOptDerivingClasses___at_Lean_Elab_Command_elabStructure___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_getOptDerivingClasses___at_Lean_Elab_Command_elabStructure___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabStructure___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at_Lean_Elab_Command_elabStructure___spec__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Elab_mkDeclName___at_Lean_Elab_Command_elabStructure___spec__5___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Elab_mkDeclName___at_Lean_Elab_Command_elabStructure___spec__5___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_12;
}
}
lean_object* l_Lean_Elab_mkDeclName___at_Lean_Elab_Command_elabStructure___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_mkDeclName___at_Lean_Elab_Command_elabStructure___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_11;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabStructure___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at_Lean_Elab_Command_elabStructure___spec__8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at_Lean_Elab_Command_elabStructure___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at_Lean_Elab_Command_elabStructure___spec__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabStructure___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabStructure___spec__10(x_1, x_2, x_13, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_2);
return x_15;
}
}
lean_object* l_Array_foldlMUnsafe___at_Lean_Elab_Command_elabStructure___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Array_foldlMUnsafe___at_Lean_Elab_Command_elabStructure___spec__9(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_13;
}
}
lean_object* l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_1);
return x_13;
}
}
lean_object* l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_3);
return x_12;
}
}
lean_object* l_Lean_Elab_addDeclarationRanges___at_Lean_Elab_Command_elabStructure___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_addDeclarationRanges___at_Lean_Elab_Command_elabStructure___spec__11(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabStructure___spec__14___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_10 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_11 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabStructure___spec__14(x_1, x_2, x_9, x_10, x_5, x_6, x_7, x_8);
lean_dec(x_2);
return x_11;
}
}
lean_object* l_Array_foldlMUnsafe___at_Lean_Elab_Command_elabStructure___spec__13___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Array_foldlMUnsafe___at_Lean_Elab_Command_elabStructure___spec__13(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Array_forM___at_Lean_Elab_Command_elabStructure___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Array_forM___at_Lean_Elab_Command_elabStructure___spec__12(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_Elab_Command_elabStructure___lambda__1___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
_start:
{
uint8_t x_20; uint8_t x_21; lean_object* x_22; 
x_20 = lean_unbox(x_4);
lean_dec(x_4);
x_21 = lean_unbox(x_11);
lean_dec(x_11);
x_22 = l_Lean_Elab_Command_elabStructure___lambda__1(x_1, x_2, x_3, x_20, x_5, x_6, x_7, x_8, x_9, x_10, x_21, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
lean_dec(x_12);
return x_22;
}
}
lean_object* l_Lean_Elab_Command_elabStructure___lambda__2___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
_start:
{
uint8_t x_20; uint8_t x_21; lean_object* x_22; 
x_20 = lean_unbox(x_5);
lean_dec(x_5);
x_21 = lean_unbox(x_9);
lean_dec(x_9);
x_22 = l_Lean_Elab_Command_elabStructure___lambda__2(x_1, x_2, x_3, x_4, x_20, x_6, x_7, x_8, x_21, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
return x_22;
}
}
lean_object* l_Lean_Elab_Command_elabStructure___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
uint8_t x_17; uint8_t x_18; lean_object* x_19; 
x_17 = lean_unbox(x_4);
lean_dec(x_4);
x_18 = lean_unbox(x_7);
lean_dec(x_7);
x_19 = l_Lean_Elab_Command_elabStructure___lambda__3(x_1, x_2, x_3, x_17, x_5, x_6, x_18, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_1);
return x_19;
}
}
lean_object* l_Lean_Elab_Command_elabStructure___lambda__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; uint8_t x_14; lean_object* x_15; 
x_13 = lean_unbox(x_4);
lean_dec(x_4);
x_14 = lean_unbox(x_6);
lean_dec(x_6);
x_15 = l_Lean_Elab_Command_elabStructure___lambda__5(x_1, x_2, x_3, x_13, x_5, x_14, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_8);
return x_15;
}
}
lean_object* l_Lean_Elab_Command_initFn____x40_Lean_Elab_Structure___hyg_4477_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__6;
x_3 = l_Lean_registerTraceClass(x_2, x_1);
return x_3;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Parser_Command(lean_object*);
lean_object* initialize_Lean_Meta_Closure(lean_object*);
lean_object* initialize_Lean_Meta_SizeOf(lean_object*);
lean_object* initialize_Lean_Elab_Command(lean_object*);
lean_object* initialize_Lean_Elab_DeclModifiers(lean_object*);
lean_object* initialize_Lean_Elab_DeclUtil(lean_object*);
lean_object* initialize_Lean_Elab_Inductive(lean_object*);
lean_object* initialize_Lean_Elab_DeclarationRange(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Elab_Structure(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Command(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Closure(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_SizeOf(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Command(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_DeclModifiers(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_DeclUtil(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Inductive(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_DeclarationRange(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Command_instInhabitedStructFieldKind = _init_l_Lean_Elab_Command_instInhabitedStructFieldKind();
l_Lean_Elab_Command_StructFieldInfo_inferMod___default = _init_l_Lean_Elab_Command_StructFieldInfo_inferMod___default();
l_Lean_Elab_Command_StructFieldInfo_value_x3f___default = _init_l_Lean_Elab_Command_StructFieldInfo_value_x3f___default();
lean_mark_persistent(l_Lean_Elab_Command_StructFieldInfo_value_x3f___default);
l_Lean_Elab_Command_instInhabitedStructFieldInfo___closed__1 = _init_l_Lean_Elab_Command_instInhabitedStructFieldInfo___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_instInhabitedStructFieldInfo___closed__1);
l_Lean_Elab_Command_instInhabitedStructFieldInfo = _init_l_Lean_Elab_Command_instInhabitedStructFieldInfo();
lean_mark_persistent(l_Lean_Elab_Command_instInhabitedStructFieldInfo);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_defaultCtorName = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_defaultCtorName();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_defaultCtorName);
l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5___closed__1 = _init_l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5___closed__1();
lean_mark_persistent(l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__2 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__2);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__3 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__3);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__2 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__2);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__3 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__3);
l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__1 = _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__1);
l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__2 = _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__2);
l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__3 = _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__3();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__3);
l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__1 = _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__1);
l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__2 = _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__2);
l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__3 = _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__3();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__3);
l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__1 = _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__1);
l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__2 = _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__2);
l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__3 = _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__3();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__3);
l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__1 = _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__1);
l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__2 = _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__2);
l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__3 = _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__3();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__3);
l_Lean_Elab_Command_checkValidFieldModifier___closed__1 = _init_l_Lean_Elab_Command_checkValidFieldModifier___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___closed__1);
l_Lean_Elab_Command_checkValidFieldModifier___closed__2 = _init_l_Lean_Elab_Command_checkValidFieldModifier___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___closed__2);
l_Lean_Elab_Command_checkValidFieldModifier___closed__3 = _init_l_Lean_Elab_Command_checkValidFieldModifier___closed__3();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___closed__3);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__2___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__2___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__2___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__2___closed__2 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__2___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__2___closed__2);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__2___closed__3 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__2___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__2___closed__3);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__4___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__4___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__4___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__4___closed__2 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__4___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__4___closed__2);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__4___closed__3 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__4___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__4___closed__3);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__5___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__5___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__5___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__5___closed__2 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__5___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__5___closed__2);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__5___closed__3 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__5___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__5___closed__3);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__6___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__6___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__6___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__6___closed__2 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__6___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__6___closed__2);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__6___closed__3 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__6___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__6___closed__3);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__7___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__7___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___lambda__7___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__2 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__2);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__3 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__3);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__4 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__4);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__5 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__5();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__5);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__2 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__2);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__3 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__3);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__4 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__4);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__3___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__3___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__3___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__3___closed__2 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__3___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__3___closed__2);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__3___closed__3 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__3___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__3___closed__3);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__2 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__2);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__3 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__3);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__4 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__4);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__5 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__5();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__5);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__6 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__6();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__6);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__7 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__7();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__7);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__8 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__8();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__8);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__9 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__9();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__9);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__2 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__2);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__3 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__3);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___boxed__const__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___boxed__const__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___boxed__const__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__2 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__2);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__3 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__3);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___closed__1);
l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10___closed__1 = _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10___closed__1();
lean_mark_persistent(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10___closed__1);
l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10___closed__2 = _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10___closed__2();
lean_mark_persistent(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10___closed__2);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__2___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__2___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__2___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__2___closed__2 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__2___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__2___closed__2);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__2 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__2);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__3 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__3);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__4 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__4);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__5 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__5();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__5);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__6 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__6();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__6);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__7 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__7();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__7);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__8 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__8();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___closed__8);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___boxed__const__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___boxed__const__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__8___boxed__const__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__2 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__2);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__3 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__3);
l_Lean_Elab_getOptDerivingClasses___at_Lean_Elab_Command_elabStructure___spec__2___boxed__const__1 = _init_l_Lean_Elab_getOptDerivingClasses___at_Lean_Elab_Command_elabStructure___spec__2___boxed__const__1();
lean_mark_persistent(l_Lean_Elab_getOptDerivingClasses___at_Lean_Elab_Command_elabStructure___spec__2___boxed__const__1);
l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4___closed__1 = _init_l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4___closed__1();
lean_mark_persistent(l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4___closed__1);
l_Lean_Elab_Command_elabStructure___closed__1 = _init_l_Lean_Elab_Command_elabStructure___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_elabStructure___closed__1);
res = l_Lean_Elab_Command_initFn____x40_Lean_Elab_Structure___hyg_4477_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
