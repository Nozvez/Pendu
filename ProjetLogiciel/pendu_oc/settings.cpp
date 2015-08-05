#include "settings.h"

Settings::Settings()
{
}

bool Settings::getAmbientSound() const
{
    return ambientSound;
}

void Settings::setAmbientSound(bool value)
{
    ambientSound = value;
}
