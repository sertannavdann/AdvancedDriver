// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedDriver/AdvancedDriverGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedDriverGameMode() {}
// Cross Module References
	ADVANCEDDRIVER_API UClass* Z_Construct_UClass_AAdvancedDriverGameMode_NoRegister();
	ADVANCEDDRIVER_API UClass* Z_Construct_UClass_AAdvancedDriverGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AdvancedDriver();
// End Cross Module References
	void AAdvancedDriverGameMode::StaticRegisterNativesAAdvancedDriverGameMode()
	{
	}
	UClass* Z_Construct_UClass_AAdvancedDriverGameMode_NoRegister()
	{
		return AAdvancedDriverGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAdvancedDriverGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdvancedDriverGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedDriver,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvancedDriverGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AdvancedDriverGameMode.h" },
		{ "ModuleRelativePath", "AdvancedDriverGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdvancedDriverGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdvancedDriverGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAdvancedDriverGameMode_Statics::ClassParams = {
		&AAdvancedDriverGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAdvancedDriverGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedDriverGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdvancedDriverGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAdvancedDriverGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAdvancedDriverGameMode, 3370957111);
	template<> ADVANCEDDRIVER_API UClass* StaticClass<AAdvancedDriverGameMode>()
	{
		return AAdvancedDriverGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdvancedDriverGameMode(Z_Construct_UClass_AAdvancedDriverGameMode, &AAdvancedDriverGameMode::StaticClass, TEXT("/Script/AdvancedDriver"), TEXT("AAdvancedDriverGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdvancedDriverGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
