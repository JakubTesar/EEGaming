// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EEGaming/FoodOre1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoodOre1() {}
// Cross Module References
	EEGAMING_API UClass* Z_Construct_UClass_AFoodOre1_NoRegister();
	EEGAMING_API UClass* Z_Construct_UClass_AFoodOre1();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_EEGaming();
// End Cross Module References
	void AFoodOre1::StaticRegisterNativesAFoodOre1()
	{
	}
	UClass* Z_Construct_UClass_AFoodOre1_NoRegister()
	{
		return AFoodOre1::StaticClass();
	}
	struct Z_Construct_UClass_AFoodOre1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFoodOre1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EEGaming,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFoodOre1_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FoodOre1.h" },
		{ "ModuleRelativePath", "FoodOre1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFoodOre1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFoodOre1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFoodOre1_Statics::ClassParams = {
		&AFoodOre1::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFoodOre1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFoodOre1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFoodOre1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFoodOre1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFoodOre1, 2621670244);
	template<> EEGAMING_API UClass* StaticClass<AFoodOre1>()
	{
		return AFoodOre1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFoodOre1(Z_Construct_UClass_AFoodOre1, &AFoodOre1::StaticClass, TEXT("/Script/EEGaming"), TEXT("AFoodOre1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFoodOre1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
