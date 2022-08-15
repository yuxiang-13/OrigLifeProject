// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "OrigLifePlayerState.generated.h"


/**
 * 
 */
UCLASS()
class ORIGLIFE_API AOrigLifePlayerState : public APlayerState
{
	GENERATED_BODY()
public:
	AOrigLifePlayerState();
	virtual void Tick(float DeltaSeconds) override;
	
	//获取控制器指针
	class AOrigLifePlayerController* SPController;
protected:
	virtual void BeginPlay() override;
private:
	
	float HP;
	float Hunger;

	//是否已经死亡
	bool IsDead;
};
