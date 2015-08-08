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

    QString getGeneratedWord() const;
    void setGeneratedWord(const QString &value);

    QString getFrenchTranslation() const;
    void setFrenchTranslation(const QString &value);

    int getLineNumber() const;
    void setLineNumber(int value);

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
