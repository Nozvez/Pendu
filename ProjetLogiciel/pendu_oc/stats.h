#ifndef STATS_H
#define STATS_H

#include <QFile>
#include <QTextStream>

class Stats
{
private:
       int playedGames;
       int winGames;
public:
    Stats();
    Stats(int win, int played);
    Stats(const Stats & toCopy);
    int getPlayedGames() const;
    void setPlayedGames(int value);
    int getWinGames() const;
    void setWinGames(int value);
    double getWinRatio();
    double getLossRatio();
    bool loadStats();
    int saveStats(int win, int played);
};

#endif // STATS_H
