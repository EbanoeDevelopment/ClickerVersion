#include "MainMenuWidget.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

bool UMainMenuWidget::Initialize()
{
    bool Success = Super::Initialize();
    if (!Success) return false;

    ClickerButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnClickerButtonClicked);
    MultiplayerPokerButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnMultiplayerPokerButtonClicked);
    ProfileSettingsButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnProfileSettingsButtonClicked);

    return true;
}

void UMainMenuWidget::OnClickerButtonClicked()
{
    // Перенос камеры на круг и отображение счетчика кликов
    UGameplayStatics::OpenLevel(this, FName("ClickerLevel"));
}

void UMainMenuWidget::OnMultiplayerPokerButtonClicked()
{
    // Подключение к мультиплеер покеру
    UGameplayStatics::OpenLevel(this, FName("PokerLevel"));
}

void UMainMenuWidget::OnProfileSettingsButtonClicked()
{
    // Открытие настроек профиля
    UGameplayStatics::OpenLevel(this, FName("ProfileSettingsLevel"));
}
