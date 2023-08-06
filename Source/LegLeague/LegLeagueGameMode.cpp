// Copyright Epic Games, Inc. All Rights Reserved.

#include "LegLeagueGameMode.h"
#include "LegLeagueCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALegLeagueGameMode::ALegLeagueGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
