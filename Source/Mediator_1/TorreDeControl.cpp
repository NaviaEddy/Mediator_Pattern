// Fill out your copyright notice in the Description page of Project Settings.
#include "TorreDeControl.h"
#include "IMediator.h"

// Sets default values
ATorreDeControl::ATorreDeControl()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATorreDeControl::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATorreDeControl::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATorreDeControl::EstablecerMediator(IIMediator* _Mediator)
{
	Mediator = _Mediator;
}

void ATorreDeControl::AtenderAtaque()
{
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("Torre de Control está atendiendo el ataque.")));
}

