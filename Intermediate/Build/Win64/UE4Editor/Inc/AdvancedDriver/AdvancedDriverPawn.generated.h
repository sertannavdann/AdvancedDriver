// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVANCEDDRIVER_AdvancedDriverPawn_generated_h
#error "AdvancedDriverPawn.generated.h already included, missing '#pragma once' in AdvancedDriverPawn.h"
#endif
#define ADVANCEDDRIVER_AdvancedDriverPawn_generated_h

#define AdvancedDriver_Source_AdvancedDriver_AdvancedDriverPawn_h_21_SPARSE_DATA
#define AdvancedDriver_Source_AdvancedDriver_AdvancedDriverPawn_h_21_RPC_WRAPPERS
#define AdvancedDriver_Source_AdvancedDriver_AdvancedDriverPawn_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define AdvancedDriver_Source_AdvancedDriver_AdvancedDriverPawn_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAdvancedDriverPawn(); \
	friend struct Z_Construct_UClass_AAdvancedDriverPawn_Statics; \
public: \
	DECLARE_CLASS(AAdvancedDriverPawn, AWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedDriver"), NO_API) \
	DECLARE_SERIALIZER(AAdvancedDriverPawn)


#define AdvancedDriver_Source_AdvancedDriver_AdvancedDriverPawn_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAAdvancedDriverPawn(); \
	friend struct Z_Construct_UClass_AAdvancedDriverPawn_Statics; \
public: \
	DECLARE_CLASS(AAdvancedDriverPawn, AWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedDriver"), NO_API) \
	DECLARE_SERIALIZER(AAdvancedDriverPawn)


#define AdvancedDriver_Source_AdvancedDriver_AdvancedDriverPawn_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAdvancedDriverPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdvancedDriverPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvancedDriverPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvancedDriverPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvancedDriverPawn(AAdvancedDriverPawn&&); \
	NO_API AAdvancedDriverPawn(const AAdvancedDriverPawn&); \
public:


#define AdvancedDriver_Source_AdvancedDriver_AdvancedDriverPawn_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdvancedDriverPawn(AAdvancedDriverPawn&&); \
	NO_API AAdvancedDriverPawn(const AAdvancedDriverPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdvancedDriverPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdvancedDriverPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAdvancedDriverPawn)


#define AdvancedDriver_Source_AdvancedDriver_AdvancedDriverPawn_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(AAdvancedDriverPawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AAdvancedDriverPawn, Camera); } \
	FORCEINLINE static uint32 __PPO__InternalCameraBase() { return STRUCT_OFFSET(AAdvancedDriverPawn, InternalCameraBase); } \
	FORCEINLINE static uint32 __PPO__InternalCamera() { return STRUCT_OFFSET(AAdvancedDriverPawn, InternalCamera); } \
	FORCEINLINE static uint32 __PPO__InCarSpeed() { return STRUCT_OFFSET(AAdvancedDriverPawn, InCarSpeed); } \
	FORCEINLINE static uint32 __PPO__InCarGear() { return STRUCT_OFFSET(AAdvancedDriverPawn, InCarGear); } \
	FORCEINLINE static uint32 __PPO__EngineSoundComponent() { return STRUCT_OFFSET(AAdvancedDriverPawn, EngineSoundComponent); }


#define AdvancedDriver_Source_AdvancedDriver_AdvancedDriverPawn_h_18_PROLOG
#define AdvancedDriver_Source_AdvancedDriver_AdvancedDriverPawn_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdvancedDriver_Source_AdvancedDriver_AdvancedDriverPawn_h_21_PRIVATE_PROPERTY_OFFSET \
	AdvancedDriver_Source_AdvancedDriver_AdvancedDriverPawn_h_21_SPARSE_DATA \
	AdvancedDriver_Source_AdvancedDriver_AdvancedDriverPawn_h_21_RPC_WRAPPERS \
	AdvancedDriver_Source_AdvancedDriver_AdvancedDriverPawn_h_21_INCLASS \
	AdvancedDriver_Source_AdvancedDriver_AdvancedDriverPawn_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AdvancedDriver_Source_AdvancedDriver_AdvancedDriverPawn_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdvancedDriver_Source_AdvancedDriver_AdvancedDriverPawn_h_21_PRIVATE_PROPERTY_OFFSET \
	AdvancedDriver_Source_AdvancedDriver_AdvancedDriverPawn_h_21_SPARSE_DATA \
	AdvancedDriver_Source_AdvancedDriver_AdvancedDriverPawn_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	AdvancedDriver_Source_AdvancedDriver_AdvancedDriverPawn_h_21_INCLASS_NO_PURE_DECLS \
	AdvancedDriver_Source_AdvancedDriver_AdvancedDriverPawn_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDDRIVER_API UClass* StaticClass<class AAdvancedDriverPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AdvancedDriver_Source_AdvancedDriver_AdvancedDriverPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
