// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "OrigLifeGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class ORIGLIFE_API UOrigLifeGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	// 在生成世界之前，先运行这个方法（项目生命周期，先gamemode，再gameinstance,再生成世界，再世界里面的Actor）
	// virtual void Init() override;
	
	UPROPERTY(VisibleAnywhere, Category="OrigLife")
		FString GameName;
};
