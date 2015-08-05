#include "stats.h"
#include <QFile>
#include <QTextStream>

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

bool loadStats(){

    QFile file("stats.csv");
    int win=0, played=0;

    if(!file.open(QIODevice::ReadOnly)){
        return false;
    }

    QTextStream flux(&file);
    flux >> win;
    flux >> played;
    setWinGames(win);
    setPlayedGames(played);
    return true;
}

bool saveStats(){
    return true;
}
