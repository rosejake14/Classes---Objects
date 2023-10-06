// Fill out your copyright notice in the Description page of Project Settings.

#include "Boardgame.h"
#include "TileMap.h"


// Sets default values
ATileMap::ATileMap()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Mapx.Init(10, 0);
	//Mapy.Init(10, 0);

	

}



void ATileMap::SpawnActor() {
	FActorSpawnParameters spawnParameters;
	spawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	actorsSpawned = 0;
	ABoardgame* temp;
	
	
	for (int i = 0; i< 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if(i==0 && j==0)
			{
				actorToSpawn = TileList[5];
				
				
			}else
			{
				int randomTile = rand()% 5;
				actorToSpawn = TileList[randomTile];
				
			}
				
				spawnPos.SetLocation(FVector3d(i*100,j*100, 50));
			
				temp = (ABoardgame*) GetWorld()->SpawnActor<AActor>(actorToSpawn, spawnPos, spawnParameters);
				actorInPlace[actorsSpawned] = temp;
				actorsSpawned++;
				temp->tileMap=this;
				//GetWorld()->SpawnActor<AActor>(actorToSpawn, spawnPos, spawnParameters);
				
		}

	}
	
}

// Called when the game starts or when spawned
void ATileMap::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATileMap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

