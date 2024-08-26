// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Donkey_kong_SIS457GameMode.generated.h"

UCLASS(minimalapi)
class ADonkey_kong_SIS457GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ADonkey_kong_SIS457GameMode();
protected:
	virtual void BeginPlay() override;
};



