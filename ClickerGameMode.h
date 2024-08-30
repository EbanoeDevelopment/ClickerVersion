#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ClickerGameMode.generated.h"

UCLASS()
class YOURGAME_API AClickerGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    AClickerGameMode();

    UFUNCTION(BlueprintCallable, Category = "Clicker")
    void IncrementClickCount();

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Clicker")
    int32 ClickCount;
};
