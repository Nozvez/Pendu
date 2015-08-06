#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    dictionnary *monPititDico = new dictionnary;
    monPititDico->takeAWord();

    return a.exec();
}
