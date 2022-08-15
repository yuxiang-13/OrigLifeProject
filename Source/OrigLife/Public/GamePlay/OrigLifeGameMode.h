// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "OrigLifeGameMode.generated.h"

UCLASS()
class ORIGLIFE_API AOrigLifeGameMode : public AGameModeBase
{
	GENERATED_BODY()
public:
	AOrigLifeGameMode();

	virtual void Tick(float DeltaSeconds) override;
	
public:
	class AOrigLifePlayerController* SPController;
	class AOrigLifePlayerCharacterBase* SPCharacter;
	class AOrigLifePlayerState* SPState;

protected:
	virtual void BeginPlay() override;
};
