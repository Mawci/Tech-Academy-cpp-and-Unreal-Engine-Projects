// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameAssignement/Target.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTarget() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
GAMEASSIGNEMENT_API UClass* Z_Construct_UClass_ATarget();
GAMEASSIGNEMENT_API UClass* Z_Construct_UClass_ATarget_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameAssignement();
// End Cross Module References

// Begin Class ATarget
void ATarget::StaticRegisterNativesATarget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATarget);
UClass* Z_Construct_UClass_ATarget_NoRegister()
{
	return ATarget::StaticClass();
}
struct Z_Construct_UClass_ATarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Target.h" },
		{ "ModuleRelativePath", "Target.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATarget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GameAssignement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATarget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATarget_Statics::ClassParams = {
	&ATarget::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATarget_Statics::Class_MetaDataParams), Z_Construct_UClass_ATarget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATarget()
{
	if (!Z_Registration_Info_UClass_ATarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATarget.OuterSingleton, Z_Construct_UClass_ATarget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATarget.OuterSingleton;
}
template<> GAMEASSIGNEMENT_API UClass* StaticClass<ATarget>()
{
	return ATarget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATarget);
ATarget::~ATarget() {}
// End Class ATarget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Nick_Documents_TechAcademy_Tech_Academy_cpp_and_Unreal_Engine_Projects_GameAssignement_Source_GameAssignement_Target_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATarget, ATarget::StaticClass, TEXT("ATarget"), &Z_Registration_Info_UClass_ATarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATarget), 340815220U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Nick_Documents_TechAcademy_Tech_Academy_cpp_and_Unreal_Engine_Projects_GameAssignement_Source_GameAssignement_Target_h_4018347472(TEXT("/Script/GameAssignement"),
	Z_CompiledInDeferFile_FID_Users_Nick_Documents_TechAcademy_Tech_Academy_cpp_and_Unreal_Engine_Projects_GameAssignement_Source_GameAssignement_Target_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Nick_Documents_TechAcademy_Tech_Academy_cpp_and_Unreal_Engine_Projects_GameAssignement_Source_GameAssignement_Target_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
