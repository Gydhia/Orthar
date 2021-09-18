// Copyright Epic Games, Inc. All Rights Reserved.

#include "OrtharGameMode.h"
#include "OrtharCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOrtharGameMode::AOrtharGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
