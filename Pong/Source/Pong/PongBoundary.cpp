// Fill out your copyright notice in the Description page of Project Settings.


#include "PongBoundary.h"

// Sets default values
APongBoundary::APongBoundary()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Bounds = CreateDefaultSubobject<UBoxComponent>(TEXT("Bounds"));
	RootComponent = Bounds;
}



