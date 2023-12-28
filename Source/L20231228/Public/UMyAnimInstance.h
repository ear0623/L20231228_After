// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "UMyAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class L20231228_API UUMyAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:

	UUMyAnimInstance();

	UFUNCTION(BlueprintCallable)
	virtual void NativeUpdateAnimation(float DeltaSeconds)override;
	
	UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="Stat")
	float Speed;
	
};
