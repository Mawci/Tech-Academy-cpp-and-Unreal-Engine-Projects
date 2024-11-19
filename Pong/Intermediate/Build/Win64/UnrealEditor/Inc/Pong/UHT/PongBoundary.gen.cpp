// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pong/PongBoundary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePongBoundary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
PONG_API UClass* Z_Construct_UClass_APongBoundary();
PONG_API UClass* Z_Construct_UClass_APongBoundary_NoRegister();
PONG_API UClass* Z_Construct_UClass_APongGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Pong();
// End Cross Module References

// Begin Class APongBoundary
void APongBoundary::StaticRegisterNativesAPongBoundary()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APongBoundary);
UClass* Z_Construct_UClass_APongBoundary_NoRegister()
{
	return APongBoundary::StaticClass();
}
struct Z_Construct_UClass_APongBoundary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PongBoundary.h" },
		{ "ModuleRelativePath", "PongBoundary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isGoal_MetaData[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Boundary Type" },
		{ "ModuleRelativePath", "PongBoundary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isLeftGoal_MetaData[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Boundary Type" },
		{ "ModuleRelativePath", "PongBoundary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameModeRef_MetaData[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "References" },
		{ "ModuleRelativePath", "PongBoundary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PongBoundary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_isGoal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isGoal;
	static void NewProp_isLeftGoal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isLeftGoal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameModeRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APongBoundary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_APongBoundary_Statics::NewProp_isGoal_SetBit(void* Obj)
{
	((APongBoundary*)Obj)->isGoal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APongBoundary_Statics::NewProp_isGoal = { "isGoal", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APongBoundary), &Z_Construct_UClass_APongBoundary_Statics::NewProp_isGoal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isGoal_MetaData), NewProp_isGoal_MetaData) };
void Z_Construct_UClass_APongBoundary_Statics::NewProp_isLeftGoal_SetBit(void* Obj)
{
	((APongBoundary*)Obj)->isLeftGoal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APongBoundary_Statics::NewProp_isLeftGoal = { "isLeftGoal", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APongBoundary), &Z_Construct_UClass_APongBoundary_Statics::NewProp_isLeftGoal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isLeftGoal_MetaData), NewProp_isLeftGoal_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APongBoundary_Statics::NewProp_GameModeRef = { "GameModeRef", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APongBoundary, GameModeRef), Z_Construct_UClass_APongGameMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameModeRef_MetaData), NewProp_GameModeRef_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APongBoundary_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APongBoundary, Bounds), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bounds_MetaData), NewProp_Bounds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APongBoundary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongBoundary_Statics::NewProp_isGoal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongBoundary_Statics::NewProp_isLeftGoal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongBoundary_Statics::NewProp_GameModeRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongBoundary_Statics::NewProp_Bounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APongBoundary_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APongBoundary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Pong,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APongBoundary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APongBoundary_Statics::ClassParams = {
	&APongBoundary::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APongBoundary_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APongBoundary_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APongBoundary_Statics::Class_MetaDataParams), Z_Construct_UClass_APongBoundary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APongBoundary()
{
	if (!Z_Registration_Info_UClass_APongBoundary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APongBoundary.OuterSingleton, Z_Construct_UClass_APongBoundary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APongBoundary.OuterSingleton;
}
template<> PONG_API UClass* StaticClass<APongBoundary>()
{
	return APongBoundary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APongBoundary);
APongBoundary::~APongBoundary() {}
// End Class APongBoundary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Nick_Documents_TechAcademy_Tech_Academy_cpp_and_Unreal_Engine_Projects_Pong_Source_Pong_PongBoundary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APongBoundary, APongBoundary::StaticClass, TEXT("APongBoundary"), &Z_Registration_Info_UClass_APongBoundary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APongBoundary), 2816401513U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Nick_Documents_TechAcademy_Tech_Academy_cpp_and_Unreal_Engine_Projects_Pong_Source_Pong_PongBoundary_h_3555497263(TEXT("/Script/Pong"),
	Z_CompiledInDeferFile_FID_Users_Nick_Documents_TechAcademy_Tech_Academy_cpp_and_Unreal_Engine_Projects_Pong_Source_Pong_PongBoundary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Nick_Documents_TechAcademy_Tech_Academy_cpp_and_Unreal_Engine_Projects_Pong_Source_Pong_PongBoundary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
