// Copyright Epic Games, Inc. All Rights Reserved.

#include "MultplayerTestFrogGameMode.h"
#include "MultplayerTestFrogCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultplayerTestFrogGameMode::AMultplayerTestFrogGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
