// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IMCSwitcher/Public/IMCSwitcherSubsystem_P.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMCSwitcherSubsystem_P() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
IMCSWITCHER_API UClass* Z_Construct_UClass_UIMCSwitcherSubsystem_P();
IMCSWITCHER_API UClass* Z_Construct_UClass_UIMCSwitcherSubsystem_P_NoRegister();
UPackage* Z_Construct_UPackage__Script_IMCSwitcher();
// End Cross Module References

// Begin Class UIMCSwitcherSubsystem_P Function SetActiveIMC
struct Z_Construct_UFunction_UIMCSwitcherSubsystem_P_SetActiveIMC_Statics
{
	struct IMCSwitcherSubsystem_P_eventSetActiveIMC_Parms
	{
		UInputMappingContext* NewIMC;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "IMC Switcher" },
		{ "ModuleRelativePath", "Public/IMCSwitcherSubsystem_P.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewIMC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIMCSwitcherSubsystem_P_SetActiveIMC_Statics::NewProp_NewIMC = { "NewIMC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IMCSwitcherSubsystem_P_eventSetActiveIMC_Parms, NewIMC), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIMCSwitcherSubsystem_P_SetActiveIMC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIMCSwitcherSubsystem_P_SetActiveIMC_Statics::NewProp_NewIMC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMCSwitcherSubsystem_P_SetActiveIMC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIMCSwitcherSubsystem_P_SetActiveIMC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIMCSwitcherSubsystem_P, nullptr, "SetActiveIMC", nullptr, nullptr, Z_Construct_UFunction_UIMCSwitcherSubsystem_P_SetActiveIMC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIMCSwitcherSubsystem_P_SetActiveIMC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIMCSwitcherSubsystem_P_SetActiveIMC_Statics::IMCSwitcherSubsystem_P_eventSetActiveIMC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIMCSwitcherSubsystem_P_SetActiveIMC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIMCSwitcherSubsystem_P_SetActiveIMC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIMCSwitcherSubsystem_P_SetActiveIMC_Statics::IMCSwitcherSubsystem_P_eventSetActiveIMC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIMCSwitcherSubsystem_P_SetActiveIMC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIMCSwitcherSubsystem_P_SetActiveIMC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIMCSwitcherSubsystem_P::execSetActiveIMC)
{
	P_GET_OBJECT(UInputMappingContext,Z_Param_NewIMC);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActiveIMC(Z_Param_NewIMC);
	P_NATIVE_END;
}
// End Class UIMCSwitcherSubsystem_P Function SetActiveIMC

// Begin Class UIMCSwitcherSubsystem_P
void UIMCSwitcherSubsystem_P::StaticRegisterNativesUIMCSwitcherSubsystem_P()
{
	UClass* Class = UIMCSwitcherSubsystem_P::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetActiveIMC", &UIMCSwitcherSubsystem_P::execSetActiveIMC },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIMCSwitcherSubsystem_P);
UClass* Z_Construct_UClass_UIMCSwitcherSubsystem_P_NoRegister()
{
	return UIMCSwitcherSubsystem_P::StaticClass();
}
struct Z_Construct_UClass_UIMCSwitcherSubsystem_P_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "IMCSwitcherSubsystem_P.h" },
		{ "ModuleRelativePath", "Public/IMCSwitcherSubsystem_P.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIMCSwitcherSubsystem_P_SetActiveIMC, "SetActiveIMC" }, // 2893554426
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIMCSwitcherSubsystem_P>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIMCSwitcherSubsystem_P_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_IMCSwitcher,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIMCSwitcherSubsystem_P_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIMCSwitcherSubsystem_P_Statics::ClassParams = {
	&UIMCSwitcherSubsystem_P::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIMCSwitcherSubsystem_P_Statics::Class_MetaDataParams), Z_Construct_UClass_UIMCSwitcherSubsystem_P_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIMCSwitcherSubsystem_P()
{
	if (!Z_Registration_Info_UClass_UIMCSwitcherSubsystem_P.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIMCSwitcherSubsystem_P.OuterSingleton, Z_Construct_UClass_UIMCSwitcherSubsystem_P_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIMCSwitcherSubsystem_P.OuterSingleton;
}
template<> IMCSWITCHER_API UClass* StaticClass<UIMCSwitcherSubsystem_P>()
{
	return UIMCSwitcherSubsystem_P::StaticClass();
}
UIMCSwitcherSubsystem_P::UIMCSwitcherSubsystem_P() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIMCSwitcherSubsystem_P);
UIMCSwitcherSubsystem_P::~UIMCSwitcherSubsystem_P() {}
// End Class UIMCSwitcherSubsystem_P

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Student_Desktop_Tweeduuster_Tweeduuster_UE_Plugins_IMCSwitcher_Source_IMCSwitcher_Public_IMCSwitcherSubsystem_P_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIMCSwitcherSubsystem_P, UIMCSwitcherSubsystem_P::StaticClass, TEXT("UIMCSwitcherSubsystem_P"), &Z_Registration_Info_UClass_UIMCSwitcherSubsystem_P, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIMCSwitcherSubsystem_P), 2949633008U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Student_Desktop_Tweeduuster_Tweeduuster_UE_Plugins_IMCSwitcher_Source_IMCSwitcher_Public_IMCSwitcherSubsystem_P_h_1931442698(TEXT("/Script/IMCSwitcher"),
	Z_CompiledInDeferFile_FID_Users_Student_Desktop_Tweeduuster_Tweeduuster_UE_Plugins_IMCSwitcher_Source_IMCSwitcher_Public_IMCSwitcherSubsystem_P_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Student_Desktop_Tweeduuster_Tweeduuster_UE_Plugins_IMCSwitcher_Source_IMCSwitcher_Public_IMCSwitcherSubsystem_P_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
