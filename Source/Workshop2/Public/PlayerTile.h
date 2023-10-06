// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Boardgame.h"
#include "TileMap.h"
#include "PlayerTile.generated.h"


/**
 * 
 */
UCLASS()
class WORKSHOP2_API APlayerTile : public ABoardgame
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "Movement")
		void MoveR();

	UFUNCTION(BlueprintCallable, Category = "Movement")
		void MoveL();

	UFUNCTION(BlueprintCallable, Category = "Movement")
		void MoveD();
	
	UFUNCTION(BlueprintCallable, Category = "Movement")
		void MoveU();

	
	
	UPROPERTY(EditAnywhere)
		int x;
	UPROPERTY(EditAnywhere)
		int y;
	//UPROPERTY(EditAnywhere)
		//AWeaponTile* weaponType;
	UPROPERTY(EditAnywhere)
		int placeOnMap;
public:
	
	UPROPERTY(EditAnywhere)
		int gold;
	UPROPERTY(EditAnywhere)
		int hp;
	APlayerTile();
	UFUNCTION(BlueprintCallable, Category = "Movement")
		void checkTile();
};
