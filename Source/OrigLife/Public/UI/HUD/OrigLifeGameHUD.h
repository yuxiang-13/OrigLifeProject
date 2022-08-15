// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "OrigLifeGameHUD.generated.h"

/**
 * 
 */
UCLASS()
class ORIGLIFE_API AOrigLifeGameHUD : public AHUD
{
	GENERATED_BODY()
public:
	AOrigLifeGameHUD();
public:
	class AOrigLifeGameMode* GM;
protected:
	virtual void BeginPlay() override;
private:
	TSharedPtr<class SOrigLifeGameHUDWidget> GameHUDWidget;
};
