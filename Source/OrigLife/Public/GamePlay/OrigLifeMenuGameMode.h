// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "OrigLifeMenuGameMode.generated.h"

/**
 * 
 */
UCLASS()
class ORIGLIFE_API AOrigLifeMenuGameMode : public AGameModeBase
{
	GENERATED_BODY()
public:
	AOrigLifeMenuGameMode();

protected:
	virtual void BeginPlay() override;
};
