// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAkBoolPropertyToControl;
#ifdef AKAUDIO_AkItemBoolProperties_generated_h
#error "AkItemBoolProperties.generated.h already included, missing '#pragma once' in AkItemBoolProperties.h"
#endif
#define AKAUDIO_AkItemBoolProperties_generated_h

#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_28_DELEGATE \
struct _Script_AkAudio_eventOnItemBoolPropertySelectionChanged_Parms \
{ \
	FString PropertySelected; \
}; \
static inline void FOnItemBoolPropertySelectionChanged_DelegateWrapper(const FMulticastScriptDelegate& OnItemBoolPropertySelectionChanged, const FString& PropertySelected) \
{ \
	_Script_AkAudio_eventOnItemBoolPropertySelectionChanged_Parms Parms; \
	Parms.PropertySelected=PropertySelected; \
	OnItemBoolPropertySelectionChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_31_DELEGATE \
struct _Script_AkAudio_eventOnItemBoolPropertyDragDetected_Parms \
{ \
	FString PropertyDragged; \
}; \
static inline void FOnItemBoolPropertyDragDetected_DelegateWrapper(const FMulticastScriptDelegate& OnItemBoolPropertyDragDetected, const FString& PropertyDragged) \
{ \
	_Script_AkAudio_eventOnItemBoolPropertyDragDetected_Parms Parms; \
	Parms.PropertyDragged=PropertyDragged; \
	OnItemBoolPropertyDragDetected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkBoolPropertyToControl_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkBoolPropertyToControl>();

#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_59_SPARSE_DATA
#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_59_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConv_FAkBoolPropertyToControlToText); \
	DECLARE_FUNCTION(execConv_FAkBoolPropertyToControlToString);


#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConv_FAkBoolPropertyToControlToText); \
	DECLARE_FUNCTION(execConv_FAkBoolPropertyToControlToString);


#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkItemBoolPropertiesConv(); \
	friend struct Z_Construct_UClass_UAkItemBoolPropertiesConv_Statics; \
public: \
	DECLARE_CLASS(UAkItemBoolPropertiesConv, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkItemBoolPropertiesConv)


#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_59_INCLASS \
private: \
	static void StaticRegisterNativesUAkItemBoolPropertiesConv(); \
	friend struct Z_Construct_UClass_UAkItemBoolPropertiesConv_Statics; \
public: \
	DECLARE_CLASS(UAkItemBoolPropertiesConv, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkItemBoolPropertiesConv)


#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkItemBoolPropertiesConv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkItemBoolPropertiesConv) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkItemBoolPropertiesConv); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkItemBoolPropertiesConv); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkItemBoolPropertiesConv(UAkItemBoolPropertiesConv&&); \
	NO_API UAkItemBoolPropertiesConv(const UAkItemBoolPropertiesConv&); \
public:


#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkItemBoolPropertiesConv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkItemBoolPropertiesConv(UAkItemBoolPropertiesConv&&); \
	NO_API UAkItemBoolPropertiesConv(const UAkItemBoolPropertiesConv&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkItemBoolPropertiesConv); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkItemBoolPropertiesConv); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkItemBoolPropertiesConv)


#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_56_PROLOG
#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_59_SPARSE_DATA \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_59_RPC_WRAPPERS \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_59_INCLASS \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_59_SPARSE_DATA \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_59_INCLASS_NO_PURE_DECLS \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_59_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkItemBoolPropertiesConv."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkItemBoolPropertiesConv>();

#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_80_SPARSE_DATA
#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_80_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSearchText); \
	DECLARE_FUNCTION(execGetSearchText); \
	DECLARE_FUNCTION(execGetSelectedProperty);


#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSearchText); \
	DECLARE_FUNCTION(execGetSearchText); \
	DECLARE_FUNCTION(execGetSelectedProperty);


#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkItemBoolProperties(); \
	friend struct Z_Construct_UClass_UAkItemBoolProperties_Statics; \
public: \
	DECLARE_CLASS(UAkItemBoolProperties, UWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkItemBoolProperties) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_80_INCLASS \
private: \
	static void StaticRegisterNativesUAkItemBoolProperties(); \
	friend struct Z_Construct_UClass_UAkItemBoolProperties_Statics; \
public: \
	DECLARE_CLASS(UAkItemBoolProperties, UWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkItemBoolProperties) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_80_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkItemBoolProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkItemBoolProperties) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkItemBoolProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkItemBoolProperties); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkItemBoolProperties(UAkItemBoolProperties&&); \
	NO_API UAkItemBoolProperties(const UAkItemBoolProperties&); \
public:


#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkItemBoolProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkItemBoolProperties(UAkItemBoolProperties&&); \
	NO_API UAkItemBoolProperties(const UAkItemBoolProperties&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkItemBoolProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkItemBoolProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkItemBoolProperties)


#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_77_PROLOG
#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_80_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_80_SPARSE_DATA \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_80_RPC_WRAPPERS \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_80_INCLASS \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_80_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_80_SPARSE_DATA \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_80_INCLASS_NO_PURE_DECLS \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_80_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkItemBoolProperties."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkItemBoolProperties>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
