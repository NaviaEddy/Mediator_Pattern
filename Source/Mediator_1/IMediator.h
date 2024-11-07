// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IMediator.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIMediator : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class MEDIATOR_1_API IIMediator
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void Notificar(AActor* _enviar, const FString& _evento) = 0;
};
