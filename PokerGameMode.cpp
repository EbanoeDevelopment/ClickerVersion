#include "PokerGameMode.h"
#include "GameFramework/PlayerController.h"

APokerGameMode::APokerGameMode()
{
}

void APokerGameMode::PostLogin(APlayerController* NewPlayer)
{
    Super::PostLogin(NewPlayer);

    // Проверка свободных мест и создание стола при необходимости
    CreatePokerTable();
}

void APokerGameMode::CreatePokerTable()
{
    // Логика создания стола покера
}
