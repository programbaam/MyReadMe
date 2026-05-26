// Fill out your copyright notice in the Description page of Project Settings.


#include "GitActor.h"

// Sets default values
AGitActor::AGitActor()
{
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGitActor::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Test"));
}

// Called every frame
void AGitActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UE_LOG(LogTemp, Warning, TEXT("BBB"));
}

