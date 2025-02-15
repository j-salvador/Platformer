// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyHealthAddition.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER_API UMyHealthAddition : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable)
		static float HealthAddition(const float in);
};
