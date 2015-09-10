// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerState.h"
#include "CubeWarsPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class CUBEWARS_API ACubeWarsPlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	ACubeWarsPlayerState();

	void SetTeamNumber(int32 NewTeamNumber);

	int32 GetTeamNumber() const;

	void AddPoints(int32 amount = 1);

	int32 GetPoints();
	
protected:
	UPROPERTY(Transient, Replicated)
	int32 TeamNumber;

	UPROPERTY(Transient, Replicated)
	int32 Points;
};
