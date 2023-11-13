// Copyright Epic Games, Inc. All Rights Reserved.

#include "AdvancedDriverGameMode.h"
#include "AdvancedDriverPawn.h"
#include "AdvancedDriverHud.h"

AAdvancedDriverGameMode::AAdvancedDriverGameMode()
{
	DefaultPawnClass = AAdvancedDriverPawn::StaticClass();
	HUDClass = AAdvancedDriverHud::StaticClass();
}