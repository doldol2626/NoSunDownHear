// Copyright Epic Games, Inc. All Rights Reserved.

#include "NoSunDownHearGameMode.h"
#include "NoSunDownHearCharacter.h"
#include "NSDHGameStateBase.h"
#include "NoSunDownHearPlayerController.h"
#include "UObject/ConstructorHelpers.h"

ANoSunDownHearGameMode::ANoSunDownHearGameMode()
{
	GameStateClass = ANSDHGameStateBase::StaticClass();
	PlayerControllerClass = ANoSunDownHearPlayerController::StaticClass();

}
