// Copyright Epic Games, Inc. All Rights Reserved.

#include "Animation/OrigLifeAnimInstance.h"

#include "Player/OrigLifePlayerCharacterBase.h"


UOrigLifeAnimInstance::UOrigLifeAnimInstance(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

// void UOrigLifeAnimInstance::InitializeWithAbilitySystem(UAbilitySystemComponent* ASC)
// {
// }


void UOrigLifeAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	if (AActor* OwningActor = GetOwningActor())
	{
		// if (UAbilitySystemComponent* ASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(OwningActor))
		// {
		// 	InitializeWithAbilitySystem(ASC);
		// }
	}
}

void UOrigLifeAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	const AOrigLifePlayerCharacterBase* Character = Cast<AOrigLifePlayerCharacterBase>(GetOwningActor());
	if (!Character)
	{
		return;
	}
}
