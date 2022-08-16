// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/OrigLifePlayerCharacterBase.h"

#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"



namespace OrigLifeCharacter
{
	static float GroundTraceDistance = 100000.0f;
	FAutoConsoleVariableRef CVar_GroundTraceDistance(TEXT("OrigLifeCharacter.GroundTraceDistance"), GroundTraceDistance, TEXT("Distance to trace down when generating ground information."), ECVF_Cheat);
};


// Sets default values
AOrigLifePlayerCharacterBase::AOrigLifePlayerCharacterBase(const FObjectInitializer& ObjectInitializer)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	
	GetCharacterMovement()->GravityScale = 1.0f;
	GetCharacterMovement()->MaxAcceleration = 2400.0f;
	GetCharacterMovement()->BrakingFrictionFactor = 1.0f;
	GetCharacterMovement()->BrakingFriction = 6.0f;
	GetCharacterMovement()->GroundFriction = 8.0f;
	GetCharacterMovement()->BrakingDecelerationWalking = 1400.0f;
	GetCharacterMovement()->bUseControllerDesiredRotation = false;
	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f);
	GetCharacterMovement()->bAllowPhysicsRotationDuringAnimRootMotion = false;
	GetCharacterMovement()->GetNavAgentPropertiesRef().bCanCrouch = true;
	GetCharacterMovement()->bCanWalkOffLedgesWhenCrouching = true;
	GetCharacterMovement()->SetCrouchedHalfHeight(65.0f);

	
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;

	BaseEyeHeight = 80.0f;
	CrouchedEyeHeight = 50.0f;
}

// Called when the game starts or when spawned
void AOrigLifePlayerCharacterBase::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AOrigLifePlayerCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (IsValid(GetCharacterMovement()))
	{
		const FOrigLifeCharacterGroundInfo& GroundInfo = GetGroundInfo();

		GetCharacterMovement()->MaxFlySpeed = GroundInfo.GroundDistance;
	}
}

// Called to bind functionality to input
void AOrigLifePlayerCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

const FOrigLifeCharacterGroundInfo& AOrigLifePlayerCharacterBase::GetGroundInfo()
{
	if (!GetCharacterMovement())
	{
		return CachedGroundInfo;
	}

	if (GetCharacterMovement()->MovementMode == MOVE_Walking)
	{
		CachedGroundInfo.GroundHitResult = GetCharacterMovement()->CurrentFloor.HitResult;
		CachedGroundInfo.GroundDistance = 0.0f;
	}
	else
	{
		UCapsuleComponent* CapsuleComp = GetCapsuleComponent();
		check(CapsuleComp);

		const float CapsuleHalfHeight = CapsuleComp->GetUnscaledCapsuleHalfHeight();
		const ECollisionChannel CollisionChannel = (GetCharacterMovement()->UpdatedComponent ? GetCharacterMovement()->UpdatedComponent->GetCollisionObjectType() : ECC_Pawn);
		const FVector TraceStart(GetActorLocation());
		const FVector TraceEnd(TraceStart.X, TraceStart.Y, (TraceStart.Z - OrigLifeCharacter::GroundTraceDistance - CapsuleHalfHeight));

		FCollisionQueryParams QueryParams("", false, this);
		FCollisionResponseParams ResponseParam;
		GetCharacterMovement()->InitCollisionParams(QueryParams, ResponseParam);

		FHitResult HitResult;
		GetWorld()->LineTraceSingleByChannel(HitResult, TraceStart, TraceEnd, CollisionChannel, QueryParams, ResponseParam);

		CachedGroundInfo.GroundHitResult = HitResult;
		CachedGroundInfo.GroundDistance = OrigLifeCharacter::GroundTraceDistance;

		if (GetCharacterMovement()->MovementMode == MOVE_NavWalking)
		{
			CachedGroundInfo.GroundDistance = 0.0f;
		}
		else if (HitResult.bBlockingHit)
		{
			CachedGroundInfo.GroundDistance = FMath::Max((HitResult.Distance - CapsuleHalfHeight), 0.0f);
		}
	}

	CachedGroundInfo.LastUpdateFrame = GFrameCounter;

	return CachedGroundInfo;
}
