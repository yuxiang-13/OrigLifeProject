// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "OrigLifeAnimInstance.generated.h"



/**
 * UOrigLifeAnimInstance
 *
 *	The base game animation instance class used by this project.
 */
UCLASS()
class UOrigLifeAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:

	UOrigLifeAnimInstance(const FObjectInitializer& ObjectInitializer);

	// virtual void InitializeWithAbilitySystem(UAbilitySystemComponent* ASC);

protected:

	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	UPROPERTY(BlueprintReadOnly, Category = "Character State Data")
	float GroundDistance = -1.0f;
};
