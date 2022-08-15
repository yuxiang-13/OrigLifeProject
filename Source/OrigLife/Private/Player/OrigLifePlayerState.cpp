// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/OrigLifePlayerState.h"

#include "Kismet/GameplayStatics.h"
#include "Player/OrigLifePlayerController.h"

AOrigLifePlayerState::AOrigLifePlayerState()
{
	//允许每帧运行
	PrimaryActorTick.bCanEverTick = true;
	//设置初始血值为500
	HP = 500.f;
	//设置初始饥饿值为600
	Hunger = 600.f;
	//没有死亡
	IsDead = false;
}

void AOrigLifePlayerState::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void AOrigLifePlayerState::BeginPlay()
{
	Super::BeginPlay();

	//如果控制器指针为空,添加引用
	SPController = Cast<AOrigLifePlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
}