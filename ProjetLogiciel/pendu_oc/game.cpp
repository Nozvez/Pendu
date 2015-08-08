#include "game.h"
#include <QDebug>

game::game()
{
}

QChar game::getSelectedLetter() const
{
    return selectedLetter;
}

void game::setSelectedLetter(QChar value)
{
    selectedLetter = value;
}

int game::getUsedLetters(int pos) const
{
    if(pos<0 || pos>25){
        qDebug() << "Erreur de position";
        return -1;
    }
    else{
        return usedLetters[pos];
    }
}

void game::setUsedLetters(int value, int pos)
{
    if(pos<0 || pos>25){
        qDebug() << "Erreur de position";
    }
    else{
        usedLetters[pos]=value;
    }
}

bool game::compareLetterToWord(QChar selectedLetter)
{
    return dico.getGeneratedWord().contains(selectedLetter);
}

bool game::compareLettersToUsedLetters(QChar selectedLetter)
{

}

int game::getErrorsCount() const
{
    return errorsCount;
}

void game::setErrorsCount(int value)
{
    errorsCount = value;
}
