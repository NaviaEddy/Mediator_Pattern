// Fill out your copyright notice in the Description page of Project Settings.
#include "MediatorConcreto.h"
#include "Jugador.h"
#include "TorreDeControl.h"
#include "Campamento.h"
#include "CampoDeBatalla.h"

// Sets default values
AMediatorConcreto::AMediatorConcreto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMediatorConcreto::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMediatorConcreto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMediatorConcreto::InitializarComponentes(AJugador* _Jugador, ATorreDeControl* _TorreDeControl, ACampamento* _Campamento, ACampoDeBatalla* _CampoDeBatalla)
{
	jugador = _Jugador;
	torre = _TorreDeControl;
	campamento = _Campamento;
	batalla = _CampoDeBatalla;
}

void AMediatorConcreto::Notificar(AActor* _enviar, const FString& _evento)
{
    if (_evento.Equals("Atacar"))
    {
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("Mediator reacciona al ataque y coordina acciones.")));
        torre->AtenderAtaque();
        campamento->EnviarRefuerzos();
    }
    if (_evento.Equals("Refuerzos"))
    {
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("Mediator reacciona al pedido de refuerzos y coordina acciones.")));
		batalla->RecibirRefuerzos();
    }
}

