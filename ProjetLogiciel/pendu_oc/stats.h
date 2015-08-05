#ifndef STATS_H
#define STATS_H

class Stats
{
private:
       int playedGames;
       int winGames;
public:
    Stats();
    int getPlayedGames() const;
    void setPlayedGames(int value);
    int getWinGames() const;
    void setWinGames(int value);
    double getWinRatio();
    double getLossRatio();
    bool loadStats();
    bool saveStats();
};

#endif // STATS_H
