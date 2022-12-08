// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometrySB/GeometrySBGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometrySBGameModeBase() {}
// Cross Module References
	GEOMETRYSB_API UClass* Z_Construct_UClass_AGeometrySBGameModeBase_NoRegister();
	GEOMETRYSB_API UClass* Z_Construct_UClass_AGeometrySBGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GeometrySB();
// End Cross Module References
	void AGeometrySBGameModeBase::StaticRegisterNativesAGeometrySBGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AGeometrySBGameModeBase_NoRegister()
	{
		return AGeometrySBGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGeometrySBGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeometrySBGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometrySB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometrySBGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GeometrySBGameModeBase.h" },
		{ "ModuleRelativePath", "GeometrySBGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeometrySBGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeometrySBGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGeometrySBGameModeBase_Statics::ClassParams = {
		&AGeometrySBGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGeometrySBGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometrySBGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeometrySBGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGeometrySBGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGeometrySBGameModeBase, 3833324500);
	template<> GEOMETRYSB_API UClass* StaticClass<AGeometrySBGameModeBase>()
	{
		return AGeometrySBGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGeometrySBGameModeBase(Z_Construct_UClass_AGeometrySBGameModeBase, &AGeometrySBGameModeBase::StaticClass, TEXT("/Script/GeometrySB"), TEXT("AGeometrySBGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeometrySBGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
