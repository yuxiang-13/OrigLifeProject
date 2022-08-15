// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"

#include "OrigLifePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class ORIGLIFE_API AOrigLifePlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	AOrigLifePlayerController();

	virtual void Tick(float DeltaSeconds) override;
	
	// character 是 SetupPlayerInputComponent
	virtual void SetupInputComponent() override;

public:
	// 获取 玩家角色
	class AOrigLifePlayerCharacterBase* SPCharacter; 
	class AOrigLifePlayerState* SPState;

protected:
	virtual void BeginPlay() override;
};
