// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Jugador.generated.h"

UCLASS()
class MEDIATOR_1_API AJugador : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AJugador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	class IIMediator* Mediator;

public:
	void EstablecerMediator(IIMediator* InMediator);

	void Atacar();

};