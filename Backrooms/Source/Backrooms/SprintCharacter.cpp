#include "SprintCharacter.h"

ASprintCharacter::ASprintCharacter()
{
    PrimaryActorTick.bCanEverTick = true;
    MaxStamina = 100.f;
    Stamina = MaxStamina;
    StaminaDrainRate = 20.f; // Stamina per second
    bIsSprinting = false;
}

void ASprintCharacter::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

    if (bIsSprinting && Stamina > 0.f)
    {
        Stamina = FMath::Max(0.f, Stamina - StaminaDrainRate * DeltaSeconds);
        if (Stamina <= 0.f)
        {
            StopSprinting();
        }
    }
}

void ASprintCharacter::StartSprinting()
{
    bIsSprinting = true;
}

void ASprintCharacter::StopSprinting()
{
    bIsSprinting = false;
}
