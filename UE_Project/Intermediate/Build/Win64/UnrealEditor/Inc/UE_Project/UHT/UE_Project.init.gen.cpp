// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE_Project_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UE_Project;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UE_Project()
	{
		if (!Z_Registration_Info_UPackage__Script_UE_Project.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UE_Project",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x65AD93EC,
				0xE2B77F5A,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UE_Project.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UE_Project.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UE_Project(Z_Construct_UPackage__Script_UE_Project, TEXT("/Script/UE_Project"), Z_Registration_Info_UPackage__Script_UE_Project, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x65AD93EC, 0xE2B77F5A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
