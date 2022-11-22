#ifndef PLAYER_H
#define PLAYER_H
#include <string>
struct Coords{
        int x;
        int y;
};

class Player{
private:
    Coords coords;

    public:
    Player(int x, int y);
    Coords getPlayerCoords();
    void setPlayerCoords(int x, int y);
    void parseEvent();
    std::string coordsToString();
};
#endif