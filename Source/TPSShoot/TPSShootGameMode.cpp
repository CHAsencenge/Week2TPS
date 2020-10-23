// Copyright Epic Games, Inc. All Rights Reserved.

#include "TPSShootGameMode.h"
#include "TPSShootCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATPSShootGameMode::ATPSShootGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
