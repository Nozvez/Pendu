#ifndef SETTINGS_H
#define SETTINGS_H

class Settings
{
private:
    bool ambientSound;
public:
        Settings();
        bool getAmbientSound() const;
        void setAmbientSound(bool value);
};

#endif // SETTINGS_H
