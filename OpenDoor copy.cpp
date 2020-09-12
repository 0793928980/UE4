// CopyRight_BinhLe

#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "OpenDoor.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();
	if(TriggerVolume)
	{
		StartYaw = GetOwner()->GetActorRotation().Yaw;
		CurrentYaw = StartYaw;
		EndYaw +=StartYaw;
	}

	
	
	if(!TriggerVolume)
	{
		UE_LOG(LogTemp,Error,TEXT("%s has the open door componet on it, but no TriggerVolume set."),*GetOwner()->GetName());
		//ActorName has the open door componet on it, but no TriggerVolume set.

	}
	

	
	
}


// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	
	ActorOpen	= GetWorld()->GetFirstPlayerController()->GetPawn();
	if(TriggerVolume && TriggerVolume->IsOverlappingActor(ActorOpen))
	{
		OpenDoorOut(DeltaTime);
		DoorLastOpened = GetWorld()->GetTimeSeconds();//When Door open sau cung`
	}else
	{
		//If Open longer than DoorCloseDelay can CloseDoorOut
		if(GetWorld()->GetTimeSeconds() - DoorLastOpened >DoorCLoseDelay)
		{ 
			CloseDoorOut(DeltaTime);
		}
		
		
	}
	
	
	
	
}
void UOpenDoor::OpenDoorOut(float DeltaTime)
{
	// float Mydoor = 10.f;//NO Use

	// FRotator Rotation = GetOwner()->GetActorRotation();
	// Rotation.Yaw = 90.f;
	// UE_LOG(LogTemp,Warning, TEXT("%s"),*GetOwner()->GetActorRotation().ToString());
	// UE_LOG(LogTemp,Warning,TEXT("Yaw is: %f"),GetOwner()->GetActorRotation().Yaw);
	
	//Initial Value Star at position Yaw of Rotation.
	//FRotator OpenDoor (0.f,EndYaw,0.f);//OpenDoor only with Yaw.
	//OpenDoor.Yaw = FMath::FInterpConstantTo(StartYaw,EndYaw,DeltaTime,60);
	//Change value from Start to End in truc Yaw in the DeltaTime, and speed open door slow down while to 60 arge
	//GetOwner()->SetActorRotation(OpenDoor); //Set Active opendoor auto.
	CurrentYaw = FMath::Lerp(CurrentYaw,EndYaw,DeltaTime*SpeedOpenDoor);
	FRotator DoorRotation = GetOwner()->GetActorRotation();
	DoorRotation.Yaw= CurrentYaw;
	GetOwner()->SetActorRotation(DoorRotation);
}

void UOpenDoor::CloseDoorOut(float DeltaTime)
{
	
	CurrentYaw = FMath::Lerp(CurrentYaw,StartYaw,DeltaTime*SpeedCloseDoor);
	FRotator DoorRotation = GetOwner()->GetActorRotation();
	DoorRotation.Yaw= CurrentYaw;
	GetOwner()->SetActorRotation(DoorRotation);
}


