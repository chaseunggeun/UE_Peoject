// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_Project/UE_ProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE_ProjectGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UE_PROJECT_API UClass* Z_Construct_UClass_AUE_ProjectGameMode();
UE_PROJECT_API UClass* Z_Construct_UClass_AUE_ProjectGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE_Project();
// End Cross Module References

// Begin Class AUE_ProjectGameMode
void AUE_ProjectGameMode::StaticRegisterNativesAUE_ProjectGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUE_ProjectGameMode);
UClass* Z_Construct_UClass_AUE_ProjectGameMode_NoRegister()
{
	return AUE_ProjectGameMode::StaticClass();
}
struct Z_Construct_UClass_AUE_ProjectGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UE_ProjectGameMode.h" },
		{ "ModuleRelativePath", "UE_ProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE_ProjectGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AUE_ProjectGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUE_ProjectGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUE_ProjectGameMode_Statics::ClassParams = {
	&AUE_ProjectGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUE_ProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUE_ProjectGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUE_ProjectGameMode()
{
	if (!Z_Registration_Info_UClass_AUE_ProjectGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUE_ProjectGameMode.OuterSingleton, Z_Construct_UClass_AUE_ProjectGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUE_ProjectGameMode.OuterSingleton;
}
template<> UE_PROJECT_API UClass* StaticClass<AUE_ProjectGameMode>()
{
	return AUE_ProjectGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUE_ProjectGameMode);
AUE_ProjectGameMode::~AUE_ProjectGameMode() {}
// End Class AUE_ProjectGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Study_UE_Project_UE_Project_Source_UE_Project_UE_ProjectGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUE_ProjectGameMode, AUE_ProjectGameMode::StaticClass, TEXT("AUE_ProjectGameMode"), &Z_Registration_Info_UClass_AUE_ProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUE_ProjectGameMode), 686926854U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Study_UE_Project_UE_Project_Source_UE_Project_UE_ProjectGameMode_h_2218565996(TEXT("/Script/UE_Project"),
	Z_CompiledInDeferFile_FID_UE_Study_UE_Project_UE_Project_Source_UE_Project_UE_ProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Study_UE_Project_UE_Project_Source_UE_Project_UE_ProjectGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
