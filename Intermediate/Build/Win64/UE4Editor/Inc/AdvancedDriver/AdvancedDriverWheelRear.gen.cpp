// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedDriver/AdvancedDriverWheelRear.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedDriverWheelRear() {}
// Cross Module References
	ADVANCEDDRIVER_API UClass* Z_Construct_UClass_UAdvancedDriverWheelRear_NoRegister();
	ADVANCEDDRIVER_API UClass* Z_Construct_UClass_UAdvancedDriverWheelRear();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_AdvancedDriver();
// End Cross Module References
	void UAdvancedDriverWheelRear::StaticRegisterNativesUAdvancedDriverWheelRear()
	{
	}
	UClass* Z_Construct_UClass_UAdvancedDriverWheelRear_NoRegister()
	{
		return UAdvancedDriverWheelRear::StaticClass();
	}
	struct Z_Construct_UClass_UAdvancedDriverWheelRear_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvancedDriverWheelRear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedDriver,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedDriverWheelRear_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AdvancedDriverWheelRear.h" },
		{ "ModuleRelativePath", "AdvancedDriverWheelRear.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvancedDriverWheelRear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvancedDriverWheelRear>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvancedDriverWheelRear_Statics::ClassParams = {
		&UAdvancedDriverWheelRear::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAdvancedDriverWheelRear_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedDriverWheelRear_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvancedDriverWheelRear()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvancedDriverWheelRear_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvancedDriverWheelRear, 1645481078);
	template<> ADVANCEDDRIVER_API UClass* StaticClass<UAdvancedDriverWheelRear>()
	{
		return UAdvancedDriverWheelRear::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvancedDriverWheelRear(Z_Construct_UClass_UAdvancedDriverWheelRear, &UAdvancedDriverWheelRear::StaticClass, TEXT("/Script/AdvancedDriver"), TEXT("UAdvancedDriverWheelRear"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedDriverWheelRear);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
