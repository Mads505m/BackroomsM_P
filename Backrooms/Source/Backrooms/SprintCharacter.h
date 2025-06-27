#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SprintCharacter.generated.h"

UCLASS()
class BACKROOMS_API ASprintCharacter : public ACharacter
{
    GENERATED_BODY()
public:
    ASprintCharacter();

    virtual void Tick(float DeltaSeconds) override;

    UFUNCTION(BlueprintCallable, Category="Sprint")
    void StartSprinting();

    UFUNCTION(BlueprintCallable, Category="Sprint")
    void StopSprinting();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Sprint")
    float Stamina;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Sprint")
    float MaxStamina;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Sprint")
    float StaminaDrainRate;

private:
    bool bIsSprinting;
};
