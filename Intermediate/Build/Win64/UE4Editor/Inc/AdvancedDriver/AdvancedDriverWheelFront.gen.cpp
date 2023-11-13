// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedDriver/AdvancedDriverWheelFront.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedDriverWheelFront() {}
// Cross Module References
	ADVANCEDDRIVER_API UClass* Z_Construct_UClass_UAdvancedDriverWheelFront_NoRegister();
	ADVANCEDDRIVER_API UClass* Z_Construct_UClass_UAdvancedDriverWheelFront();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_AdvancedDriver();
// End Cross Module References
	void UAdvancedDriverWheelFront::StaticRegisterNativesUAdvancedDriverWheelFront()
	{
	}
	UClass* Z_Construct_UClass_UAdvancedDriverWheelFront_NoRegister()
	{
		return UAdvancedDriverWheelFront::StaticClass();
	}
	struct Z_Construct_UClass_UAdvancedDriverWheelFront_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvancedDriverWheelFront_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedDriver,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedDriverWheelFront_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AdvancedDriverWheelFront.h" },
		{ "ModuleRelativePath", "AdvancedDriverWheelFront.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvancedDriverWheelFront_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvancedDriverWheelFront>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvancedDriverWheelFront_Statics::ClassParams = {
		&UAdvancedDriverWheelFront::StaticClass,
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
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAdvancedDriverWheelFront_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedDriverWheelFront_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvancedDriverWheelFront()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvancedDriverWheelFront_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvancedDriverWheelFront, 2259119837);
	template<> ADVANCEDDRIVER_API UClass* StaticClass<UAdvancedDriverWheelFront>()
	{
		return UAdvancedDriverWheelFront::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvancedDriverWheelFront(Z_Construct_UClass_UAdvancedDriverWheelFront, &UAdvancedDriverWheelFront::StaticClass, TEXT("/Script/AdvancedDriver"), TEXT("UAdvancedDriverWheelFront"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedDriverWheelFront);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
