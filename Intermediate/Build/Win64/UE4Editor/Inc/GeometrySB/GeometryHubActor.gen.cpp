// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometrySB/Public/GeometryHubActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryHubActor() {}
// Cross Module References
	GEOMETRYSB_API UClass* Z_Construct_UClass_AGeometryHubActor_NoRegister();
	GEOMETRYSB_API UClass* Z_Construct_UClass_AGeometryHubActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GeometrySB();
// End Cross Module References
	void AGeometryHubActor::StaticRegisterNativesAGeometryHubActor()
	{
	}
	UClass* Z_Construct_UClass_AGeometryHubActor_NoRegister()
	{
		return AGeometryHubActor::StaticClass();
	}
	struct Z_Construct_UClass_AGeometryHubActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeometryHubActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometrySB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryHubActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryHubActor.h" },
		{ "ModuleRelativePath", "Public/GeometryHubActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeometryHubActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeometryHubActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGeometryHubActor_Statics::ClassParams = {
		&AGeometryHubActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGeometryHubActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryHubActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeometryHubActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGeometryHubActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGeometryHubActor, 2015631100);
	template<> GEOMETRYSB_API UClass* StaticClass<AGeometryHubActor>()
	{
		return AGeometryHubActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGeometryHubActor(Z_Construct_UClass_AGeometryHubActor, &AGeometryHubActor::StaticClass, TEXT("/Script/GeometrySB"), TEXT("AGeometryHubActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeometryHubActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
