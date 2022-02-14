// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGameCourse/ShooterGameCourseGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterGameCourseGameModeBase() {}
// Cross Module References
	SHOOTERGAMECOURSE_API UClass* Z_Construct_UClass_AShooterGameCourseGameModeBase_NoRegister();
	SHOOTERGAMECOURSE_API UClass* Z_Construct_UClass_AShooterGameCourseGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ShooterGameCourse();
// End Cross Module References
	void AShooterGameCourseGameModeBase::StaticRegisterNativesAShooterGameCourseGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AShooterGameCourseGameModeBase_NoRegister()
	{
		return AShooterGameCourseGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AShooterGameCourseGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterGameCourseGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGameCourse,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGameCourseGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ShooterGameCourseGameModeBase.h" },
		{ "ModuleRelativePath", "ShooterGameCourseGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterGameCourseGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterGameCourseGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooterGameCourseGameModeBase_Statics::ClassParams = {
		&AShooterGameCourseGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AShooterGameCourseGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameCourseGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterGameCourseGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooterGameCourseGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterGameCourseGameModeBase, 3514042308);
	template<> SHOOTERGAMECOURSE_API UClass* StaticClass<AShooterGameCourseGameModeBase>()
	{
		return AShooterGameCourseGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterGameCourseGameModeBase(Z_Construct_UClass_AShooterGameCourseGameModeBase, &AShooterGameCourseGameModeBase::StaticClass, TEXT("/Script/ShooterGameCourse"), TEXT("AShooterGameCourseGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterGameCourseGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
