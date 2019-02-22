#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CVWorld.generated.h"

UCLASS()
class CUBICVOXEL_API ACVWorld : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACVWorld();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
