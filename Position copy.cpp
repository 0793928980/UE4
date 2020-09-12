


#include "Position.h"
#include "GameFramework/Actor.h"
// Sets default values for this component's properties
UPosition::UPosition()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPosition::BeginPlay()
{
	Super::BeginPlay();
	
	StartPos = GetOwner()->GetActorLocation().Y;
	CurrentPos = StartPos;
	EndPos +=StartPos;
	
	
}


// Called every frame
void UPosition::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	CurrentPos = FMath::Lerp(CurrentPos,EndPos,DeltaTime*0.1f);
	FVector Go = GetOwner()->GetActorLocation();
	Go.Y = CurrentPos;
	GetOwner()->SetActorLocation(Go);

	
}

