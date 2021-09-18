// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ORTHAR_OrtharCharacter_generated_h
#error "OrtharCharacter.generated.h already included, missing '#pragma once' in OrtharCharacter.h"
#endif
#define ORTHAR_OrtharCharacter_generated_h

#define Orthar_Source_Orthar_OrtharCharacter_h_12_SPARSE_DATA
#define Orthar_Source_Orthar_OrtharCharacter_h_12_RPC_WRAPPERS
#define Orthar_Source_Orthar_OrtharCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Orthar_Source_Orthar_OrtharCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOrtharCharacter(); \
	friend struct Z_Construct_UClass_AOrtharCharacter_Statics; \
public: \
	DECLARE_CLASS(AOrtharCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Orthar"), NO_API) \
	DECLARE_SERIALIZER(AOrtharCharacter)


#define Orthar_Source_Orthar_OrtharCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAOrtharCharacter(); \
	friend struct Z_Construct_UClass_AOrtharCharacter_Statics; \
public: \
	DECLARE_CLASS(AOrtharCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Orthar"), NO_API) \
	DECLARE_SERIALIZER(AOrtharCharacter)


#define Orthar_Source_Orthar_OrtharCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOrtharCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOrtharCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOrtharCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOrtharCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOrtharCharacter(AOrtharCharacter&&); \
	NO_API AOrtharCharacter(const AOrtharCharacter&); \
public:


#define Orthar_Source_Orthar_OrtharCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOrtharCharacter(AOrtharCharacter&&); \
	NO_API AOrtharCharacter(const AOrtharCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOrtharCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOrtharCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOrtharCharacter)


#define Orthar_Source_Orthar_OrtharCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AOrtharCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AOrtharCharacter, FollowCamera); }


#define Orthar_Source_Orthar_OrtharCharacter_h_9_PROLOG
#define Orthar_Source_Orthar_OrtharCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Orthar_Source_Orthar_OrtharCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Orthar_Source_Orthar_OrtharCharacter_h_12_SPARSE_DATA \
	Orthar_Source_Orthar_OrtharCharacter_h_12_RPC_WRAPPERS \
	Orthar_Source_Orthar_OrtharCharacter_h_12_INCLASS \
	Orthar_Source_Orthar_OrtharCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Orthar_Source_Orthar_OrtharCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Orthar_Source_Orthar_OrtharCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Orthar_Source_Orthar_OrtharCharacter_h_12_SPARSE_DATA \
	Orthar_Source_Orthar_OrtharCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Orthar_Source_Orthar_OrtharCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Orthar_Source_Orthar_OrtharCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ORTHAR_API UClass* StaticClass<class AOrtharCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Orthar_Source_Orthar_OrtharCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
