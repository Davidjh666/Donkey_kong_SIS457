// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Donkey_kong_SIS457/plataforma_movil.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeplataforma_movil() {}
// Cross Module References
	DONKEY_KONG_SIS457_API UClass* Z_Construct_UClass_Aplataforma_movil_NoRegister();
	DONKEY_KONG_SIS457_API UClass* Z_Construct_UClass_Aplataforma_movil();
	DONKEY_KONG_SIS457_API UClass* Z_Construct_UClass_Aobstaculos();
	UPackage* Z_Construct_UPackage__Script_Donkey_kong_SIS457();
// End Cross Module References
	void Aplataforma_movil::StaticRegisterNativesAplataforma_movil()
	{
	}
	UClass* Z_Construct_UClass_Aplataforma_movil_NoRegister()
	{
		return Aplataforma_movil::StaticClass();
	}
	struct Z_Construct_UClass_Aplataforma_movil_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aplataforma_movil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_Aobstaculos,
		(UObject* (*)())Z_Construct_UPackage__Script_Donkey_kong_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aplataforma_movil_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "plataforma_movil.h" },
		{ "ModuleRelativePath", "plataforma_movil.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aplataforma_movil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aplataforma_movil>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aplataforma_movil_Statics::ClassParams = {
		&Aplataforma_movil::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Aplataforma_movil_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aplataforma_movil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aplataforma_movil()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aplataforma_movil_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aplataforma_movil, 3392438943);
	template<> DONKEY_KONG_SIS457_API UClass* StaticClass<Aplataforma_movil>()
	{
		return Aplataforma_movil::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aplataforma_movil(Z_Construct_UClass_Aplataforma_movil, &Aplataforma_movil::StaticClass, TEXT("/Script/Donkey_kong_SIS457"), TEXT("Aplataforma_movil"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aplataforma_movil);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
