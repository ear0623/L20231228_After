// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ABarbaPlayerController.generated.h"

class UInputMappingContext;

/**
 * 
 */
UCLASS()
class L20231228_API AABarbaPlayerController : public APlayerController
{
	GENERATED_BODY()

public:

	AABarbaPlayerController();

	virtual void BeginPlay() override;

public:
	//input
	UPROPERTY(EditAnywhere,Category="input")
	TObjectPtr<UInputMappingContext> DefaultMappingContext;
};
