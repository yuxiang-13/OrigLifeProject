// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "OrigLifeMenuController.generated.h"

/**
 * 
 */
UCLASS()
class ORIGLIFE_API AOrigLifeMenuController : public APlayerController
{
	GENERATED_BODY()
public:
	AOrigLifeMenuController();

	virtual void BeginPlay() override;
};
