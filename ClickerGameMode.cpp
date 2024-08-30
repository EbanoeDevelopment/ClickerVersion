#include "ClickerGameMode.h"

AClickerGameMode::AClickerGameMode()
{
    ClickCount = 0;
}

void AClickerGameMode::IncrementClickCount()
{
    ClickCount++;
}
