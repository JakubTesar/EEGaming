// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "MainCamera.generated.h"

UCLASS()
class EEGAMING_API AMainCamera : public ACharacter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	UCameraComponent* CameraComponent;
	OnClicked->AddUniqueDynamic(this, &AMainCamera::OnSelected);

	UPROPERTY(EditAnywhere)
	USpringArmComponent* SpringArmComponent;
	// Sets default values for this character's properties
	AMainCamera();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	void MoveFoward(float Direction);
	void MoveSideways(float Direction);

};
UFUNCTION()
		void OnSelected(AActor* Target, FKey ButtonPressed);