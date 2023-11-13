// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedDriver/AdvancedDriverPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedDriverPawn() {}
// Cross Module References
	ADVANCEDDRIVER_API UClass* Z_Construct_UClass_AAdvancedDriverPawn_NoRegister();
	ADVANCEDDRIVER_API UClass* Z_Construct_UClass_AAdvancedDriverPawn();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehicle();
	UPackage* Z_Construct_UPackage__Script_AdvancedDriver();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void AAdvancedDriverPawn::StaticRegisterNativesAAdvancedDriverPawn()
	{
	}
	UClass* Z_Construct_UClass_AAdvancedDriverPawn_NoRegister()
	{
		return AAdvancedDriverPawn::StaticClass();
	}
	struct Z_Construct_UClass_AAdvancedDriverPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalCameraBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InternalCameraBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InternalCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCarSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCarSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCarGear_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCarGear;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineSoundComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EngineSoundComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedDisplayString_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_SpeedDisplayString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GearDisplayString_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_GearDisplayString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GearDisplayColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GearDisplayColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GearDisplayReverseColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GearDisplayReverseColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInReverseGear_MetaData[];
#endif
		static void NewProp_bInReverseGear_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInReverseGear;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnImpulseStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnImpulseStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSpeedGearVisible_MetaData[];
#endif
		static void NewProp_bIsSpeedGearVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSpeedGearVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTurboActive_MetaData[];
#endif
		static void NewProp_bIsTurboActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTurboActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurboTorqueMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurboTorqueMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurboCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurboCharge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurboBoost_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurboBoost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurboStartRPM_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurboStartRPM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurboEndRPM_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurboEndRPM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StabilityControlStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StabilityControlStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DriverWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DriverWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DriverWidgetInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DriverWidgetInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdvancedDriverPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWheeledVehicle,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedDriver,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvancedDriverPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AdvancedDriverPawn.h" },
		{ "ModuleRelativePath", "AdvancedDriverPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_SpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Spring arm that will offset the camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AdvancedDriverPawn.h" },
		{ "ToolTip", "Spring arm that will offset the camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvancedDriverPawn, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera component that will be our viewpoint */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AdvancedDriverPawn.h" },
		{ "ToolTip", "Camera component that will be our viewpoint" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvancedDriverPawn, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_InternalCameraBase_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** SCene component for the In-Car view origin */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AdvancedDriverPawn.h" },
		{ "ToolTip", "SCene component for the In-Car view origin" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_InternalCameraBase = { "InternalCameraBase", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvancedDriverPawn, InternalCameraBase), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_InternalCameraBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_InternalCameraBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_InternalCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera component for the In-Car view */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AdvancedDriverPawn.h" },
		{ "ToolTip", "Camera component for the In-Car view" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_InternalCamera = { "InternalCamera", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvancedDriverPawn, InternalCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_InternalCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_InternalCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_InCarSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Display" },
		{ "Comment", "/** Text component for the In-Car speed */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AdvancedDriverPawn.h" },
		{ "ToolTip", "Text component for the In-Car speed" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_InCarSpeed = { "InCarSpeed", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvancedDriverPawn, InCarSpeed), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_InCarSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_InCarSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_InCarGear_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Display" },
		{ "Comment", "/** Text component for the In-Car gear */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AdvancedDriverPawn.h" },
		{ "ToolTip", "Text component for the In-Car gear" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_InCarGear = { "InCarGear", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvancedDriverPawn, InCarGear), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_InCarGear_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_InCarGear_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_EngineSoundComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Display" },
		{ "Comment", "/** Audio component for the engine sound */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AdvancedDriverPawn.h" },
		{ "ToolTip", "Audio component for the engine sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_EngineSoundComponent = { "EngineSoundComponent", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvancedDriverPawn, EngineSoundComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_EngineSoundComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_EngineSoundComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_SpeedDisplayString_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** The current speed as a string eg 10 km/h */" },
		{ "ModuleRelativePath", "AdvancedDriverPawn.h" },
		{ "ToolTip", "The current speed as a string eg 10 km/h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_SpeedDisplayString = { "SpeedDisplayString", nullptr, (EPropertyFlags)0x0010000000030015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvancedDriverPawn, SpeedDisplayString), METADATA_PARAMS(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_SpeedDisplayString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_SpeedDisplayString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_GearDisplayString_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** The current gear as a string (R,N, 1,2 etc) */" },
		{ "ModuleRelativePath", "AdvancedDriverPawn.h" },
		{ "ToolTip", "The current gear as a string (R,N, 1,2 etc)" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_GearDisplayString = { "GearDisplayString", nullptr, (EPropertyFlags)0x0010000000030015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvancedDriverPawn, GearDisplayString), METADATA_PARAMS(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_GearDisplayString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_GearDisplayString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_GearDisplayColor_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** The color of the incar gear text in forward gears */" },
		{ "ModuleRelativePath", "AdvancedDriverPawn.h" },
		{ "ToolTip", "The color of the incar gear text in forward gears" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_GearDisplayColor = { "GearDisplayColor", nullptr, (EPropertyFlags)0x0010000000030015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvancedDriverPawn, GearDisplayColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_GearDisplayColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_GearDisplayColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_GearDisplayReverseColor_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** The color of the incar gear text when in reverse */" },
		{ "ModuleRelativePath", "AdvancedDriverPawn.h" },
		{ "ToolTip", "The color of the incar gear text when in reverse" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_GearDisplayReverseColor = { "GearDisplayReverseColor", nullptr, (EPropertyFlags)0x0010000000030015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvancedDriverPawn, GearDisplayReverseColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_GearDisplayReverseColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_GearDisplayReverseColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_bInReverseGear_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Are we in reverse gear */" },
		{ "ModuleRelativePath", "AdvancedDriverPawn.h" },
		{ "ToolTip", "Are we in reverse gear" },
	};
#endif
	void Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_bInReverseGear_SetBit(void* Obj)
	{
		((AAdvancedDriverPawn*)Obj)->bInReverseGear = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_bInReverseGear = { "bInReverseGear", nullptr, (EPropertyFlags)0x0010000000030015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAdvancedDriverPawn), &Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_bInReverseGear_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_bInReverseGear_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_bInReverseGear_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_JumpForce_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Jump" },
		{ "Comment", "/* Force of the Jump */" },
		{ "ModuleRelativePath", "AdvancedDriverPawn.h" },
		{ "ToolTip", "Force of the Jump" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_JumpForce = { "JumpForce", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvancedDriverPawn, JumpForce), METADATA_PARAMS(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_JumpForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_JumpForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_TurnImpulseStrength_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Jump" },
		{ "Comment", "/* Turn Impulse */" },
		{ "ModuleRelativePath", "AdvancedDriverPawn.h" },
		{ "ToolTip", "Turn Impulse" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_TurnImpulseStrength = { "TurnImpulseStrength", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvancedDriverPawn, TurnImpulseStrength), METADATA_PARAMS(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_TurnImpulseStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_TurnImpulseStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_bIsSpeedGearVisible_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "AdvancedDriverPawn.h" },
	};
#endif
	void Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_bIsSpeedGearVisible_SetBit(void* Obj)
	{
		((AAdvancedDriverPawn*)Obj)->bIsSpeedGearVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_bIsSpeedGearVisible = { "bIsSpeedGearVisible", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAdvancedDriverPawn), &Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_bIsSpeedGearVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_bIsSpeedGearVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_bIsSpeedGearVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_bIsTurboActive_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Turbo" },
		{ "ModuleRelativePath", "AdvancedDriverPawn.h" },
	};
#endif
	void Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_bIsTurboActive_SetBit(void* Obj)
	{
		((AAdvancedDriverPawn*)Obj)->bIsTurboActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_bIsTurboActive = { "bIsTurboActive", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAdvancedDriverPawn), &Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_bIsTurboActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_bIsTurboActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_bIsTurboActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_TurboTorqueMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Turbo" },
		{ "ModuleRelativePath", "AdvancedDriverPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_TurboTorqueMultiplier = { "TurboTorqueMultiplier", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvancedDriverPawn, TurboTorqueMultiplier), METADATA_PARAMS(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_TurboTorqueMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_TurboTorqueMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_TurboCharge_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Turbo" },
		{ "ModuleRelativePath", "AdvancedDriverPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_TurboCharge = { "TurboCharge", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvancedDriverPawn, TurboCharge), METADATA_PARAMS(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_TurboCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_TurboCharge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_TurboBoost_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Turbo" },
		{ "ModuleRelativePath", "AdvancedDriverPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_TurboBoost = { "TurboBoost", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvancedDriverPawn, TurboBoost), METADATA_PARAMS(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_TurboBoost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_TurboBoost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_TurboStartRPM_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Turbo" },
		{ "ModuleRelativePath", "AdvancedDriverPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_TurboStartRPM = { "TurboStartRPM", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvancedDriverPawn, TurboStartRPM), METADATA_PARAMS(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_TurboStartRPM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_TurboStartRPM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_TurboEndRPM_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Turbo" },
		{ "ModuleRelativePath", "AdvancedDriverPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_TurboEndRPM = { "TurboEndRPM", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvancedDriverPawn, TurboEndRPM), METADATA_PARAMS(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_TurboEndRPM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_TurboEndRPM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_StabilityControlStrength_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Turbo" },
		{ "ModuleRelativePath", "AdvancedDriverPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_StabilityControlStrength = { "StabilityControlStrength", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvancedDriverPawn, StabilityControlStrength), METADATA_PARAMS(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_StabilityControlStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_StabilityControlStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_DriverWidgetClass_MetaData[] = {
		{ "Category", "HUD" },
		{ "Comment", "// Your UMG Widget Blueprint class\n" },
		{ "ModuleRelativePath", "AdvancedDriverPawn.h" },
		{ "ToolTip", "Your UMG Widget Blueprint class" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_DriverWidgetClass = { "DriverWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvancedDriverPawn, DriverWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_DriverWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_DriverWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_DriverWidgetInstance_MetaData[] = {
		{ "Comment", "// The instance of the created widget\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AdvancedDriverPawn.h" },
		{ "ToolTip", "The instance of the created widget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_DriverWidgetInstance = { "DriverWidgetInstance", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvancedDriverPawn, DriverWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_DriverWidgetInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_DriverWidgetInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAdvancedDriverPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_SpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_InternalCameraBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_InternalCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_InCarSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_InCarGear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_EngineSoundComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_SpeedDisplayString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_GearDisplayString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_GearDisplayColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_GearDisplayReverseColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_bInReverseGear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_JumpForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_TurnImpulseStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_bIsSpeedGearVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_bIsTurboActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_TurboTorqueMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_TurboCharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_TurboBoost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_TurboStartRPM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_TurboEndRPM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_StabilityControlStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_DriverWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedDriverPawn_Statics::NewProp_DriverWidgetInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdvancedDriverPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdvancedDriverPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAdvancedDriverPawn_Statics::ClassParams = {
		&AAdvancedDriverPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAdvancedDriverPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedDriverPawn_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAdvancedDriverPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedDriverPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdvancedDriverPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAdvancedDriverPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAdvancedDriverPawn, 2865111439);
	template<> ADVANCEDDRIVER_API UClass* StaticClass<AAdvancedDriverPawn>()
	{
		return AAdvancedDriverPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdvancedDriverPawn(Z_Construct_UClass_AAdvancedDriverPawn, &AAdvancedDriverPawn::StaticClass, TEXT("/Script/AdvancedDriver"), TEXT("AAdvancedDriverPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdvancedDriverPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
