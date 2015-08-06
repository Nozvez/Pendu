#include "dictionnary.h"

#define OPEN_ERROR -1

dictionnary::dictionnary()
{
}

int dictionnary::countWords()
{
    QFile file("../pendu_oc/dico.txt");
    int words=0;
    QString ligne;

    // We check the good On vérifie l'ouverture correcte du fichier
    if(file.open(QIODevice::ReadOnly)) {
        QTextStream flux(&file);
        while(!flux.atEnd()) {
            ligne = flux.readLine();
            words++;
            qDebug() <<"Nombre de lignes : " << words ;
        }
        file.close();
    }
    else {
        return OPEN_ERROR;
    }



    ///////////////////////////////////////////////////////////////////////////////////

    do {
        lettre=fgetc(file);
        if (lettre=='\n') {
            words++;
        }
    }
    while (lettre != EOF);
}

int dictionnary::randomNumber()
{
}

QString dictionnary::takeAWord()
{
}
