// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pong/Ball.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBall() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
PONG_API UClass* Z_Construct_UClass_ABall();
PONG_API UClass* Z_Construct_UClass_ABall_NoRegister();
PONG_API UClass* Z_Construct_UClass_APaddle_NoRegister();
UPackage* Z_Construct_UPackage__Script_Pong();
// End Cross Module References

// Begin Class ABall Function HitBoundary
static FName NAME_ABall_HitBoundary = FName(TEXT("HitBoundary"));
void ABall::HitBoundary()
{
	ProcessEvent(FindFunctionChecked(NAME_ABall_HitBoundary),NULL);
}
struct Z_Construct_UFunction_ABall_HitBoundary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Hit Response" },
		{ "ModuleRelativePath", "Ball.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABall_HitBoundary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABall, nullptr, "HitBoundary", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABall_HitBoundary_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABall_HitBoundary_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABall_HitBoundary()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABall_HitBoundary_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABall Function HitBoundary

// Begin Class ABall Function HitPaddle
struct Ball_eventHitPaddle_Parms
{
	APaddle* Paddle;
};
static FName NAME_ABall_HitPaddle = FName(TEXT("HitPaddle"));
void ABall::HitPaddle(APaddle* Paddle)
{
	Ball_eventHitPaddle_Parms Parms;
	Parms.Paddle=Paddle;
	ProcessEvent(FindFunctionChecked(NAME_ABall_HitPaddle),&Parms);
}
struct Z_Construct_UFunction_ABall_HitPaddle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Hit Response" },
		{ "ModuleRelativePath", "Ball.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Paddle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABall_HitPaddle_Statics::NewProp_Paddle = { "Paddle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ball_eventHitPaddle_Parms, Paddle), Z_Construct_UClass_APaddle_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABall_HitPaddle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABall_HitPaddle_Statics::NewProp_Paddle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABall_HitPaddle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABall_HitPaddle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABall, nullptr, "HitPaddle", nullptr, nullptr, Z_Construct_UFunction_ABall_HitPaddle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABall_HitPaddle_Statics::PropPointers), sizeof(Ball_eventHitPaddle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABall_HitPaddle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABall_HitPaddle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Ball_eventHitPaddle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABall_HitPaddle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABall_HitPaddle_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABall Function HitPaddle

// Begin Class ABall
void ABall::StaticRegisterNativesABall()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABall);
UClass* Z_Construct_UClass_ABall_NoRegister()
{
	return ABall::StaticClass();
}
struct Z_Construct_UClass_ABall_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Ball.h" },
		{ "ModuleRelativePath", "Ball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sprite_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sprite" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Ball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sphere_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Ball.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sprite;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sphere;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABall_HitBoundary, "HitBoundary" }, // 3626446470
		{ &Z_Construct_UFunction_ABall_HitPaddle, "HitPaddle" }, // 128151693
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABall>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABall_Statics::NewProp_Sprite = { "Sprite", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABall, Sprite), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sprite_MetaData), NewProp_Sprite_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABall_Statics::NewProp_Sphere = { "Sphere", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABall, Sphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sphere_MetaData), NewProp_Sphere_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABall_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABall_Statics::NewProp_Sprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABall_Statics::NewProp_Sphere,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABall_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABall_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Pong,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABall_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABall_Statics::ClassParams = {
	&ABall::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABall_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABall_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABall_Statics::Class_MetaDataParams), Z_Construct_UClass_ABall_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABall()
{
	if (!Z_Registration_Info_UClass_ABall.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABall.OuterSingleton, Z_Construct_UClass_ABall_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABall.OuterSingleton;
}
template<> PONG_API UClass* StaticClass<ABall>()
{
	return ABall::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABall);
ABall::~ABall() {}
// End Class ABall

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Nick_Documents_TechAcademy_Tech_Academy_cpp_and_Unreal_Engine_Projects_Pong_Source_Pong_Ball_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABall, ABall::StaticClass, TEXT("ABall"), &Z_Registration_Info_UClass_ABall, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABall), 4263945276U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Nick_Documents_TechAcademy_Tech_Academy_cpp_and_Unreal_Engine_Projects_Pong_Source_Pong_Ball_h_4053823180(TEXT("/Script/Pong"),
	Z_CompiledInDeferFile_FID_Users_Nick_Documents_TechAcademy_Tech_Academy_cpp_and_Unreal_Engine_Projects_Pong_Source_Pong_Ball_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Nick_Documents_TechAcademy_Tech_Academy_cpp_and_Unreal_Engine_Projects_Pong_Source_Pong_Ball_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
