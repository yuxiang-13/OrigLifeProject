// Fill out your copyright notice in the Description page of Project Settings.


#include "GamePlay/OrigLifeGameMode.h"

#include "EngineUtils.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Player/OrigLifePlayerCharacterBase.h"
#include "Player/OrigLifePlayerController.h"
#include "Player/OrigLifePlayerState.h"
#include "UI/HUD/OrigLifeGameHUD.h"


AOrigLifeGameMode::AOrigLifeGameMode()
{
	// 允许开启Tick函数
	PrimaryActorTick.bCanEverTick = true;
	
	// 添加组件
	HUDClass = AOrigLifeGameHUD::StaticClass();
	PlayerControllerClass = AOrigLifePlayerController::StaticClass();
	PlayerStateClass = AOrigLifePlayerState::StaticClass();
	// DefaultPawnClass = AOrigLifePlayerCharacterBase::StaticClass();

	
	// static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	// if (PlayerPawnBPClass.Class != NULL)
	// {
	// 	DefaultPawnClass = PlayerPawnBPClass.Class;
	// }
}

void AOrigLifeGameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}


void AOrigLifeGameMode::BeginPlay()
{
	Super::BeginPlay();


	//播放背景音乐
	// USoundWave* BGMusic = LoadObject<USoundWave>(NULL, TEXT("SoundWave'/Game/Res/Sound/GameSound/GameBG.GameBG'"));
	// BGMusic->bLooping = true;
	// UGameplayStatics::PlaySound2D(GetWorld(), BGMusic, 0.1f);

}
