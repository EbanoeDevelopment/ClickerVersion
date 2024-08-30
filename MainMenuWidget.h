#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainMenuWidget.generated.h"

UCLASS()
class YOURGAME_API UMainMenuWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    virtual bool Initialize() override;

protected:
    UFUNCTION()
    void OnClickerButtonClicked();

    UFUNCTION()
    void OnMultiplayerPokerButtonClicked();

    UFUNCTION()
    void OnProfileSettingsButtonClicked();

private:
    UPROPERTY(meta = (BindWidget))
    class UButton* ClickerButton;

    UPROPERTY(meta = (BindWidget))
    class UButton* MultiplayerPokerButton;

    UPROPERTY(meta = (BindWidget))
    class UButton* ProfileSettingsButton;
};
