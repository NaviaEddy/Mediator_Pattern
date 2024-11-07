// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "IMediator.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MediatorConcreto.generated.h"

UCLASS()
class MEDIATOR_1_API AMediatorConcreto : public AActor, public IIMediator
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMediatorConcreto();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere, Category = "Mediator Concreto")
	class AJugador* jugador;

	UPROPERTY(VisibleAnywhere, Category = "Mediator Concreto")
	class ATorreDeControl* torre;

	UPROPERTY(VisibleAnywhere, Category = "Mediator Concreto")
	class ACampamento* campamento;

	UPROPERTY(VisibleAnywhere, Category = "Mediator Concreto")
	class ACampoDeBatalla* batalla;

public:
	void InitializarComponentes(AJugador* _Jugador, ATorreDeControl* _TorreDeControl, ACampamento* _Campamento, ACampoDeBatalla* _CampoDeBatalla);

	void Notificar(AActor* _enviar, const FString& _evento) override;


};
