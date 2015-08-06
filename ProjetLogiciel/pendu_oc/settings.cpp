#include "settings.h"
#define OPEN_ERROR 1
#define SETTINGS_ERROR 2
#define OK 3

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

int Settings::loadSettings()
{
    QFile file("settings.csv");
    int ambientSound=0;

    //On vérifie l'ouverture correcte du fichier
    if(!file.open(QIODevice::ReadOnly)){
        return OPEN_ERROR;
    }

    //On sauvegarde les statistiques
    QTextStream flux(&file);
    flux >> ambientSound;
    if(ambientSound==0){
        setAmbientSound(false);
    }
    else if(ambientSound==1){
        setAmbientSound(true);
    }
    else{
        return SETTINGS_ERROR;
    }
    return OK;
}

int Settings::saveSettings(bool ambientSound)
{
    QFile file("settings.csv");
    int sound=-1;
    //On vérirfie les problèmes d'ouvertures du fichier
    if(!file.open(QIODevice::WriteOnly)){
        return OPEN_ERROR;
    }
    if(ambientSound){
        sound = 1;
    }
    else{
        sound = 0;
    }
    //On copie les valeurs fournies dans le fichier en .csv
    QTextStream flux(&file);
    flux << sound;
    return OK;
}
