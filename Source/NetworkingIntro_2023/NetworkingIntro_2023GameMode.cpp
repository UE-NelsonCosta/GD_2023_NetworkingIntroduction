// Copyright Epic Games, Inc. All Rights Reserved.

#include "NetworkingIntro_2023GameMode.h"
#include "NetworkingIntro_2023Character.h"
#include "UObject/ConstructorHelpers.h"

ANetworkingIntro_2023GameMode::ANetworkingIntro_2023GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
