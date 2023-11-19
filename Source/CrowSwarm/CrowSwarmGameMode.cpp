// Copyright Epic Games, Inc. All Rights Reserved.

#include "CrowSwarmGameMode.h"
#include "CrowSwarmCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACrowSwarmGameMode::ACrowSwarmGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
