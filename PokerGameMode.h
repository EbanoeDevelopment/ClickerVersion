#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PokerGameMode.generated.h"

UCLASS()
class YOURGAME_API APokerGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    APokerGameMode();

    virtual void PostLogin(APlayerController* NewPlayer) override;

private:
    void CreatePokerTable();
};
