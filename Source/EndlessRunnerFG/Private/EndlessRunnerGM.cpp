// Copyright Epic Games, Inc. All Rights Reserved.

#include "EndlessRunnerGM.h"
#include "Player1CPP.h"
#include "UObject/ConstructorHelpers.h"

AEndlessRunnerGameGameMode::AEndlessRunnerGameGameMode()
{
	// set default pawn class to our Blueprinted character
	/*static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/BP_Player1.BP_Player1"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}*/
	
}
