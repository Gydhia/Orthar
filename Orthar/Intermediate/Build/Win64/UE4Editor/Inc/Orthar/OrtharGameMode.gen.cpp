// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Orthar/OrtharGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrtharGameMode() {}
// Cross Module References
	ORTHAR_API UClass* Z_Construct_UClass_AOrtharGameMode_NoRegister();
	ORTHAR_API UClass* Z_Construct_UClass_AOrtharGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Orthar();
// End Cross Module References
	void AOrtharGameMode::StaticRegisterNativesAOrtharGameMode()
	{
	}
	UClass* Z_Construct_UClass_AOrtharGameMode_NoRegister()
	{
		return AOrtharGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AOrtharGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOrtharGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Orthar,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrtharGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "OrtharGameMode.h" },
		{ "ModuleRelativePath", "OrtharGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOrtharGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOrtharGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOrtharGameMode_Statics::ClassParams = {
		&AOrtharGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AOrtharGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOrtharGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOrtharGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOrtharGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOrtharGameMode, 4138134711);
	template<> ORTHAR_API UClass* StaticClass<AOrtharGameMode>()
	{
		return AOrtharGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOrtharGameMode(Z_Construct_UClass_AOrtharGameMode, &AOrtharGameMode::StaticClass, TEXT("/Script/Orthar"), TEXT("AOrtharGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOrtharGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
