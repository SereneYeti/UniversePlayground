// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/GameInstance.h"
#include "Containers/Array.h"
#include "MyUniverseInstance.generated.h"

/**
 * 
 */
UCLASS()
class UNIVERSEPLAYGROUND_API UMyUniverseInstance : public UGameInstance
{
	GENERATED_BODY()

protected:
	//Runs when the program starts
	virtual void OnStart();

public:
	TArray<float> testArr;

};
