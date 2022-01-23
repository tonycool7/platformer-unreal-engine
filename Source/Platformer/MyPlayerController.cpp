// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"

void AMyPlayerController::ExecuteJump() {
	//GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, "I pressed the jump key");
}

void AMyPlayerController::SetupInputComponent() {
	Super::SetupInputComponent();
	//InputComponent->BindAction("Jump", EInputEvent::IE_Pressed, this, &AMyPlayerController::ExecuteJump);
}