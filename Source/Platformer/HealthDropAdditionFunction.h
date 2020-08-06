// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HealthDropAdditionFunction.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER_API UHealthDropAdditionFunction : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable)
		static float addValue(const float num);
};
