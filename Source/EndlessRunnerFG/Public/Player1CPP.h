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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=hej)
	bool hej;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
	void Jump();

	UFUNCTION(BlueprintCallable)
	void HejFunc();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
