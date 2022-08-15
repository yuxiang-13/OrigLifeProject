// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/HUD/OrigLifeGameHUD.h"

#include "Engine/Engine.h"
#include "GamePlay/OrigLifeGameMode.h"
#include "Kismet/GameplayStatics.h"

AOrigLifeGameHUD::AOrigLifeGameHUD()
{
	if (GEngine && GEngine->GameViewport)
	{
		// SAssignNew(GameHUDWidget, SOrigLifeGameHUDWidget);
		// GEngine->GameViewport->AddViewportWidgetContent(SNew(SWeakWidget).PossiblyNullContent(GameHUDWidget.ToSharedRef()));
	}	
}

// BeginPlay 才能表示初始化好，构造不能保证
void AOrigLifeGameHUD::BeginPlay()
{
	Super::BeginPlay();
	// 绑定所有 GamePlay相关  和  Widget相关 委托
	GM = Cast<AOrigLifeGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
	if (!GM) return;

	// //绑定显示UI委托
	// GM->SPController->ShowGameUI.BindRaw(GameHUDWidget.Get(), &SOrigLifeGameHUDWidget::ShowGameUI);
}
