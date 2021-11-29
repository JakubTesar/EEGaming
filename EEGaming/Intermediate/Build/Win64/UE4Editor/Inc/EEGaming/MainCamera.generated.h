// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EEGAMING_MainCamera_generated_h
#error "MainCamera.generated.h already included, missing '#pragma once' in MainCamera.h"
#endif
#define EEGAMING_MainCamera_generated_h

#define EEGaming_Source_EEGaming_MainCamera_h_14_SPARSE_DATA
#define EEGaming_Source_EEGaming_MainCamera_h_14_RPC_WRAPPERS
#define EEGaming_Source_EEGaming_MainCamera_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define EEGaming_Source_EEGaming_MainCamera_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainCamera(); \
	friend struct Z_Construct_UClass_AMainCamera_Statics; \
public: \
	DECLARE_CLASS(AMainCamera, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EEGaming"), NO_API) \
	DECLARE_SERIALIZER(AMainCamera)


#define EEGaming_Source_EEGaming_MainCamera_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMainCamera(); \
	friend struct Z_Construct_UClass_AMainCamera_Statics; \
public: \
	DECLARE_CLASS(AMainCamera, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EEGaming"), NO_API) \
	DECLARE_SERIALIZER(AMainCamera)


#define EEGaming_Source_EEGaming_MainCamera_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainCamera(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainCamera) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCamera); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCamera); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCamera(AMainCamera&&); \
	NO_API AMainCamera(const AMainCamera&); \
public:


#define EEGaming_Source_EEGaming_MainCamera_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCamera(AMainCamera&&); \
	NO_API AMainCamera(const AMainCamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCamera); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCamera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainCamera)


#define EEGaming_Source_EEGaming_MainCamera_h_14_PRIVATE_PROPERTY_OFFSET
#define EEGaming_Source_EEGaming_MainCamera_h_11_PROLOG
#define EEGaming_Source_EEGaming_MainCamera_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EEGaming_Source_EEGaming_MainCamera_h_14_PRIVATE_PROPERTY_OFFSET \
	EEGaming_Source_EEGaming_MainCamera_h_14_SPARSE_DATA \
	EEGaming_Source_EEGaming_MainCamera_h_14_RPC_WRAPPERS \
	EEGaming_Source_EEGaming_MainCamera_h_14_INCLASS \
	EEGaming_Source_EEGaming_MainCamera_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EEGaming_Source_EEGaming_MainCamera_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EEGaming_Source_EEGaming_MainCamera_h_14_PRIVATE_PROPERTY_OFFSET \
	EEGaming_Source_EEGaming_MainCamera_h_14_SPARSE_DATA \
	EEGaming_Source_EEGaming_MainCamera_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	EEGaming_Source_EEGaming_MainCamera_h_14_INCLASS_NO_PURE_DECLS \
	EEGaming_Source_EEGaming_MainCamera_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EEGAMING_API UClass* StaticClass<class AMainCamera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EEGaming_Source_EEGaming_MainCamera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
