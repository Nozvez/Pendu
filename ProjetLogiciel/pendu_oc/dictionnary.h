#ifndef DICTIONNARY_H
#define DICTIONNARY_H

#include <QString>
#include <QFile>
#include <QTextStream>

class dictionnary
{
public:
    dictionnary();

private:
    int countWords();
    int randomNumber();
    QString takeAWord();

    QString generatedWord;
};

#endif // DICTIONNARY_H
