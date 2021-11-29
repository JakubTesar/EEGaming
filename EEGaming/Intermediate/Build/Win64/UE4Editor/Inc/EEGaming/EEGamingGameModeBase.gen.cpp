// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EEGaming/EEGamingGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEGamingGameModeBase() {}
// Cross Module References
	EEGAMING_API UClass* Z_Construct_UClass_AEEGamingGameModeBase_NoRegister();
	EEGAMING_API UClass* Z_Construct_UClass_AEEGamingGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_EEGaming();
// End Cross Module References
	void AEEGamingGameModeBase::StaticRegisterNativesAEEGamingGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AEEGamingGameModeBase_NoRegister()
	{
		return AEEGamingGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AEEGamingGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEEGamingGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EEGaming,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEEGamingGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "EEGamingGameModeBase.h" },
		{ "ModuleRelativePath", "EEGamingGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEEGamingGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEEGamingGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEEGamingGameModeBase_Statics::ClassParams = {
		&AEEGamingGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AEEGamingGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEEGamingGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEEGamingGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEEGamingGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEEGamingGameModeBase, 3020397344);
	template<> EEGAMING_API UClass* StaticClass<AEEGamingGameModeBase>()
	{
		return AEEGamingGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEEGamingGameModeBase(Z_Construct_UClass_AEEGamingGameModeBase, &AEEGamingGameModeBase::StaticClass, TEXT("/Script/EEGaming"), TEXT("AEEGamingGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEEGamingGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
