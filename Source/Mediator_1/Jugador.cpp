// Fill out your copyright notice in the Description page of Project Settings.
#include "Jugador.h"
#include "IMediator.h"

// Sets default values
AJugador::AJugador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AJugador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AJugador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AJugador::EstablecerMediator(IIMediator* _Mediator)
{
	Mediator = _Mediator;
}

void AJugador::Atacar()
{
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("Jugador esta atacando.")));
	if (Mediator)
	{
		Mediator->Notificar(this, "Atacar");
	}
}

