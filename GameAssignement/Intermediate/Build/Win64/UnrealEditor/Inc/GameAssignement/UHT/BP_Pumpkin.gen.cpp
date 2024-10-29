// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameAssignement/BP_Pumpkin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_Pumpkin() {}

// Begin Cross Module References
GAMEASSIGNEMENT_API UClass* Z_Construct_UClass_ABP_Pumpkin();
GAMEASSIGNEMENT_API UClass* Z_Construct_UClass_ABP_Pumpkin_NoRegister();
GAMEASSIGNEMENT_API UClass* Z_Construct_UClass_AProjectile();
UPackage* Z_Construct_UPackage__Script_GameAssignement();
// End Cross Module References

// Begin Class ABP_Pumpkin
void ABP_Pumpkin::StaticRegisterNativesABP_Pumpkin()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABP_Pumpkin);
UClass* Z_Construct_UClass_ABP_Pumpkin_NoRegister()
{
	return ABP_Pumpkin::StaticClass();
}
struct Z_Construct_UClass_ABP_Pumpkin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BP_Pumpkin.h" },
		{ "ModuleRelativePath", "BP_Pumpkin.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_Pumpkin>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABP_Pumpkin_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AProjectile,
	(UObject* (*)())Z_Construct_UPackage__Script_GameAssignement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Pumpkin_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABP_Pumpkin_Statics::ClassParams = {
	&ABP_Pumpkin::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Pumpkin_Statics::Class_MetaDataParams), Z_Construct_UClass_ABP_Pumpkin_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABP_Pumpkin()
{
	if (!Z_Registration_Info_UClass_ABP_Pumpkin.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABP_Pumpkin.OuterSingleton, Z_Construct_UClass_ABP_Pumpkin_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABP_Pumpkin.OuterSingleton;
}
template<> GAMEASSIGNEMENT_API UClass* StaticClass<ABP_Pumpkin>()
{
	return ABP_Pumpkin::StaticClass();
}
ABP_Pumpkin::ABP_Pumpkin() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_Pumpkin);
ABP_Pumpkin::~ABP_Pumpkin() {}
// End Class ABP_Pumpkin

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Nick_Documents_TechAcademy_Tech_Academy_cpp_and_Unreal_Engine_Projects_GameAssignement_Source_GameAssignement_BP_Pumpkin_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABP_Pumpkin, ABP_Pumpkin::StaticClass, TEXT("ABP_Pumpkin"), &Z_Registration_Info_UClass_ABP_Pumpkin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABP_Pumpkin), 2590937156U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Nick_Documents_TechAcademy_Tech_Academy_cpp_and_Unreal_Engine_Projects_GameAssignement_Source_GameAssignement_BP_Pumpkin_h_3485476031(TEXT("/Script/GameAssignement"),
	Z_CompiledInDeferFile_FID_Users_Nick_Documents_TechAcademy_Tech_Academy_cpp_and_Unreal_Engine_Projects_GameAssignement_Source_GameAssignement_BP_Pumpkin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Nick_Documents_TechAcademy_Tech_Academy_cpp_and_Unreal_Engine_Projects_GameAssignement_Source_GameAssignement_BP_Pumpkin_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
