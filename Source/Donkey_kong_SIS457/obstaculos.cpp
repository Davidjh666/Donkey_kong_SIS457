// Fill out your copyright notice in the Description page of Project Settings.


#include "obstaculos.h"

Aobstaculos::Aobstaculos()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	Meshobstaculos = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	Meshobstaculos->SetStaticMesh(MeshAsset.Object);
	RootComponent = Meshobstaculos;

	// Supongamos que tienes un puntero al actor llamado MyActor
	//FVector NewScale(2.0f, 0.25f, 2.0f); // Cambia estos valores según tus necesidades
	//SetActorScale3D(NewScale);


    velocidad = 1.0f;
    tiempo = 1.0f;
    direccion = true;


}

void Aobstaculos::mover()
{

    FVector NewLocation = GetActorLocation();

    if (direccion)
    {
        NewLocation.Z += 1.0f; // Movemos el actor hacia arriba
        if (NewLocation.Z >= 300.0f) // Límite superior
        {
            direccion = false; // Cambiamos la dirección hacia abajo
        }
    }
    else
    {
        NewLocation.Z -= 1.0f; // Movemos el actor hacia abajo
        if (NewLocation.Z <= 100.0f) // Límite inferior
        {
            direccion = true; // Cambiamos la dirección hacia arriba
        }
    }

    SetActorLocation(NewLocation);


}

void Aobstaculos::mover2()
{
}

void Aobstaculos::mover3()
{
}

void Aobstaculos::SetVelocidad(float NuevaVelocidad)
{
}

float Aobstaculos::GetVelocidad() const
{
	return 0.0f;
}

void Aobstaculos::SetTiempo(float NuevoTiempo)
{
}

float Aobstaculos::GetTiempo() const
{
	return 0.0f;
}

void Aobstaculos::BeginPlay()
{
	Super::BeginPlay();
}


void Aobstaculos::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	mover();
}
