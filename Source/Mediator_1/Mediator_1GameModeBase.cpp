// Copyright Epic Games, Inc. All Rights Reserved.
#include "Mediator_1GameModeBase.h"
#include "Jugador.h"
#include "TorreDeControl.h"
#include "Campamento.h"
#include "CampoDeBatalla.h"
#include "MediatorConcreto.h"

AMediator_1GameModeBase::AMediator_1GameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AMediator_1GameModeBase::BeginPlay()
{
	Super::BeginPlay();


    // Crear instancia del mediator
    Mediator = GetWorld()->SpawnActor<AMediatorConcreto>(AMediatorConcreto::StaticClass());

    // Crear instancias de los componentes
    Jugador = GetWorld()->SpawnActor<AJugador>(AJugador::StaticClass());
    TorreDeControl = GetWorld()->SpawnActor<ATorreDeControl>(ATorreDeControl::StaticClass());
    Campamento = GetWorld()->SpawnActor<ACampamento>(ACampamento::StaticClass());
    CampoDeBatalla = GetWorld()->SpawnActor<ACampoDeBatalla>(ACampoDeBatalla::StaticClass());

    // Inicializar el mediator con los componentes
    Mediator->InitializarComponentes(Jugador, TorreDeControl, Campamento, CampoDeBatalla);

	// Establecer el mediator en los componentes
    Jugador->EstablecerMediator(Mediator);
	TorreDeControl->EstablecerMediator(Mediator);
	Campamento->EstablecerMediator(Mediator);
	CampoDeBatalla->EstablecerMediator(Mediator);

    // Ahora los componentes pueden comunicarse a través del mediator
    if (Jugador)
    {
        Jugador->Atacar();
    }
}

void AMediator_1GameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
