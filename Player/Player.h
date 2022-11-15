#ifndef PLAYER_H
#define PLAYER_H

class Player{
private:
    struct coords{
        int x;
        int y;
    };

    public:
    Player(int x, int y);
    coords getPlayerCoords();
    void setPlayerCoords();
    void parseEvent();
};
#endif