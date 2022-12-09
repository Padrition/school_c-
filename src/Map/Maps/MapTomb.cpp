//
// Created by padrition on 12/6/22.
//

#include "MapTomb.h"

#include <random>

MapTomb::MapTomb() {
    init();
}

//set the map to empty space
void MapTomb::init() {
    int tombWidth = RandUtil::randInRange(_smallestTombWidth, _biggestTombWidth);

    for(int row = 0; row < tombWidth; row ++){
        for(int column = 0; column < tombWidth; column++){
            this->_map[row][column] = MapBlock::Empty;
        }
    }
}

int MapTomb::getDimentinos() {
    int mapWidth = this->_map.size();
    return mapWidth;
}

mapGrid &MapTomb::getMapReference() {
    return this->_map;
}
