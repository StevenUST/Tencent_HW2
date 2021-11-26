// Copyright Epic Games, Inc. All Rights Reserved.

#include "Tencent_HW2GameMode.h"
#include "Tencent_HW2Character.h"
#include "UObject/ConstructorHelpers.h"

ATencent_HW2GameMode::ATencent_HW2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
