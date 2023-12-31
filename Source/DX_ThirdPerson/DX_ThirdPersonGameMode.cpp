// Copyright Epic Games, Inc. All Rights Reserved.

#include "DX_ThirdPersonGameMode.h"
#include "DX_ThirdPersonCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADX_ThirdPersonGameMode::ADX_ThirdPersonGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
