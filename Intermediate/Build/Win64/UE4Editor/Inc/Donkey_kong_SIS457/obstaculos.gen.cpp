// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Donkey_kong_SIS457/obstaculos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeobstaculos() {}
// Cross Module References
	DONKEY_KONG_SIS457_API UClass* Z_Construct_UClass_Aobstaculos_NoRegister();
	DONKEY_KONG_SIS457_API UClass* Z_Construct_UClass_Aobstaculos();
	DONKEY_KONG_SIS457_API UClass* Z_Construct_UClass_Aenemigo();
	UPackage* Z_Construct_UPackage__Script_Donkey_kong_SIS457();
// End Cross Module References
	void Aobstaculos::StaticRegisterNativesAobstaculos()
	{
	}
	UClass* Z_Construct_UClass_Aobstaculos_NoRegister()
	{
		return Aobstaculos::StaticClass();
	}
	struct Z_Construct_UClass_Aobstaculos_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aobstaculos_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_Aenemigo,
		(UObject* (*)())Z_Construct_UPackage__Script_Donkey_kong_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aobstaculos_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "obstaculos.h" },
		{ "ModuleRelativePath", "obstaculos.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aobstaculos_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aobstaculos>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aobstaculos_Statics::ClassParams = {
		&Aobstaculos::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Aobstaculos_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aobstaculos_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aobstaculos()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aobstaculos_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aobstaculos, 885951479);
	template<> DONKEY_KONG_SIS457_API UClass* StaticClass<Aobstaculos>()
	{
		return Aobstaculos::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aobstaculos(Z_Construct_UClass_Aobstaculos, &Aobstaculos::StaticClass, TEXT("/Script/Donkey_kong_SIS457"), TEXT("Aobstaculos"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aobstaculos);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
