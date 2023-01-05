// Copyright Epic Games, Inc. All Rights Reserved.

#include "xkSurvivalGameMode.h"
#include "xkSurvivalCharacter.h"
#include "UObject/ConstructorHelpers.h"

AxkSurvivalGameMode::AxkSurvivalGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
