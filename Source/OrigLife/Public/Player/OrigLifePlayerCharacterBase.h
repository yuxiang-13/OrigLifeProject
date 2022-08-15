// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "OrigLifePlayerCharacterBase.generated.h"

USTRUCT(BlueprintType)
struct FOrigLifeCharacterGroundInfo
{
	GENERATED_BODY()

	FOrigLifeCharacterGroundInfo()
		: LastUpdateFrame(0)
		, GroundDistance(0.0f)
	{}

	uint64 LastUpdateFrame;

	UPROPERTY(BlueprintReadOnly)
	FHitResult GroundHitResult;

	UPROPERTY(BlueprintReadOnly)
	float GroundDistance;
};

UCLASS()
class ORIGLIFE_API AOrigLifePlayerCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Character State Data")
	float GroundDistance = -1.0f;
protected:
	// Cached ground info for the character.  Do not access this directly!  It's only updated when accessed via GetGroundInfo().
	FOrigLifeCharacterGroundInfo CachedGroundInfo;

	// 玩家控制器指针
	class AOrigLifePlayerController* SPController;
public:
	AOrigLifePlayerCharacterBase(const FObjectInitializer& ObjectInitializer);
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	const FOrigLifeCharacterGroundInfo& GetGroundInfo();
	
protected:
	virtual void BeginPlay() override;
};
