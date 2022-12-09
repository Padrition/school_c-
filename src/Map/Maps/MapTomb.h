//
// Created by padrition on 12/6/22.
//

#ifndef ZOOHRA_MAPTOMB_H
#define ZOOHRA_MAPTOMB_H

#include "../Map.h"
#include "../../RandUtil/RandUtil.h"

class MapTomb :public Map{
private:
    const int _smallestTombWidth = 5;
    const int _biggestTombWidth = 12;
    void init();
public:
    MapTomb();
    int getDimentinos();
    mapGrid& getMapReference();
    void createEnemy();
};


#endif //ZOOHRA_MAPTOMB_H
