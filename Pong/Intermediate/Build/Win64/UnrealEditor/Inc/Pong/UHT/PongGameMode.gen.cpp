// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pong/PongGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePongGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PONG_API UClass* Z_Construct_UClass_ABall_NoRegister();
PONG_API UClass* Z_Construct_UClass_APongGameMode();
PONG_API UClass* Z_Construct_UClass_APongGameMode_NoRegister();
PONG_API UClass* Z_Construct_UClass_UGameHUD_NoRegister();
UPackage* Z_Construct_UPackage__Script_Pong();
// End Cross Module References

// Begin Class APongGameMode Function IncreaseAIScore
static FName NAME_APongGameMode_IncreaseAIScore = FName(TEXT("IncreaseAIScore"));
void APongGameMode::IncreaseAIScore()
{
	ProcessEvent(FindFunctionChecked(NAME_APongGameMode_IncreaseAIScore),NULL);
}
struct Z_Construct_UFunction_APongGameMode_IncreaseAIScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "PongGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APongGameMode_IncreaseAIScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APongGameMode, nullptr, "IncreaseAIScore", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APongGameMode_IncreaseAIScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_APongGameMode_IncreaseAIScore_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APongGameMode_IncreaseAIScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APongGameMode_IncreaseAIScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APongGameMode Function IncreaseAIScore

// Begin Class APongGameMode Function IncreasePlayerScore
static FName NAME_APongGameMode_IncreasePlayerScore = FName(TEXT("IncreasePlayerScore"));
void APongGameMode::IncreasePlayerScore()
{
	ProcessEvent(FindFunctionChecked(NAME_APongGameMode_IncreasePlayerScore),NULL);
}
struct Z_Construct_UFunction_APongGameMode_IncreasePlayerScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "PongGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APongGameMode_IncreasePlayerScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APongGameMode, nullptr, "IncreasePlayerScore", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APongGameMode_IncreasePlayerScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_APongGameMode_IncreasePlayerScore_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APongGameMode_IncreasePlayerScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APongGameMode_IncreasePlayerScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APongGameMode Function IncreasePlayerScore

// Begin Class APongGameMode Function SpawnNewBall
static FName NAME_APongGameMode_SpawnNewBall = FName(TEXT("SpawnNewBall"));
void APongGameMode::SpawnNewBall()
{
	ProcessEvent(FindFunctionChecked(NAME_APongGameMode_SpawnNewBall),NULL);
}
struct Z_Construct_UFunction_APongGameMode_SpawnNewBall_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "PongGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APongGameMode_SpawnNewBall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APongGameMode, nullptr, "SpawnNewBall", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APongGameMode_SpawnNewBall_Statics::Function_MetaDataParams), Z_Construct_UFunction_APongGameMode_SpawnNewBall_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APongGameMode_SpawnNewBall()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APongGameMode_SpawnNewBall_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APongGameMode Function SpawnNewBall

// Begin Class APongGameMode
void APongGameMode::StaticRegisterNativesAPongGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APongGameMode);
UClass* Z_Construct_UClass_APongGameMode_NoRegister()
{
	return APongGameMode::StaticClass();
}
struct Z_Construct_UClass_APongGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PongGameMode.h" },
		{ "ModuleRelativePath", "PongGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BallRef_MetaData[] = {
		{ "Category", "References" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*pure function example\n\x09UFUNCTION(BlueprintPure, BlueprintCallable)\n\x09""float SumTest(float A, float B);\n\x09*/" },
#endif
		{ "ModuleRelativePath", "PongGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "pure function example\n       UFUNCTION(BlueprintPure, BlueprintCallable)\n       float SumTest(float A, float B);" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameHUDRef_MetaData[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "References" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PongGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Float" },
		{ "ModuleRelativePath", "PongGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BallSpeed_MetaData[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Float" },
		{ "ModuleRelativePath", "PongGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerScore_MetaData[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Score" },
		{ "ModuleRelativePath", "PongGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIScore_MetaData[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Score" },
		{ "ModuleRelativePath", "PongGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BallRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameHUDRef;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BallSpeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerScore;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AIScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APongGameMode_IncreaseAIScore, "IncreaseAIScore" }, // 2640058403
		{ &Z_Construct_UFunction_APongGameMode_IncreasePlayerScore, "IncreasePlayerScore" }, // 2531544685
		{ &Z_Construct_UFunction_APongGameMode_SpawnNewBall, "SpawnNewBall" }, // 89181885
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APongGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APongGameMode_Statics::NewProp_BallRef = { "BallRef", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APongGameMode, BallRef), Z_Construct_UClass_ABall_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BallRef_MetaData), NewProp_BallRef_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APongGameMode_Statics::NewProp_GameHUDRef = { "GameHUDRef", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APongGameMode, GameHUDRef), Z_Construct_UClass_UGameHUD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameHUDRef_MetaData), NewProp_GameHUDRef_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APongGameMode_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APongGameMode, Direction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APongGameMode_Statics::NewProp_BallSpeed = { "BallSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APongGameMode, BallSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BallSpeed_MetaData), NewProp_BallSpeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APongGameMode_Statics::NewProp_PlayerScore = { "PlayerScore", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APongGameMode, PlayerScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerScore_MetaData), NewProp_PlayerScore_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APongGameMode_Statics::NewProp_AIScore = { "AIScore", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APongGameMode, AIScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIScore_MetaData), NewProp_AIScore_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APongGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongGameMode_Statics::NewProp_BallRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongGameMode_Statics::NewProp_GameHUDRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongGameMode_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongGameMode_Statics::NewProp_BallSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongGameMode_Statics::NewProp_PlayerScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongGameMode_Statics::NewProp_AIScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APongGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APongGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Pong,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APongGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APongGameMode_Statics::ClassParams = {
	&APongGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APongGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APongGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APongGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APongGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APongGameMode()
{
	if (!Z_Registration_Info_UClass_APongGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APongGameMode.OuterSingleton, Z_Construct_UClass_APongGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APongGameMode.OuterSingleton;
}
template<> PONG_API UClass* StaticClass<APongGameMode>()
{
	return APongGameMode::StaticClass();
}
APongGameMode::APongGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APongGameMode);
APongGameMode::~APongGameMode() {}
// End Class APongGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Nick_Documents_TechAcademy_Tech_Academy_cpp_and_Unreal_Engine_Projects_Pong_Source_Pong_PongGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APongGameMode, APongGameMode::StaticClass, TEXT("APongGameMode"), &Z_Registration_Info_UClass_APongGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APongGameMode), 2095941067U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Nick_Documents_TechAcademy_Tech_Academy_cpp_and_Unreal_Engine_Projects_Pong_Source_Pong_PongGameMode_h_4042937916(TEXT("/Script/Pong"),
	Z_CompiledInDeferFile_FID_Users_Nick_Documents_TechAcademy_Tech_Academy_cpp_and_Unreal_Engine_Projects_Pong_Source_Pong_PongGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Nick_Documents_TechAcademy_Tech_Academy_cpp_and_Unreal_Engine_Projects_Pong_Source_Pong_PongGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
