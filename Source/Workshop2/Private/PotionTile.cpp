// Fill out your copyright notice in the Description page of Project Settings.


#include "PotionTile.h"

#include "PlayerTile.h"

int APotionTile::getPotionValue(int hpValue)
{
	healValue = (rand() % 100) + 10;
	return healValue;
}

APotionTile::APotionTile() {
	type = 1;
}

void APotionTile::Action(APlayerTile* player)
{
	healValue = (rand() % 100) + 10;
	if(player->hp+=healValue >= 100)
	{
		player->hp=100;
	}else
	{
		player->hp+=healValue;
	}
	Destroy();
	Super::Action(player);
}
