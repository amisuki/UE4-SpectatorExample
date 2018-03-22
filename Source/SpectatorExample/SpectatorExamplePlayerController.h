// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SpectatorExamplePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class SPECTATOREXAMPLE_API ASpectatorExamplePlayerController : public APlayerController
{
	GENERATED_BODY()
	
		UFUNCTION(BlueprintCallable, Category = NetTest)
		void NextPlayer();

	UFUNCTION(BlueprintCallable, Category = NetTest)
		void PrevPlayer();

	UFUNCTION(BlueprintCallable, Category = NetTest)
		void FreeCam();
	
	
};
