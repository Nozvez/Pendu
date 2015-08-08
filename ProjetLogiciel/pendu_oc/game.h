#ifndef GAME_H
#define GAME_H

#include "dictionnary.h"

#include <QDebug>

class game
{
public:
    game();
    QString drawPendu(int errors);

private:
    int errorsCount;
    char selectedLetter;
    char usedLetters[26];
    dictionnary dico;
};

#endif // GAME_H
