// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameAssignement/GameHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameHUD() {}

// Begin Cross Module References
GAMEASSIGNEMENT_API UClass* Z_Construct_UClass_UGameHUD();
GAMEASSIGNEMENT_API UClass* Z_Construct_UClass_UGameHUD_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_GameAssignement();
// End Cross Module References

// Begin Class UGameHUD
void UGameHUD::StaticRegisterNativesUGameHUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameHUD);
UClass* Z_Construct_UClass_UGameHUD_NoRegister()
{
	return UGameHUD::StaticClass();
}
struct Z_Construct_UClass_UGameHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameHUD.h" },
		{ "ModuleRelativePath", "GameHUD.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_GameAssignement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameHUD_Statics::ClassParams = {
	&UGameHUD::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameHUD()
{
	if (!Z_Registration_Info_UClass_UGameHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameHUD.OuterSingleton, Z_Construct_UClass_UGameHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameHUD.OuterSingleton;
}
template<> GAMEASSIGNEMENT_API UClass* StaticClass<UGameHUD>()
{
	return UGameHUD::StaticClass();
}
UGameHUD::UGameHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameHUD);
UGameHUD::~UGameHUD() {}
// End Class UGameHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Nick_Documents_TechAcademy_Tech_Academy_cpp_and_Unreal_Engine_Projects_GameAssignement_Source_GameAssignement_GameHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameHUD, UGameHUD::StaticClass, TEXT("UGameHUD"), &Z_Registration_Info_UClass_UGameHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameHUD), 2929773246U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Nick_Documents_TechAcademy_Tech_Academy_cpp_and_Unreal_Engine_Projects_GameAssignement_Source_GameAssignement_GameHUD_h_1373320771(TEXT("/Script/GameAssignement"),
	Z_CompiledInDeferFile_FID_Users_Nick_Documents_TechAcademy_Tech_Academy_cpp_and_Unreal_Engine_Projects_GameAssignement_Source_GameAssignement_GameHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Nick_Documents_TechAcademy_Tech_Academy_cpp_and_Unreal_Engine_Projects_GameAssignement_Source_GameAssignement_GameHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
