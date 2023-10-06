// Fill out your copyright notice in the Description page of Project Settings.

#include "TileMap.h"
#include "PlayerTile.h"
#include "Boardgame.h"

// Sets default values
ABoardgame::ABoardgame()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	type = 0;
}

void ABoardgame::Action(APlayerTile* player)
{
	
}

// Called when the game starts or when spawned
void ABoardgame::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABoardgame::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

