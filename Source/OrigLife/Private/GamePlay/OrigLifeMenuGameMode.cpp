// Fill out your copyright notice in the Description page of Project Settings.


#include "GamePlay/OrigLifeMenuGameMode.h"

#include "GamePlay/OrigLifeGameInstance.h"
#include "GamePlay/OrigLifeMenuController.h"
#include "Kismet/GameplayStatics.h"
#include "UI/HUD/OrigLifeMenuHUD.h"


AOrigLifeMenuGameMode::AOrigLifeMenuGameMode()
{
	//添加组件
	PlayerControllerClass = AOrigLifeMenuController::StaticClass();
	HUDClass = AOrigLifeMenuHUD::StaticClass();


	
}

void AOrigLifeMenuGameMode::BeginPlay()
{
	Super::BeginPlay();

	(Cast<UOrigLifeGameInstance>(UGameplayStatics::GetGameInstance(GetWorld())))->GameName = FString("OrigLifeCourse");
}
