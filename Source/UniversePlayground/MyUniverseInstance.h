// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/GameInstance.h"
#include "Containers/Array.h"
#include "Math/Vector.h"
#include "CelestialBody.h"
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
	// This is an array of all celestial bodies in the application
	TArray<ACelestialBody> celestialBodies;

	//This is the function responsible for all the initial setup
	void InitialSetup();

	FVector CalculateAcceleration(FVector point, ACelestialBody ignoreBody);

};
