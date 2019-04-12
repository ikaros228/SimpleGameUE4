// Fill out your copyright notice in the Description page of Project Settings.

#include "Enemy_Source.h"

// Sets default values
AEnemy_Source::AEnemy_Source()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AEnemy_Source::DoDamageAtEnemy(int damageToDo)
{
	if (HP <= damageToDo)
		isDead = true;
	else
		HP -= damageToDo;
}

void AEnemy_Source::DoArmorDamageAtEnemy(int damageToDo)
{
	if (Armor <= damageToDo)
		Armor = 0;
	else
		Armor -= damageToDo;
}

// Called when the game starts or when spawned
void AEnemy_Source::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemy_Source::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemy_Source::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

