#ifndef PLAYER_H
#define PLAYER_H
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
    void setPlayerCoords();
    void parseEvent();
};
#endif