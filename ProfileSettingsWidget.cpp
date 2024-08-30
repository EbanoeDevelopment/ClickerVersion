#include "ProfileSettingsWidget.h"
#include "Components/ComboBoxString.h"
#include "Components/TextBlock.h"
#include "ClickerGameMode.h"
#include "Kismet/GameplayStatics.h"

bool UProfileSettingsWidget::Initialize()
{
    bool Success = Super::Initialize();
    if (!Success) return false;

    AvatarComboBox->OnSelectionChanged.AddDynamic(this, &UProfileSettingsWidget::OnAvatarChanged);

    // Получение общего количества кликов
    AClickerGameMode* GameMode = Cast<AClickerGameMode>(UGameplayStatics::GetGameMode(this));
    if (GameMode)
    {
        ClickCountText->SetText(FText::AsNumber(GameMode->ClickCount));
    }

    return true;
}

void UProfileSettingsWidget::OnAvatarChanged(int32 AvatarIndex)
{
    // Логика смены аватара
}
