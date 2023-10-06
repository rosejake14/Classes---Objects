// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "GameFramework/Actor.h"

#include "TileMap.generated.h"

class ABoardgame;

UCLASS()
class WORKSHOP2_API ATileMap : public AActor
{
	GENERATED_BODY()

		/*UPROPERTY(EditAnywhere)
			TArray<ATileMap*> Mapx;
	UPROPERTY(EditAnywhere)
		TArray<ATileMap*> Mapy;*/
		

	
public:	
	// Sets default values for this actor's properties
	ATileMap();
	void GridLocator();
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TArray<TSubclassOf<AActor>> TileList;
	
	UFUNCTION(BlueprintCallable, Category = "Startup")
		void SpawnActor();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TSubclassOf<AActor> actorToSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TArray<ABoardgame*> actorInPlace;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FTransform spawnPos;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int actorsSpawned;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
