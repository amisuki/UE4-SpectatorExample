// Fill out your copyright notice in the Description page of Project Settings.

#include "SpectatorExamplePlayerController.h"



void ASpectatorExamplePlayerController::NextPlayer()
{
	ServerViewNextPlayer();
}

void ASpectatorExamplePlayerController::PrevPlayer()
{
	ServerViewPrevPlayer();
}

void ASpectatorExamplePlayerController::FreeCam()
{
	ServerViewSelf();
}


void ASpectatorExamplePlayerController::ViewTarget(AActor *NewViewTarget)
{
	SetViewTarget(NewViewTarget);
}