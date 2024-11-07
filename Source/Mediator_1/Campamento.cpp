// Fill out your copyright notice in the Description page of Project Settings.
#include "Campamento.h"
#include "IMediator.h"

// Sets default values
ACampamento::ACampamento()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACampamento::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACampamento::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACampamento::EstablecerMediator(IIMediator* _Mediator)
{
	Mediator = _Mediator;
}

void ACampamento::EnviarRefuerzos()
{
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("Campamento está enviando refuerzos.")));
	if (Mediator)
	{
		Mediator->Notificar(this, "Refuerzos");
	}
}

