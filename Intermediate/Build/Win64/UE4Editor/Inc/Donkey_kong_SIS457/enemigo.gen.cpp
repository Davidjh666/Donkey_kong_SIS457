// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Donkey_kong_SIS457/enemigo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeenemigo() {}
// Cross Module References
	DONKEY_KONG_SIS457_API UClass* Z_Construct_UClass_Aenemigo_NoRegister();
	DONKEY_KONG_SIS457_API UClass* Z_Construct_UClass_Aenemigo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Donkey_kong_SIS457();
// End Cross Module References
	void Aenemigo::StaticRegisterNativesAenemigo()
	{
	}
	UClass* Z_Construct_UClass_Aenemigo_NoRegister()
	{
		return Aenemigo::StaticClass();
	}
	struct Z_Construct_UClass_Aenemigo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aenemigo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Donkey_kong_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemigo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "enemigo.h" },
		{ "ModuleRelativePath", "enemigo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aenemigo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aenemigo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aenemigo_Statics::ClassParams = {
		&Aenemigo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Aenemigo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemigo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aenemigo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aenemigo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aenemigo, 2240979412);
	template<> DONKEY_KONG_SIS457_API UClass* StaticClass<Aenemigo>()
	{
		return Aenemigo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aenemigo(Z_Construct_UClass_Aenemigo, &Aenemigo::StaticClass, TEXT("/Script/Donkey_kong_SIS457"), TEXT("Aenemigo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aenemigo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
