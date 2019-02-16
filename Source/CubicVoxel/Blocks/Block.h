#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Block.generated.h"

UCLASS(Blueprintable, BlueprintType, Abstract, Meta = (BlueprintSpawnableComponent))
class CUBICVOXEL_API ABlock : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    ABlock();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* blockMesh;

    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    bool BreakBlock();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	bool CanTick();

};
