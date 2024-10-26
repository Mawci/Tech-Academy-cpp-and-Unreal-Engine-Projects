// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pong/GameHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameHUD() {}

// Begin Cross Module References
PONG_API UClass* Z_Construct_UClass_UGameHUD();
PONG_API UClass* Z_Construct_UClass_UGameHUD_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Pong();
// End Cross Module References

// Begin Class UGameHUD Function UpdateAIScore
struct GameHUD_eventUpdateAIScore_Parms
{
	int32 Score;
};
static FName NAME_UGameHUD_UpdateAIScore = FName(TEXT("UpdateAIScore"));
void UGameHUD::UpdateAIScore(int32 Score)
{
	GameHUD_eventUpdateAIScore_Parms Parms;
	Parms.Score=Score;
	ProcessEvent(FindFunctionChecked(NAME_UGameHUD_UpdateAIScore),&Parms);
}
struct Z_Construct_UFunction_UGameHUD_UpdateAIScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "GameHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameHUD_UpdateAIScore_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameHUD_eventUpdateAIScore_Parms, Score), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameHUD_UpdateAIScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameHUD_UpdateAIScore_Statics::NewProp_Score,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameHUD_UpdateAIScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameHUD_UpdateAIScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameHUD, nullptr, "UpdateAIScore", nullptr, nullptr, Z_Construct_UFunction_UGameHUD_UpdateAIScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameHUD_UpdateAIScore_Statics::PropPointers), sizeof(GameHUD_eventUpdateAIScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameHUD_UpdateAIScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameHUD_UpdateAIScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(GameHUD_eventUpdateAIScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameHUD_UpdateAIScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameHUD_UpdateAIScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UGameHUD Function UpdateAIScore

// Begin Class UGameHUD Function UpdatePlayerScore
struct GameHUD_eventUpdatePlayerScore_Parms
{
	int32 Score;
};
static FName NAME_UGameHUD_UpdatePlayerScore = FName(TEXT("UpdatePlayerScore"));
void UGameHUD::UpdatePlayerScore(int32 Score)
{
	GameHUD_eventUpdatePlayerScore_Parms Parms;
	Parms.Score=Score;
	ProcessEvent(FindFunctionChecked(NAME_UGameHUD_UpdatePlayerScore),&Parms);
}
struct Z_Construct_UFunction_UGameHUD_UpdatePlayerScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "GameHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameHUD_UpdatePlayerScore_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameHUD_eventUpdatePlayerScore_Parms, Score), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameHUD_UpdatePlayerScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameHUD_UpdatePlayerScore_Statics::NewProp_Score,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameHUD_UpdatePlayerScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameHUD_UpdatePlayerScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameHUD, nullptr, "UpdatePlayerScore", nullptr, nullptr, Z_Construct_UFunction_UGameHUD_UpdatePlayerScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameHUD_UpdatePlayerScore_Statics::PropPointers), sizeof(GameHUD_eventUpdatePlayerScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameHUD_UpdatePlayerScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameHUD_UpdatePlayerScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(GameHUD_eventUpdatePlayerScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameHUD_UpdatePlayerScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameHUD_UpdatePlayerScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UGameHUD Function UpdatePlayerScore

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
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameHUD_UpdateAIScore, "UpdateAIScore" }, // 3848780241
		{ &Z_Construct_UFunction_UGameHUD_UpdatePlayerScore, "UpdatePlayerScore" }, // 3377826899
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Pong,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameHUD_Statics::ClassParams = {
	&UGameHUD::StaticClass,
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
template<> PONG_API UClass* StaticClass<UGameHUD>()
{
	return UGameHUD::StaticClass();
}
UGameHUD::UGameHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameHUD);
UGameHUD::~UGameHUD() {}
// End Class UGameHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Nick_Downloads_unreal_engine_4_blueprint_cplusplus_integration_02_project_setup_project_setup_exercise_files_Pong_Source_Pong_GameHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameHUD, UGameHUD::StaticClass, TEXT("UGameHUD"), &Z_Registration_Info_UClass_UGameHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameHUD), 2152027304U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Nick_Downloads_unreal_engine_4_blueprint_cplusplus_integration_02_project_setup_project_setup_exercise_files_Pong_Source_Pong_GameHUD_h_3871350785(TEXT("/Script/Pong"),
	Z_CompiledInDeferFile_FID_Users_Nick_Downloads_unreal_engine_4_blueprint_cplusplus_integration_02_project_setup_project_setup_exercise_files_Pong_Source_Pong_GameHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Nick_Downloads_unreal_engine_4_blueprint_cplusplus_integration_02_project_setup_project_setup_exercise_files_Pong_Source_Pong_GameHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
