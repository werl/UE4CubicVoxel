#include "WorldLoaderBase.h"
#include "Math/UnrealMathUtility.h"
#include "../Helpers/WorldHelpers.h"
#include "Engine/TriggerBox.h"
#include "Engine/World.h"

// Sets default values
AWorldLoaderBase::AWorldLoaderBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

//	chuckBounds = CreateDefaultSubobject<UBoxComponent>(TEXT("Bounds"));
//	chuckBounds->bHiddenInGame = true;
//	RootComponent = chuckBounds;

	mesh1 = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Mesh1"));
	mesh2 = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Mesh2"));

}

// Called when the game starts or when spawned
void AWorldLoaderBase::BeginPlay()
{
	Super::BeginPlay();

//	GetWorld()->SpawnActor(ATriggerBox::StaticClass());
	
	blocks.SetNum(xSize * ySize * zSize);

	for (int i = 0; i < xSize * ySize * zSize; i++) {
		blocks[i] = FMath::RandRange(0, numBlocks);
	}

	int index = 0;
	for (auto& num : blocks) {
		if (num == 2) {
			mesh1->AddInstance(FTransform(Helpers::WorldHelpers::IndexToFVector(index) * 100));
		}
		else if (num == 1){
			mesh2->AddInstance(FTransform(Helpers::WorldHelpers::IndexToFVector(index) * 100));
		}
		index++;
	}

}

// Called every frame
void AWorldLoaderBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
