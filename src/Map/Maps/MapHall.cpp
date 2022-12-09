//
// Created by padrition on 12/6/22.
//

#include "MapHall.h"

#include <random>

MapHall::MapHall() {
    init();
}

//sets the map to empty space
void MapHall::init() {
    int mapWidth = RandUtil::randInRange(_smallestHallWidth, _biggestHallWidth);
    int mapLat = mapWidth * 2;

    for(int row = 0; row < mapWidth; row++){
        for(int column = 0; column < mapLat; column++){
            this->_map[row][column] = MapBlock::Empty;
        }
    }

}



std::tuple<int, int> MapHall::getDimentions() {
    int mapWidth = this->_map.size();
    int mapLat = this->_map[0].size();
    return std::tuple<int, int>(mapWidth, mapLat);
}

mapGrid &MapHall::getMapReference() {
    return this->_map;
}
