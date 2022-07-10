// Fill out your copyright notice in the Description page of Project Settings.


#include "MyUniverseInstance.h"

void UMyUniverseInstance::OnStart()
{
	Super::OnStart();	
   testArr.Add(1);
   UE_LOG(LogTemp, Warning, TEXT("This is a test log! \nHere is the test variable in the array: %f"), testArr[0]);
};