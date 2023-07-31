// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/Platforms/AkPlatform_PS5/AkPS5InitializationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkPS5InitializationSettings() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPS5InitializationSettings_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPS5InitializationSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettings();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInitialisationSettingsBase_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkDPXInitializationSettings_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkDPXInitializationSettings();
// End Cross Module References

static_assert(std::is_polymorphic<FAkPS5AdvancedInitializationSettings>() == std::is_polymorphic<FAkAdvancedInitializationSettingsWithMultiCoreRendering>(), "USTRUCT FAkPS5AdvancedInitializationSettings cannot be polymorphic unless super FAkAdvancedInitializationSettingsWithMultiCoreRendering is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkPS5AdvancedInitializationSettings;
class UScriptStruct* FAkPS5AdvancedInitializationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkPS5AdvancedInitializationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkPS5AdvancedInitializationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkPS5AdvancedInitializationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AkPS5AdvancedInitializationSettings.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkPS5AdvancedInitializationSettings>()
{
	return FAkPS5AdvancedInitializationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseHardwareCodecLowLatencyMode_MetaData[];
#endif
		static void NewProp_UseHardwareCodecLowLatencyMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseHardwareCodecLowLatencyMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVorbisHwAcceleration_MetaData[];
#endif
		static void NewProp_bVorbisHwAcceleration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVorbisHwAcceleration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_PS5/AkPS5InitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkPS5AdvancedInitializationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_PS5/AkPS5InitializationSettings.h" },
		{ "ToolTip", "Use low latency mode for hardware codecs (default is false). If true, decoding jobs are submitted at the beginning of the Wwise update and it will be necessary to wait for the result." },
	};
#endif
	void Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode_SetBit(void* Obj)
	{
		((FAkPS5AdvancedInitializationSettings*)Obj)->UseHardwareCodecLowLatencyMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode = { "UseHardwareCodecLowLatencyMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAkPS5AdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_bVorbisHwAcceleration_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_PS5/AkPS5InitializationSettings.h" },
		{ "ToolTip", "Decode all Vorbis sources on PS5's audio co-processor, similar to ATRAC9. Please refer to the PS5-specific section of the Wwise SDK documentation for more information on advantages and limitations of hardware decoders." },
	};
#endif
	void Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_bVorbisHwAcceleration_SetBit(void* Obj)
	{
		((FAkPS5AdvancedInitializationSettings*)Obj)->bVorbisHwAcceleration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_bVorbisHwAcceleration = { "bVorbisHwAcceleration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAkPS5AdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_bVorbisHwAcceleration_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_bVorbisHwAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_bVorbisHwAcceleration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewProp_bVorbisHwAcceleration,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering,
		&NewStructOps,
		"AkPS5AdvancedInitializationSettings",
		sizeof(FAkPS5AdvancedInitializationSettings),
		alignof(FAkPS5AdvancedInitializationSettings),
		Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AkPS5AdvancedInitializationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkPS5AdvancedInitializationSettings.InnerSingleton, Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkPS5AdvancedInitializationSettings.InnerSingleton;
	}
	void UAkPS5InitializationSettings::StaticRegisterNativesUAkPS5InitializationSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkPS5InitializationSettings);
	UClass* Z_Construct_UClass_UAkPS5InitializationSettings_NoRegister()
	{
		return UAkPS5InitializationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAkPS5InitializationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommonSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CommonSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommunicationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CommunicationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdvancedSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkPS5InitializationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkPS5InitializationSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Platforms/AkPlatform_PS5/AkPS5InitializationSettings.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_PS5/AkPS5InitializationSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkPS5InitializationSettings_Statics::NewProp_CommonSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_PS5/AkPS5InitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkPS5InitializationSettings_Statics::NewProp_CommonSettings = { "CommonSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkPS5InitializationSettings, CommonSettings), Z_Construct_UScriptStruct_FAkCommonInitializationSettings, METADATA_PARAMS(Z_Construct_UClass_UAkPS5InitializationSettings_Statics::NewProp_CommonSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkPS5InitializationSettings_Statics::NewProp_CommonSettings_MetaData)) }; // 2501615446
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkPS5InitializationSettings_Statics::NewProp_CommunicationSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_PS5/AkPS5InitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkPS5InitializationSettings_Statics::NewProp_CommunicationSettings = { "CommunicationSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkPS5InitializationSettings, CommunicationSettings), Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization, METADATA_PARAMS(Z_Construct_UClass_UAkPS5InitializationSettings_Statics::NewProp_CommunicationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkPS5InitializationSettings_Statics::NewProp_CommunicationSettings_MetaData)) }; // 3859834376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkPS5InitializationSettings_Statics::NewProp_AdvancedSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_PS5/AkPS5InitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkPS5InitializationSettings_Statics::NewProp_AdvancedSettings = { "AdvancedSettings", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkPS5InitializationSettings, AdvancedSettings), Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings, METADATA_PARAMS(Z_Construct_UClass_UAkPS5InitializationSettings_Statics::NewProp_AdvancedSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkPS5InitializationSettings_Statics::NewProp_AdvancedSettings_MetaData)) }; // 3410310266
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkPS5InitializationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkPS5InitializationSettings_Statics::NewProp_CommonSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkPS5InitializationSettings_Statics::NewProp_CommunicationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkPS5InitializationSettings_Statics::NewProp_AdvancedSettings,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAkPS5InitializationSettings_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAkPlatformInitialisationSettingsBase_NoRegister, (int32)VTABLE_OFFSET(UAkPS5InitializationSettings, IAkPlatformInitialisationSettingsBase), false },  // 3478154059
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkPS5InitializationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkPS5InitializationSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkPS5InitializationSettings_Statics::ClassParams = {
		&UAkPS5InitializationSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkPS5InitializationSettings_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkPS5InitializationSettings_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAkPS5InitializationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkPS5InitializationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkPS5InitializationSettings()
	{
		if (!Z_Registration_Info_UClass_UAkPS5InitializationSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkPS5InitializationSettings.OuterSingleton, Z_Construct_UClass_UAkPS5InitializationSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkPS5InitializationSettings.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkPS5InitializationSettings>()
	{
		return UAkPS5InitializationSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkPS5InitializationSettings);
	void UAkDPXInitializationSettings::StaticRegisterNativesUAkDPXInitializationSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkDPXInitializationSettings);
	UClass* Z_Construct_UClass_UAkDPXInitializationSettings_NoRegister()
	{
		return UAkDPXInitializationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAkDPXInitializationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkDPXInitializationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkPS5InitializationSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkDPXInitializationSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Platforms/AkPlatform_PS5/AkPS5InitializationSettings.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_PS5/AkPS5InitializationSettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkDPXInitializationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkDPXInitializationSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkDPXInitializationSettings_Statics::ClassParams = {
		&UAkDPXInitializationSettings::StaticClass,
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
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAkDPXInitializationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkDPXInitializationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkDPXInitializationSettings()
	{
		if (!Z_Registration_Info_UClass_UAkDPXInitializationSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkDPXInitializationSettings.OuterSingleton, Z_Construct_UClass_UAkDPXInitializationSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkDPXInitializationSettings.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkDPXInitializationSettings>()
	{
		return UAkDPXInitializationSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkDPXInitializationSettings);
	struct Z_CompiledInDeferFile_FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_PS5_AkPS5InitializationSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_PS5_AkPS5InitializationSettings_h_Statics::ScriptStructInfo[] = {
		{ FAkPS5AdvancedInitializationSettings::StaticStruct, Z_Construct_UScriptStruct_FAkPS5AdvancedInitializationSettings_Statics::NewStructOps, TEXT("AkPS5AdvancedInitializationSettings"), &Z_Registration_Info_UScriptStruct_AkPS5AdvancedInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkPS5AdvancedInitializationSettings), 3410310266U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_PS5_AkPS5InitializationSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkPS5InitializationSettings, UAkPS5InitializationSettings::StaticClass, TEXT("UAkPS5InitializationSettings"), &Z_Registration_Info_UClass_UAkPS5InitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkPS5InitializationSettings), 113359687U) },
		{ Z_Construct_UClass_UAkDPXInitializationSettings, UAkDPXInitializationSettings::StaticClass, TEXT("UAkDPXInitializationSettings"), &Z_Registration_Info_UClass_UAkDPXInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkDPXInitializationSettings), 3612728819U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_PS5_AkPS5InitializationSettings_h_606922798(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_PS5_AkPS5InitializationSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_PS5_AkPS5InitializationSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_PS5_AkPS5InitializationSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_PS5_AkPS5InitializationSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
