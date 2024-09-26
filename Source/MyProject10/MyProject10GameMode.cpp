// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyProject10GameMode.h"
#include "MyProject10Character.h"
#include "UObject/ConstructorHelpers.h"

AMyProject10GameMode::AMyProject10GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
