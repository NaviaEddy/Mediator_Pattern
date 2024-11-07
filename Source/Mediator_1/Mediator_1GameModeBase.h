// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Mediator_1GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class MEDIATOR_1_API AMediator_1GameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AMediator_1GameModeBase();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere, Category="Game mode")
	class AJugador* Jugador;

	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class ATorreDeControl* TorreDeControl;

	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class ACampamento* Campamento;

	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class ACampoDeBatalla* CampoDeBatalla;

	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class AMediatorConcreto* Mediator;
	
};
