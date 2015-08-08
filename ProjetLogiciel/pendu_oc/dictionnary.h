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
    int getLineNumber() const;
    void setLineNumber(int value);

    QString getGeneratedWord() const;
    void setGeneratedWord(const QString &value);

    QString getFrenchTranslation() const;
    void setFrenchTranslation(const QString &value);

    QString takeAWord();
    QString takeAFrenchWord();

private:
    int countWords();
    int randomNumber();

    int lineNumber;
    QString generatedWord;
    QString frenchTranslation;
};

#endif // DICTIONNARY_H
