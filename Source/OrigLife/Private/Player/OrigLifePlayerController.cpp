// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/OrigLifePlayerController.h"

#include "Player/OrigLifePlayerCharacterBase.h"
#include "Player/OrigLifePlayerState.h"

AOrigLifePlayerController::AOrigLifePlayerController()
{
	// 允许每帧 运行
	PrimaryActorTick.bCanEverTick = true;
}

void AOrigLifePlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (!SPCharacter)
	{
		SPCharacter = Cast<AOrigLifePlayerCharacterBase>(GetCharacter());
	}

	if (!SPState)
	{
		SPState = Cast<AOrigLifePlayerState>(PlayerState);
	}
	// 设置鼠标不显示
	bShowMouseCursor = false;
	
}
void AOrigLifePlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	
}

void AOrigLifePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
}