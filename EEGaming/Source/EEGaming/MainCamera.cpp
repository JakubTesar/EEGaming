// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCamera.h"

#include "GameFramework/SpringArmComponent.h"

// Sets default values
AMainCamera::AMainCamera()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CameraComponent = CreateDefaultSubobject<UCameraComponent>("Camera");

}

// Called when the game starts or when spawned
void AMainCamera::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMainCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMainCamera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Forward", this, &AMainCamera::MoveFoward);
	PlayerInputComponent->BindAxis("Sideways", this, &AMainCamera::MoveSideways);
}

void AMainCamera::MoveFoward(float Direction)
{
	AddMovementInput(GetActorForwardVector(), Direction);
}
void AMainCamera::MoveSideways(float Direction)
{
	AddMovementInput(GetActorRightVector(), Direction);
}