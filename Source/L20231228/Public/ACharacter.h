// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ACharacter.generated.h"

class UInputAction;
struct FInputActionValue;
class UINputMappingContext;
class USpringArmComponent;
class UCameraComponent;


UCLASS()
class L20231228_API AACharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AACharacter();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	//InputAction
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Input",meta=(AllowPrivateAccess = "ture"))
	TObjectPtr<UInputAction> Move;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Input",meta=(AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> Look;

	void MoveCharacter(const FInputActionValue& value);

	void LookCharacter(const FInputActionValue& value);

public:
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Camera")
	TObjectPtr<USpringArmComponent> SpringArm;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Camera")
	TObjectPtr<UCameraComponent> Camera;

	//cdo

};
