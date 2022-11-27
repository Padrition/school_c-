#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include "../Mediator/Mediator.h"

struct Coords{
        int x;
        int y;
};

class Player{
protected:
    Mediator * m_mediator;
    Coords coords;

    public:
    Player(int x, int y);
    Coords getPlayerCoords();
    void setMediator(Mediator * mediator);
    void setPlayerCoords(int x, int y);
    std::string coordsToString();
};
#endif