// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPlayerController.h"
#include "BattleTank.h"

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayController Not posessing Tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayController posessing: %s"), *(ControlledTank->GetName()));
	}
	
}


void ATankPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AimTowardCrosshair();
	//UE_LOG(LogTemp, Warning, TEXT("PlayerController Ticking"));
}

ATank * ATankPlayerController::GetControlledTank() const 
{
	return Cast<ATank>(GetPawn());

}

void ATankPlayerController::AimTowardCrosshair()
{
	if (!GetControlledTank()) 
	{
		return;
	}
	//Get world location if linetrace through crosshair
	//If it hits landscape
		//Tell controlled tank to aim at this point

}
	
	
