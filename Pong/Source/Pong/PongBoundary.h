// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "PongBoundary.generated.h"

class APongGameMode;

UCLASS()
class PONG_API APongBoundary : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APongBoundary();

protected:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Boundary Type", meta = (BlueprintProtected))
	bool isGoal = false;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Boundary Type", meta = (BlueprintProtected))
	bool isLeftGoal = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "References", meta = (BlueprintProtected))
	APongGameMode* GameModeRef;

private:
	UPROPERTY(VisibleAnywhere, Category = "Collision");
	UBoxComponent* Bounds;


};
