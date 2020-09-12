// CopyRight_BinhLe

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TriggerVolume.h"
#include "OpenDoor.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYHOME_API UOpenDoor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOpenDoor();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	
	void OpenDoorOut(float DeltaTime);
	void CloseDoorOut(float DeltaTime);

	void OpenDoorIn(float DeltaTime);
	void CloseDoorIn(float DeltaTime);

private:
	//OpenDoor Out and Close Out
	UPROPERTY(EditAnywhere)
	float StartYaw;

	UPROPERTY(EditAnywhere)
	float CurrentYaw;

	UPROPERTY(EditAnywhere)
	float EndYaw=-90.f;

	UPROPERTY(EditAnywhere)
	float DoorLastOpened = 0.f;	
	
	UPROPERTY(EditAnywhere)
	float DoorCLoseDelay = 1.f;
	
	

	UPROPERTY(EditAnywhere)
	ATriggerVolume* TriggerVolume;

	

	UPROPERTY(EditAnywhere)
	AActor *ActorOpen;

	UPROPERTY(EditAnywhere)
	float SpeedOpenDoor = 2.f;

	UPROPERTY(EditAnywhere)
	float SpeedCloseDoor = 2.f;

	
};

