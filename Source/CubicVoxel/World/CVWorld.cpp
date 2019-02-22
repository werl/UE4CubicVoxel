#include "CVWorld.h"

// Sets default values
ACVWorld::ACVWorld()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACVWorld::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACVWorld::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

