// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Boardgame.generated.h"

class ATileMap;
class APlayerTile;

UCLASS()
class WORKSHOP2_API ABoardgame : public AActor
{
	GENERATED_BODY()

	
	
public:	
	// Sets default values for this actor's properties
	ABoardgame();
	int type;
	UPROPERTY(EditAnywhere)
	ATileMap* tileMap;
	virtual void Action(APlayerTile* player);
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

