// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "RoomEscapeGameMode.h"
#include "RoomEscapeHUD.h"
#include "RoomEscapeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARoomEscapeGameMode::ARoomEscapeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ARoomEscapeHUD::StaticClass();
}
