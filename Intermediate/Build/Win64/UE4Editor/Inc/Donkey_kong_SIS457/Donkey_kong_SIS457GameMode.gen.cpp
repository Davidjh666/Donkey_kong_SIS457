// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Donkey_kong_SIS457/Donkey_kong_SIS457GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDonkey_kong_SIS457GameMode() {}
// Cross Module References
	DONKEY_KONG_SIS457_API UClass* Z_Construct_UClass_ADonkey_kong_SIS457GameMode_NoRegister();
	DONKEY_KONG_SIS457_API UClass* Z_Construct_UClass_ADonkey_kong_SIS457GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Donkey_kong_SIS457();
// End Cross Module References
	void ADonkey_kong_SIS457GameMode::StaticRegisterNativesADonkey_kong_SIS457GameMode()
	{
	}
	UClass* Z_Construct_UClass_ADonkey_kong_SIS457GameMode_NoRegister()
	{
		return ADonkey_kong_SIS457GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADonkey_kong_SIS457GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADonkey_kong_SIS457GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Donkey_kong_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonkey_kong_SIS457GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Donkey_kong_SIS457GameMode.h" },
		{ "ModuleRelativePath", "Donkey_kong_SIS457GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADonkey_kong_SIS457GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADonkey_kong_SIS457GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADonkey_kong_SIS457GameMode_Statics::ClassParams = {
		&ADonkey_kong_SIS457GameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADonkey_kong_SIS457GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADonkey_kong_SIS457GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADonkey_kong_SIS457GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADonkey_kong_SIS457GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADonkey_kong_SIS457GameMode, 3444727279);
	template<> DONKEY_KONG_SIS457_API UClass* StaticClass<ADonkey_kong_SIS457GameMode>()
	{
		return ADonkey_kong_SIS457GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADonkey_kong_SIS457GameMode(Z_Construct_UClass_ADonkey_kong_SIS457GameMode, &ADonkey_kong_SIS457GameMode::StaticClass, TEXT("/Script/Donkey_kong_SIS457"), TEXT("ADonkey_kong_SIS457GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADonkey_kong_SIS457GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
