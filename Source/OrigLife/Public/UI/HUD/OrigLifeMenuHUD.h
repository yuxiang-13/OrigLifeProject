// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "OrigLifeMenuHUD.generated.h"

/**
 * 
 */
UCLASS()
class ORIGLIFE_API AOrigLifeMenuHUD : public AHUD
{
	GENERATED_BODY()
public:
	AOrigLifeMenuHUD();

	TSharedPtr<class SOrigLifeMenuHUDWidget> MenuHUDWidget;
};
