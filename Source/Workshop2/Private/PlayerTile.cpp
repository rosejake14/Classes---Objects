// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerTile.h"


APlayerTile::APlayerTile()
{
	hp = 100;
	gold = 0;
	x = 0;
	y = 0;
	placeOnMap = 0;
}

void APlayerTile::MoveR()
{
	if(placeOnMap % 9 != 8)
	{
		this->SetActorLocation(FVector3d(this->GetActorLocation().X + 100,this->GetActorLocation().Y,0));
		placeOnMap++;
		checkTile();
	}
}

void APlayerTile::MoveL()
{
	if(placeOnMap % 9)
	{
		this->SetActorLocation(FVector3d(this->GetActorLocation().X - 100,this->GetActorLocation().Y,0));
		placeOnMap--;
		checkTile();
	}
	
}

void APlayerTile::MoveD()
{
	if(placeOnMap <= 71)
	{
		this->SetActorLocation(FVector3d(this->GetActorLocation().X,this->GetActorLocation().Y + 100,0));
		placeOnMap+=9;
		checkTile();
	}
	
}

void APlayerTile::MoveU()
{
	if(placeOnMap >= 9)
	{
		this->SetActorLocation(FVector3d(this->GetActorLocation().X,this->GetActorLocation().Y - 100,0));
		placeOnMap-=9;
		UE_LOG(LogTemp, Warning, TEXT("Type: %d"), tileMap->actorInPlace[placeOnMap]->type);
		checkTile();
	}
	
}
/*
*0 = Gold
*1 = Blank
*2 = Weapon
*3 = Potion
*4 = Monster
*5 = Player
*/
void APlayerTile::checkTile()
{
	UE_LOG(LogTemp, Warning, TEXT("Tile checked"));
	switch(tileMap->actorInPlace[placeOnMap]->type)
	{
	case(1):
		UE_LOG(LogTemp, Warning, TEXT("Potion!"));
		tileMap->actorInPlace[placeOnMap]->Action(this);
		break;
		
	default:
		UE_LOG(LogTemp, Warning, TEXT("nul case"));
		break;
	}
}
