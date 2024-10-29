// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyGameModeBase.generated.h"

/**
 * 
 */
class UGameHUD;
UCLASS()
class GAMEASSIGNEMENT_API AMyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Score")
	void IncreasePlayerScore();
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Score")
	int PlayerScore = 0;

protected:

	UPROPERTY(BlueprintReadWrite, Category = "References", meta = (BlueprintProtected))
	UGameHUD* GameHUDRef;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Float", meta = (BlueprintProtected))
	float BallSpeed = 1400.0f;
	
	
};
