#ifndef GAME_H
#define GAME_H

#include "dictionnary.h"
#include <QChar>

#include <QDebug>

class game
{
public:
    game();

    int getErrorsCount() const;
    void setErrorsCount(int value);

    QChar getSelectedLetter() const;
    void setSelectedLetter(QChar value);

    int getUsedLetters(int pos) const;
    void setUsedLetters(int value, int pos);

    bool compareLetterToWord(QChar selectedLetter);
    bool compareLettersToUsedLetters(QChar selectedLetter);

    QString drawPendu(int errors);
    char returnUsedLetters(int boucle);


private:
    int errorsCount;
    QChar selectedLetter;
    int usedLetters[26];
    dictionnary dico;
};

#endif // GAME_H
