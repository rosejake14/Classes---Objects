// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Boardgame.h"
#include "WeaponTile.generated.h"

/**
 * 
 */
UCLASS()
class WORKSHOP2_API AWeaponTile : public ABoardgame
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
		int weaponType;

	UPROPERTY(EditAnywhere)
		int durability;

	UPROPERTY(EditAnywhere)
		int upgCost;

	UPROPERTY(EditAnywhere)
		int weaponDamage; 
public:
	AWeaponTile();

};
