// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Donkey_kong_SIS457/picos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodepicos() {}
// Cross Module References
	DONKEY_KONG_SIS457_API UClass* Z_Construct_UClass_Apicos_NoRegister();
	DONKEY_KONG_SIS457_API UClass* Z_Construct_UClass_Apicos();
	DONKEY_KONG_SIS457_API UClass* Z_Construct_UClass_Aobstaculos();
	UPackage* Z_Construct_UPackage__Script_Donkey_kong_SIS457();
// End Cross Module References
	void Apicos::StaticRegisterNativesApicos()
	{
	}
	UClass* Z_Construct_UClass_Apicos_NoRegister()
	{
		return Apicos::StaticClass();
	}
	struct Z_Construct_UClass_Apicos_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Apicos_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_Aobstaculos,
		(UObject* (*)())Z_Construct_UPackage__Script_Donkey_kong_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Apicos_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "picos.h" },
		{ "ModuleRelativePath", "picos.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Apicos_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Apicos>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Apicos_Statics::ClassParams = {
		&Apicos::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Apicos_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Apicos_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Apicos()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Apicos_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Apicos, 10349788);
	template<> DONKEY_KONG_SIS457_API UClass* StaticClass<Apicos>()
	{
		return Apicos::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Apicos(Z_Construct_UClass_Apicos, &Apicos::StaticClass, TEXT("/Script/Donkey_kong_SIS457"), TEXT("Apicos"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Apicos);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
