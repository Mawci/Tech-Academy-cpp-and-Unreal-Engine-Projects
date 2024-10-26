// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pong/Paddle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaddle() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
PONG_API UClass* Z_Construct_UClass_ABall_NoRegister();
PONG_API UClass* Z_Construct_UClass_APaddle();
PONG_API UClass* Z_Construct_UClass_APaddle_NoRegister();
UPackage* Z_Construct_UPackage__Script_Pong();
// End Cross Module References

// Begin Class APaddle
void APaddle::StaticRegisterNativesAPaddle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APaddle);
UClass* Z_Construct_UClass_APaddle_NoRegister()
{
	return APaddle::StaticClass();
}
struct Z_Construct_UClass_APaddle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Paddle.h" },
		{ "ModuleRelativePath", "Paddle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collider_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Paddle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaddleSprite_MetaData[] = {
		{ "Category", "Sprite" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Paddle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_moveSpeed_MetaData[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Float" },
		{ "ModuleRelativePath", "Paddle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BallRef_MetaData[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Paddle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Collider;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PaddleSprite;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_moveSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BallRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaddle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaddle_Statics::NewProp_Collider = { "Collider", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APaddle, Collider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collider_MetaData), NewProp_Collider_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaddle_Statics::NewProp_PaddleSprite = { "PaddleSprite", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APaddle, PaddleSprite), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaddleSprite_MetaData), NewProp_PaddleSprite_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APaddle_Statics::NewProp_moveSpeed = { "moveSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APaddle, moveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_moveSpeed_MetaData), NewProp_moveSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaddle_Statics::NewProp_BallRef = { "BallRef", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APaddle, BallRef), Z_Construct_UClass_ABall_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BallRef_MetaData), NewProp_BallRef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APaddle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaddle_Statics::NewProp_Collider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaddle_Statics::NewProp_PaddleSprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaddle_Statics::NewProp_moveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaddle_Statics::NewProp_BallRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APaddle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APaddle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_Pong,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APaddle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APaddle_Statics::ClassParams = {
	&APaddle::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APaddle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APaddle_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APaddle_Statics::Class_MetaDataParams), Z_Construct_UClass_APaddle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APaddle()
{
	if (!Z_Registration_Info_UClass_APaddle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APaddle.OuterSingleton, Z_Construct_UClass_APaddle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APaddle.OuterSingleton;
}
template<> PONG_API UClass* StaticClass<APaddle>()
{
	return APaddle::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APaddle);
APaddle::~APaddle() {}
// End Class APaddle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Nick_Downloads_unreal_engine_4_blueprint_cplusplus_integration_02_project_setup_project_setup_exercise_files_Pong_Source_Pong_Paddle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APaddle, APaddle::StaticClass, TEXT("APaddle"), &Z_Registration_Info_UClass_APaddle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APaddle), 3429422308U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Nick_Downloads_unreal_engine_4_blueprint_cplusplus_integration_02_project_setup_project_setup_exercise_files_Pong_Source_Pong_Paddle_h_395645341(TEXT("/Script/Pong"),
	Z_CompiledInDeferFile_FID_Users_Nick_Downloads_unreal_engine_4_blueprint_cplusplus_integration_02_project_setup_project_setup_exercise_files_Pong_Source_Pong_Paddle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Nick_Downloads_unreal_engine_4_blueprint_cplusplus_integration_02_project_setup_project_setup_exercise_files_Pong_Source_Pong_Paddle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
