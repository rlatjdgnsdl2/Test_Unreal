// Fill out your copyright notice in the Description page of Project Settings.


#include "Temp/TempGameMode.h"
#include "Temp/TempActor.h"

void ATempGameMode::BeginPlay()
{
	if (nullptr != TempActor)
	{
		AActor* Actor = GetWorld()->SpawnActor<ATempActor>(TempActor);
		if (Actor != nullptr)
		{
			Actor->SetActorLocation(FVector(500, 500, 500));
		}
	}
	else if (TempActor == nullptr)
	{
		//FVector a;
	}



	Super::BeginPlay();
#ifdef WITH_EDITOR
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("BeginPlay"));
#endif

}

void ATempGameMode::Tick(float _DeltaTime)
{
	Super::Tick(_DeltaTime);

}
void ATempGameMode::TempFunc()
{
	AActor* Actor = GetWorld()->SpawnActor<ATempActor>(TempActor);
	if (Actor == nullptr)
	{
		return;
	}
	Actor->SetActorLocation(FVector(500, 500, 500));

}
