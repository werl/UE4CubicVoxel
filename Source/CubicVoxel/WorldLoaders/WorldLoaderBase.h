#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../Blocks/BlockComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "WorldLoaderBase.generated.h"

UCLASS()
class CUBICVOXEL_API AWorldLoaderBase : public AActor
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int numBlocks = 2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		//TArray<UInstancedStaticMeshComponent*> meshes;
	UInstancedStaticMeshComponent* mesh1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UInstancedStaticMeshComponent* mesh2;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBlockComponent* block1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBlockComponent* block2;

	UPROPERTY(EditAnywhere)
	int xSize = 5;
	UPROPERTY(EditAnywhere)
	int ySize = 5;
	UPROPERTY(EditAnywhere)
	int zSize = 5;

	UPROPERTY(VisibleAnywhere)
	TArray<int> blocks = TArray<int>();

	// Sets default values for this actor's properties
	AWorldLoaderBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
