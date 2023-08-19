#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "SelectionBox.generated.h"

UCLASS()
class GARUDARIFT_API ASelectionBox : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASelectionBox();

	// Mesh to be spawned
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* Mesh;

	// Method to handle left clicking
	UFUNCTION()
	void LeftClick(const FVector& ClickLocation);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	// Static mesh component
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* StaticMeshComponent;
};
