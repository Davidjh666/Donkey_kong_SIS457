// Copyright Epic Games, Inc. All Rights Reserved.

#include "Donkey_kong_SIS457GameMode.h"
#include "Donkey_kong_SIS457Character.h"
#include "UObject/ConstructorHelpers.h"
#include "obstaculos.h"

ADonkey_kong_SIS457GameMode::ADonkey_kong_SIS457GameMode()
{

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ADonkey_kong_SIS457GameMode::BeginPlay()
{
	Super::BeginPlay();

	FTransform SpawnLocation;
	SpawnLocation.SetLocation(FVector(1160.0f, -210.0f, 140.0f));
	SpawnLocation.SetRotation(FQuat(FRotator(0.0f, 0.0f, 0.0f)));
	GetWorld()->SpawnActor<Aobstaculos>(Aobstaculos::StaticClass(), SpawnLocation);


}
