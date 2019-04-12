// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enemy_Source.generated.h"

UCLASS()
class SIMPLEGAME_API AEnemy_Source : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemy_Source();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EnemyStat")
    int HP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EnemyStat")
	int Stamina;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EnemyStat")
	int Armor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EnemyStat")
	bool isDead;

	UFUNCTION(BlueprintCallable, Category="StatFunc")
    void DoDamageAtEnemy(int damageToDo);

	UFUNCTION(BlueprintCallable, Category = "StatFunc")
	void DoArmorDamageAtEnemy(int damageToDo);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta = (KeyWords="Enemy|Kill|Dead|Destroy"), Category = "EnemyBehaviour")
	bool Dead(bool ForceDead);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
