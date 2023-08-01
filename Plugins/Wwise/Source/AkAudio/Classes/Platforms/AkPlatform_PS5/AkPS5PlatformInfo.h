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

#include "Platforms/AkPlatformInfo.h"
#include "AkPS5PlatformInfo.generated.h"

UCLASS()
class UAkPS5PlatformInfo : public UAkPlatformInfo
{
	GENERATED_BODY()

public:
	UAkPS5PlatformInfo()
	{
		WwisePlatform = "PS5";
		Architecture = "PS5";
		LibraryFileNameFormat = "{0}.prx";
#if WITH_EDITORONLY_DATA
		UAkPlatformInfo::UnrealNameToPlatformInfo.Add("PS5", this);
#endif
	}
};