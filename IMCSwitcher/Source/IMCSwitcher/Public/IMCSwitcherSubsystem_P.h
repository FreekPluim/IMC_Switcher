// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "Subsystems/Subsystem.h"
#include "InputMappingContext.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

#include "IMCSwitcherSubsystem_P.generated.h"

/**
 * 
 */
UCLASS()
class IMCSWITCHER_API UIMCSwitcherSubsystem_P : public UWorldSubsystem
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "IMC Switcher")
	void SetActiveIMC(UInputMappingContext* NewIMC);
};
