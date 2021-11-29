// Fill out your copyright notice in the Description page of Project Settings.


#include "FoodOre.h"

// Sets default values
AFoodOre::AFoodOre()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("StaticMeshComponent");

}

// Called when the game starts or when spawned
void AFoodOre::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFoodOre::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFoodOre::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

