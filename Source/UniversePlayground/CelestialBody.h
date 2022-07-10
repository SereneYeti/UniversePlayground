// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMesh.h"
#include "Math/Vector.h"
#include "GameFramework/Actor.h"
#include "CelestialBody.generated.h"

UCLASS()
class UNIVERSEPLAYGROUND_API ACelestialBody : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACelestialBody();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//This holds a reference to the actor
	UPROPERTY(EditAnywhere, Category = "Body Characteristics")
	UStaticMesh* celestialBody;
	//This is the name given to the celestial Body
	UPROPERTY(EditAnywhere, Category = "Body Characteristics")
	FString bodyName = "Unamed";
	//This hold the mass of this celestial body
	UPROPERTY(EditAnywhere, Category = "Body Characteristics")
	float cb_mass;
	//The radius of the celestialBody
	UPROPERTY(EditAnywhere, Category = "Body Characteristics")
	float cb_Radius;	

/*
	The universal law of gravitation by Newton- 
	“All bodies in the universe attract other bodies with a force that is directly proportional to their masses 
	and inversely proportional to the square of the distance between them, and this force is called gravitational force.”
				2
	Force=Gm1 × m2/r
*/
	
	//This will be the method used to calculate Newtons law of gravity.	 
	float CalculateForce();
	//This is the distance between mass one and mass 2
	UPROPERTY(EditAnywhere, Category = "NewtonsLawOfGravity")	
	float radius;	
	UPROPERTY(EditAnywhere, Category = "NewtonsLawOfGravity")
	FVector initialVelocity;
	UPROPERTY(EditAnywhere, Category = "NewtonsLawOfGravity")	
	FVector currentVelocity;
		
private:

	//float GetDiameter();
	//float GetCircumference();

};
