// Fill out your copyright notice in the Description page of Project Settings.


#include "IMCSwitcherSubsystem_P.h"

void UIMCSwitcherSubsystem_P::SetActiveIMC(UInputMappingContext* NewIMC)
{
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	ULocalPlayer* LocalPlayer = PlayerController->GetLocalPlayer();

	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(LocalPlayer);
	Subsystem->ClearAllMappings();
	Subsystem->AddMappingContext(NewIMC, 0);
}