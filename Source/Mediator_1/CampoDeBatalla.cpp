// Fill out your copyright notice in the Description page of Project Settings.
#include "CampoDeBatalla.h"
#include "IMediator.h"

// Sets default values
ACampoDeBatalla::ACampoDeBatalla()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACampoDeBatalla::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACampoDeBatalla::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACampoDeBatalla::EstablecerMediator(IIMediator* _Mediator)
{
	Mediator = _Mediator;
}

void ACampoDeBatalla::RecibirRefuerzos()
{
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("Campo de Batalla está recibiendo refuerzos.")));
}

