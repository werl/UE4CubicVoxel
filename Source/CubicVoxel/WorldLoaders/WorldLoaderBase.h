#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../Blocks/Block.h"
#include "WorldLoaderBase.generated.h"

UCLASS()
class CUBICVOXEL_API AWorldLoaderBase : public AActor
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere)
	ABlock* breakable;
	UPROPERTY(EditAnywhere)
	ABlock* unbreakable;

	UPROPERTY(EditAnywhere)
	int xSize = 10;
	UPROPERTY(EditAnywhere)
	int ySize = 10;
	UPROPERTY(EditAnywhere)
	int zSize = 1;

	UPROPERTY(VisibleAnywhere)
	TArray<ABlock*> blocks;

	// Sets default values for this actor's properties
	AWorldLoaderBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
