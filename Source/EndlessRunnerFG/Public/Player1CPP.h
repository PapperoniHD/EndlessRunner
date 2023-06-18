// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "Player1CPP.generated.h"

UCLASS(config=Game)
class ENDLESSRUNNERFG_API APlayer1CPP : public ACharacter
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;
	
		/** Jump Input Action */
		UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		class UInputAction* JumpAction;

	/** Move Input Action */
		UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		class UInputAction* MoveAction;

	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputMappingContext* DefaultMappingContext;

public:
	// Sets default values for this character's properties
	APlayer1CPP();
	//Player lives
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Lives)
	int Lives;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void printJump();
	void Jump();

	//Constant movement 
	virtual void AddMovementInput
(
	FVector WorldDirection,
	float ScaleValue,
	bool bForce
);
	
	
	UFUNCTION(BlueprintCallable)
	void HejFunc();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
	

};
