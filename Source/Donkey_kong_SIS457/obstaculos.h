// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "enemigo.h"
#include "obstaculos.generated.h"

/**
 * 
 */
UCLASS()
class DONKEY_KONG_SIS457_API Aobstaculos : public Aenemigo
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	Aobstaculos();

	void mover();
    void mover2();
	void mover3();
 
	// Métodos para encapsulamiento
	void SetVelocidad(float NuevaVelocidad);
	float GetVelocidad() const;

	void SetTiempo(float NuevoTiempo);
	float GetTiempo() const;
	
private:
	float velocidad = 1;
	float tiempo = 1;
	bool direccion = true;


protected:
	UStaticMeshComponent* Meshobstaculos;
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	
};
