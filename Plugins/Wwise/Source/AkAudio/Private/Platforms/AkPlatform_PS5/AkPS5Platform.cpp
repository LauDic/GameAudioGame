/*******************************************************************************
The content of the files in this repository include portions of the
AUDIOKINETIC Wwise Technology released in source code form as part of the SDK
package.

Commercial License Usage

Licensees holding valid commercial licenses to the AUDIOKINETIC Wwise Technology
may use these files in accordance with the end user license agreement provided
with the software or, alternatively, in accordance with the terms contained in a
written agreement between you and Audiokinetic Inc.

Copyright (c) 2021 Audiokinetic Inc.
*******************************************************************************/

#if defined(PLATFORM_PS5) && PLATFORM_PS5

#include "Platforms/AkPlatform_PS5/AkPS5Platform.h"
#include "AkAudioDevice.h"
#include "Misc/Paths.h"
#include "Interfaces/IPluginManager.h"

#define AK_PS5_DSP_PLUGINS_DIR "/app0/prx/"

FString FAkPS5Platform::GetWwisePluginDirectory()
{
    // Is it not possible to get an absolute path on PS4, so we build it ourselves...
    FString BaseDirectory = TEXT("/app0");
    if (IPluginManager::Get().FindPlugin("Wwise")->GetType() == EPluginType::Engine)
    {
        BaseDirectory /= TEXT("engine");
    }
    else
    {
        BaseDirectory /= FApp::GetProjectName();
    }

    return BaseDirectory / TEXT("Plugins") / TEXT("Wwise");
}

FString FAkPS5Platform::GetDSPPluginsDirectory(const FString& PlatformArchitecture)
{
    return AK_PS5_DSP_PLUGINS_DIR;
}

void FAkPS5Platform::PreInitialize(const FAkInitializationStructure& InitSettings)
{
    // We only need to do this once for the whole application lifetime.
    static bool bVorbisHwAcceleratorLoaded = false;
    if (!bVorbisHwAcceleratorLoaded && InitSettings.PlatformInitSettings.bVorbisHwAcceleration)
    {
        AKRESULT eResult = AK::LoadVorbisHwAcceleratorLibrary("AkVorbisHwAccelerator", AK_PS5_DSP_PLUGINS_DIR);
        switch (eResult)
        {
            case AK_Success:
                bVorbisHwAcceleratorLoaded = true;
                break;
            // A failure here is not critical. We emit the proper error in the log, but we can allow the sound engine to continue to initialize.
            case AK_NotCompatible:
                UE_LOG(LogAkAudio, Error, TEXT("Vorbis acceleration library failed to load due to PS5 SDK mismatch."));
                break;
            case AK_InvalidFile:
                UE_LOG(LogAkAudio, Error, TEXT("Vorbis acceleration library failed to load because the library file could not be found in the game package."));
                break;
            case AK_InsufficientMemory:
                UE_LOG(LogAkAudio, Error, TEXT("Vorbis acceleration library failed to load due to insufficient resources or memory."));
                break;
            default:
                UE_LOG(LogAkAudio, Error, TEXT("Vorbis acceleration library failed to load due an unexpected error."));
                break;
        }
    }
}

#endif