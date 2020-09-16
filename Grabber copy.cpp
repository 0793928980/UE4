// CopyRight_BinhLe
#include "DrawDebugHelpers.h"
#include "Engine/EngineTypes.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "CollisionQueryParams.h"
#include "Components/PrimitiveComponent.h"
#include "Grabber.h"

// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}
// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();
	//Check Physics Handle Component 
	FindThePhysicsHandle();
	SetupInputComponent();
	
	
	// }else
	
	// 	UE_LOG(LogTemp,Error, TEXT("Input component Missing"),*GetOwner()->GetName());
}

void UGrabber::SetupInputComponent()
{
	InputComponent = GetOwner()->FindComponentByClass<UInputComponent>();

	if(InputComponent)
	{
		InputComponent->BindAction("Grabber",IE_Pressed,this,&UGrabber::Grab);
		InputComponent->BindAction("Grabber",IE_Released,this,&UGrabber::Release);
	}


}






//Check FindThePhysicsHandle
void UGrabber::FindThePhysicsHandle()
{
	PhysicsHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();

	if(PhysicsHandle)
	{
		UE_LOG(LogTemp, Warning, TEXT("Have Physics Handly is "),*GetOwner()->GetName());
	}else
	{
		UE_LOG(LogTemp,Error,TEXT("No Physics Handly find "),*GetOwner()->GetName());
	}
}

void UGrabber::Grab()
{


	FVector LineTraceEnd1 = LineTraceEnd();

	UE_LOG(LogTemp,Warning, TEXT("Grab a press "));
	FHitResult HitResult = GetFirstPhysicsBodyInReach();                   
	UPrimitiveComponent *ComponentGrab = HitResult.GetComponent();

	//if we hit something then attach a physics handle 

	if(HitResult.GetActor())
	{
		//To Do attach the physics handle 
		PhysicsHandle->GrabComponentAtLocation(ComponentGrab,NAME_None,LineTraceEnd1);
	}
	
	
		


}


void UGrabber::Release()
{
	UE_LOG(LogTemp,Warning, TEXT("Grab a Released "));

	//To Do will remove/release Physics handle 
	PhysicsHandle->ReleaseComponent();


}
// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	FVector LTE = LineTraceEnd();
	//If Physics handle is attach
	if(PhysicsHandle->GrabbedComponent)
		//Move the object we are holding 
	{
		PhysicsHandle->SetTargetLocation(LTE);
	}
	


}

FVector UGrabber::LineTraceEnd()
{

	FVector PlayerPointLocation;
	FRotator  PlayerPointRotation;
	
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(
	PlayerPointLocation,
 	PlayerPointRotation
	);
	FVector LineTraceEnd = PlayerPointLocation + PlayerPointRotation.Vector()*Reach;

	return LineTraceEnd;
	
}


FHitResult UGrabber::GetFirstPhysicsBodyInReach()
{

	FVector PlayerPointLocation;
	FRotator  PlayerPointRotation;
	// Get Players viewpoint
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(
	PlayerPointLocation,
 	PlayerPointRotation
	);
	FVector LineTraceEnd = PlayerPointLocation + PlayerPointRotation.Vector()*Reach;
	//Ray-cast out to a certain distance (Reach)
	FHitResult Hits;
	FCollisionQueryParams TraceParams(FName(TEXT("")),false,GetOwner());//Mo hinh theo doi.
	GetWorld()->LineTraceSingleByObjectType(
		Hits,
		PlayerPointLocation,
		LineTraceEnd,
		FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody),
		TraceParams
	);

	AActor *ActorHit = Hits.GetActor();
	if(ActorHit)
	{
		UE_LOG(LogTemp,Error,TEXT("Line Trace is Hit: %s"),*ActorHit->GetName());
	}
	
	return Hits;


}

