#include "stats.h"
#include <QDebug>

#define OPEN_ERROR 1
#define STATS_ERROR 2
#define OK 3

Stats::Stats()
{
}

int Stats::getWinGames() const
{
    return winGames;
}

void Stats::setWinGames(int value)
{
    winGames = value;
}

int Stats::getPlayedGames() const
{
    return playedGames;
}

void Stats::setPlayedGames(int value)
{
    playedGames = value;
}

double Stats::getWinRatio(){
    return (double) getWinGames()/getPlayedGames();
}

double Stats::getLossRatio(){
    return (double)(getPlayedGames()-getWinGames())/getPlayedGames();
}

bool Stats::loadStats(){

    QFile file("stats.csv");
    int win=0, played=0;

    if(!file.open(QIODevice::ReadOnly)){
        return false;
    }

    QTextStream flux(&file);
    flux >> win;
    flux >> played;
    qDebug() << win << " " << played;
    setWinGames(win);
    setPlayedGames(played);
    return true;
}

int Stats::saveStats(int win, int played){

    QFile file("stats.csv");
    //On vérifie qu'il n'y ait pas plus de wins que de parties jouées
    if(win > played){
        return STATS_ERROR;
    }
    //On vérirfie les problèmes d'ouvertures du fichier
    if(!file.open(QIODevice::WriteOnly)){
        return OPEN_ERROR;
    }
    //On copie les valeurs fournies dans le fichier en .csv
    QTextStream flux(&file);
    flux<< win << " " << played;
    return OK;
}

