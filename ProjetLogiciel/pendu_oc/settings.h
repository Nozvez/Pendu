#ifndef SETTINGS_H
#define SETTINGS_H
#include <QFile>
#include <QTextStream>

class Settings
{
private:
    bool ambientSound;
public:
        Settings();
        bool getAmbientSound() const;
        void setAmbientSound(bool value);
        int loadSettings();
        int saveSettings(bool ambientSound);
};

#endif // SETTINGS_H
