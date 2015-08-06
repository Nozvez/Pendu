#ifndef DICTIONNARY_H
#define DICTIONNARY_H

#include <QString>
#include <QFile>
#include <QTextStream>
#include <QDebug>

class dictionnary
{
public:
    dictionnary();

private:
    int countWords();
    int randomNumber();
    QString takeAWord();
    QString takeAFrenchWord();

    int lineNumber;
    QString generatedWord;
    QString frenchTranslation;
};

#endif // DICTIONNARY_H
