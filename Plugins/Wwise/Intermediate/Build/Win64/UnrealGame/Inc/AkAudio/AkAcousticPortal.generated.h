// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
enum class AkAcousticPortalState : uint8;
#ifdef AKAUDIO_AkAcousticPortal_generated_h
#error "AkAcousticPortal.generated.h already included, missing '#pragma once' in AkAcousticPortal.h"
#endif
#define AKAUDIO_AkAcousticPortal_generated_h

#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_30_SPARSE_DATA
#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPortalPlacementValid); \
	DECLARE_FUNCTION(execGetPrimitiveParent); \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execClosePortal); \
	DECLARE_FUNCTION(execOpenPortal);


#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPortalPlacementValid); \
	DECLARE_FUNCTION(execGetPrimitiveParent); \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execClosePortal); \
	DECLARE_FUNCTION(execOpenPortal);


#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkPortalComponent(); \
	friend struct Z_Construct_UClass_UAkPortalComponent_Statics; \
public: \
	DECLARE_CLASS(UAkPortalComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkPortalComponent)


#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUAkPortalComponent(); \
	friend struct Z_Construct_UClass_UAkPortalComponent_Statics; \
public: \
	DECLARE_CLASS(UAkPortalComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkPortalComponent)


#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkPortalComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkPortalComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkPortalComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkPortalComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkPortalComponent(UAkPortalComponent&&); \
	NO_API UAkPortalComponent(const UAkPortalComponent&); \
public:


#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkPortalComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkPortalComponent(UAkPortalComponent&&); \
	NO_API UAkPortalComponent(const UAkPortalComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkPortalComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkPortalComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkPortalComponent)


#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_27_PROLOG
#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_30_SPARSE_DATA \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_30_RPC_WRAPPERS \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_30_INCLASS \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_30_SPARSE_DATA \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_30_INCLASS_NO_PURE_DECLS \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkPortalComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkPortalComponent>();

#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_139_SPARSE_DATA
#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_139_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execClosePortal); \
	DECLARE_FUNCTION(execOpenPortal);


#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_139_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execClosePortal); \
	DECLARE_FUNCTION(execOpenPortal);


#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_139_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AAkAcousticPortal, NO_API)


#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_139_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAkAcousticPortal(); \
	friend struct Z_Construct_UClass_AAkAcousticPortal_Statics; \
public: \
	DECLARE_CLASS(AAkAcousticPortal, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(AAkAcousticPortal) \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_139_ARCHIVESERIALIZER


#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_139_INCLASS \
private: \
	static void StaticRegisterNativesAAkAcousticPortal(); \
	friend struct Z_Construct_UClass_AAkAcousticPortal_Statics; \
public: \
	DECLARE_CLASS(AAkAcousticPortal, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(AAkAcousticPortal) \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_139_ARCHIVESERIALIZER


#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_139_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAkAcousticPortal(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAkAcousticPortal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAkAcousticPortal); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAkAcousticPortal); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAkAcousticPortal(AAkAcousticPortal&&); \
	NO_API AAkAcousticPortal(const AAkAcousticPortal&); \
public:


#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_139_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAkAcousticPortal(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAkAcousticPortal(AAkAcousticPortal&&); \
	NO_API AAkAcousticPortal(const AAkAcousticPortal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAkAcousticPortal); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAkAcousticPortal); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAkAcousticPortal)


#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_136_PROLOG
#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_139_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_139_SPARSE_DATA \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_139_RPC_WRAPPERS \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_139_INCLASS \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_139_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_139_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_139_SPARSE_DATA \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_139_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_139_INCLASS_NO_PURE_DECLS \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h_139_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkAcousticPortal."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class AAkAcousticPortal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticPortal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
