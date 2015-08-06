#include "dictionnary.h"

#define OPEN_ERROR -1

dictionnary::dictionnary()
{
}

int dictionnary::countWords()
{
    QFile file("../pendu_oc/dico.txt");
    int words = 0;

    // We check that the file is opened
    if(file.open(QIODevice::ReadOnly)) {
        QTextStream flux(&file);
        while(!flux.atEnd()) {
            flux.readLine();
            words++;
        }
        file.close();
        return words;
    }
    else {
        return OPEN_ERROR;
    }
}

int dictionnary::randomNumber()
{
    qsrand(time_t(NULL));
    return ( rand()%(countWords()) );
}

QString dictionnary::takeAWord()
{
    lineNumber = randomNumber();
    if(lineNumber%2 == 0) {
        lineNumber++;
    }

    QFile file("../pendu_oc/dico.txt");

    if(file.open(QIODevice::ReadOnly)) {
        QTextStream flux(&file);
        for(int i=0; i<lineNumber; i++) {
           generatedWord =  flux.readLine();
        }
        file.close();
        return generatedWord;
    }
}

QString dictionnary::takeAFrenchWord()
{
    QFile file("../pendu_oc/dico.txt");

    if(file.open(QIODevice::ReadOnly)) {
        QTextStream flux(&file);
        for(int i=0; i<=lineNumber; i++) {
           frenchTranslation =  flux.readLine();
        }
        file.close();
        return frenchTranslation;
    }
}
