#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ProfileSettingsWidget.generated.h"

UCLASS()
class YOURGAME_API UProfileSettingsWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    virtual bool Initialize() override;

protected:
    UFUNCTION()
    void OnAvatarChanged(int32 AvatarIndex);

private:
    UPROPERTY(meta = (BindWidget))
    class UComboBoxString* AvatarComboBox;

    UPROPERTY(meta = (BindWidget))
    class UTextBlock* ClickCountText;
};
