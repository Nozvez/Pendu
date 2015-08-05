#include "stats.h"

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
