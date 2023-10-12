// Fill out your copyright notice in the Description page of Project Settings.


#include "Moveleftright.h"

// Sets default values
AMoveleftright::AMoveleftright():LocX(0), isMoveRight(true)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Scene = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SceneRootRoot"));
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("mymymesh"));

	SetRootComponent(Scene);
	//RootComponent = Scene;

	StaticMesh->AttachToComponent(Scene, FAttachmentTransformRules::KeepRelativeTransform);
	//StaticMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	/*static ConstructorHelpers::FObjectFinder<UStaticMesh> sm(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Props/SM_Chair.SM_Chair'"));

	if (sm.Succeeded())
	{
		StaticMesh->SetStaticMesh(sm.Object);
	}*/
}

AMoveleftright::~AMoveleftright()
{

}

// Called when the game starts or when spawned
void AMoveleftright::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMoveleftright::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	StaticMesh->SetRelativeLocation(FVector(LocX,0,0));

	if (isMoveRight == true)
	{
		LocX += 1;
		
		if(LocX >= 200)
		{
			isMoveRight = false;
		}
	}
	else if (isMoveRight == false)
	{
		LocX -= 1;
		if(LocX <= -200)
		{
			isMoveRight = true;
		}
		
	}
	

	
	

}

