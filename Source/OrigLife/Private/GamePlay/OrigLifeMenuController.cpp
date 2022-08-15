// Fill out your copyright notice in the Description page of Project Settings.


#include "GamePlay/OrigLifeMenuController.h"

AOrigLifeMenuController::AOrigLifeMenuController()
{
	// 显示鼠标
	bShowMouseCursor = true;
}

void AOrigLifeMenuController::BeginPlay()
{
	Super::BeginPlay();

	// 只开启鼠标 输入模式
	FInputModeUIOnly InputMode;
	// 鼠标显示，永远锁在界面
	InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::LockAlways);
	SetInputMode(InputMode);
}