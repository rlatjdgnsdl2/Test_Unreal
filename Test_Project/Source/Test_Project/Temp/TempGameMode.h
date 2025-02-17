// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "TempGameMode.generated.h"

/**
 * 
 */
UCLASS()
class TEST_PROJECT_API ATempGameMode : public AGameMode
{
	GENERATED_BODY()
public:
	//가나다라마바사
	UFUNCTION(BlueprintCallable, Category = "Temp|Temp_1")
	void TempFunc();

protected:
	void BeginPlay() override;
	void Tick(float _DeltaTime) override;
private:
	UPROPERTY()
	int TempValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SpawnActorList", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class ATempActor> TempActor = 0;
	
	

};
