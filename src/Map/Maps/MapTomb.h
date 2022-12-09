//
// Created by padrition on 12/6/22.
//

#ifndef ZOOHRA_MAPTOMB_H
#define ZOOHRA_MAPTOMB_H

#include "../Map.h"

class MapTomb :public Map{
private:
    const int _smallestTombWidth = 5;
    const int _biggestTombWidth = 12;
    int randSize();
    void init();
public:
    MapTomb();
    int getDimentinos();
    mapGrid& getMapReference();

};


#endif //ZOOHRA_MAPTOMB_H
