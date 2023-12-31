// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UAkAudioEvent;
class AActor;
struct FAkExternalSourceInfo;
class UPostEventAsync;
#ifdef AKAUDIO_PostEventAsync_generated_h
#error "PostEventAsync.generated.h already included, missing '#pragma once' in PostEventAsync.h"
#endif
#define AKAUDIO_PostEventAsync_generated_h

#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_22_DELEGATE \
struct _Script_AkAudio_eventPostEventAsyncOutputPin_Parms \
{ \
	int32 PlayingID; \
}; \
static inline void FPostEventAsyncOutputPin_DelegateWrapper(const FMulticastScriptDelegate& PostEventAsyncOutputPin, int32 PlayingID) \
{ \
	_Script_AkAudio_eventPostEventAsyncOutputPin_Parms Parms; \
	Parms.PlayingID=PlayingID; \
	PostEventAsyncOutputPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_27_SPARSE_DATA
#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPollPostEventFuture); \
	DECLARE_FUNCTION(execPostEventAsync);


#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPollPostEventFuture); \
	DECLARE_FUNCTION(execPostEventAsync);


#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPostEventAsync(); \
	friend struct Z_Construct_UClass_UPostEventAsync_Statics; \
public: \
	DECLARE_CLASS(UPostEventAsync, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UPostEventAsync)


#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUPostEventAsync(); \
	friend struct Z_Construct_UClass_UPostEventAsync_Statics; \
public: \
	DECLARE_CLASS(UPostEventAsync, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UPostEventAsync)


#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPostEventAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPostEventAsync) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPostEventAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPostEventAsync); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPostEventAsync(UPostEventAsync&&); \
	NO_API UPostEventAsync(const UPostEventAsync&); \
public:


#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPostEventAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPostEventAsync(UPostEventAsync&&); \
	NO_API UPostEventAsync(const UPostEventAsync&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPostEventAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPostEventAsync); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPostEventAsync)


#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_24_PROLOG
#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_27_SPARSE_DATA \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_27_RPC_WRAPPERS \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_27_INCLASS \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_27_SPARSE_DATA \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_27_INCLASS_NO_PURE_DECLS \
	FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UPostEventAsync>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FirstGame_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
