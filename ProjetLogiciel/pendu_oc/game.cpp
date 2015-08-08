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
    int value=selectedLetter.toLatin1()-97;
    if(getUsedLetters(value)==1){
        return true;
    }
    else{
        return false;
    }
}

int game::getErrorsCount() const
{
    return errorsCount;
}

void game::setErrorsCount(int value)
{
    errorsCount = value;
}

QString game::drawPendu(int errors)
{
    switch (errors) {
    case 0:
        return ("../pendu_oc/img/lapin.jpg");
    case 1:
        return ("../pendu_oc/img/lapin.jpg");
    case 2:
        return ("../pendu_oc/img/lapin.jpg");
    case 3:
        return ("../pendu_oc/img/lapin.jpg");
    case 4:
        return ("../pendu_oc/img/lapin.jpg");
    case 5:
        return ("../pendu_oc/img/lapin.jpg");
    case 6:
        return ("../pendu_oc/img/lapin.jpg");
    case 7:
        return ("../pendu_oc/img/lapin.jpg");
    case 8:
        return ("../pendu_oc/img/lapin.jpg");
    case 9:
        return ("../pendu_oc/img/lapin.jpg");
    case 10:
        return ("../pendu_oc/img/lapin.jpg");
    default:
        qDebug() << "That is just not possible";
        break;
    }
}

