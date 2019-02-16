#include "WorldLoaderBase.h"
#include "Engine/World.h"

// Sets default values
AWorldLoaderBase::AWorldLoaderBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}


// Called when the game starts or when spawned
void AWorldLoaderBase::BeginPlay()
{
	Super::BeginPlay();
	
	int index = 0;

	for (int z = 0; z < zSize; z++) {
		for (int x = 0; x < xSize; x++) {
			for (int y = 0; y < ySize; y++) {
				index++;
				ABlock* blockToUse;

				if (z == 0) {
					blockToUse = unbreakable;
				}
				else {
					blockToUse = breakable;
				}

				FActorSpawnParameters parameters;
				parameters.Name = FName(TEXT("Block"), index);
				
				FVector vector(x * 100, y * 100, z * 100);
				
				FRotator rotator(0, 0, 0);

				FTransform transform;
				transform.SetLocation(vector);
				transform.SetRotation(FQuat(rotator));

				ABlock* block = (ABlock*)GetWorld()->SpawnActor(blockToUse->GetClass(), &transform, parameters);

				if (block == nullptr) {
					UE_LOG(LogTemp, Warning, TEXT("Block was null"));
				}

				blocks.Add(block);
			}
		}
	}
}

// Called every frame
void AWorldLoaderBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

