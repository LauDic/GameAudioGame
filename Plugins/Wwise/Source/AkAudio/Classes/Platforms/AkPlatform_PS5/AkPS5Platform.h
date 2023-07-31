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

#pragma once

#if defined(PLATFORM_PS5) && PLATFORM_PS5

#include "AkInclude.h"
#include "AkPS5InitializationSettings.h"

#define TCHAR_TO_AK(Text) (const ANSICHAR*)(TCHAR_TO_ANSI(Text))
#if UE_4_25_OR_LATER
using UAkInitializationSettings = UAkPS5InitializationSettings;
#else
using UAkInitializationSettings = UAkDPXInitializationSettings;
#endif

struct FAkPS5Platform
{
	static const UAkInitializationSettings* GetInitializationSettings()
	{
		return GetDefault<UAkInitializationSettings>();
	}

	static const FString GetPlatformBasePath()
	{
		return FString("PS5");
	}

	static FString GetWwisePluginDirectory();
	static FString GetDSPPluginsDirectory(const FString& PlatformArchitecture);
	static void PreInitialize(const FAkInitializationStructure& InitSettings);
};

using FAkPlatform = FAkPS5Platform;

#endif
