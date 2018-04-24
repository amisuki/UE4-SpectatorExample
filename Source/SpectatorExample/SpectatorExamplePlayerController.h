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
	
private:
	//FViewTargetTransitionParams m_TransitionParams;

private:
	UFUNCTION(BlueprintCallable, Category = Camera)
	void NextPlayer();

	UFUNCTION(BlueprintCallable, Category = Camera)
	void PrevPlayer();

	UFUNCTION(BlueprintCallable, Category = Camera)
	void FreeCam();

	UFUNCTION(BlueprintCallable, Category = Camera)
	void ViewTarget(AActor *NewViewTarget);

public:
	
	//UFUNCTION(BlueprintCallable, Category = Camera)
	//void SetCustomViewTargetWithBlend(float BlendTime, EViewTargetBlendFunction BlendFunc, float BlendExp, bool bLockOutgoing);
};
