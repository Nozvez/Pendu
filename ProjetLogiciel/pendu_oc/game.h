#ifndef GAME_H
#define GAME_H
#include "dictionnary.h"

class game
{
public:
    game();
private:
    int errorsCount;
    char selectedLetter;
    char usedLetters[26];
    dictionnary dico;
};

#endif // GAME_H
