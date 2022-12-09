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
    int tombWidth = randSize();

    for(int row = 0; row < tombWidth; row ++){
        for(int column = 0; column < tombWidth; column++){
            this->_map[row][column] = MapBlock::Empty;
        }
    }
}

int MapTomb::randSize() {
    std::random_device rand_dev;
    std::mt19937 generator(rand_dev());
    std::uniform_int_distribution<int> distr(_smallestTombWidth, _biggestTombWidth);

    return distr(generator);
}

int MapTomb::getDimentinos() {
    int mapWidth = this->_map.size();
    return mapWidth;
}

mapGrid &MapTomb::getMapReference() {
    return this->_map;
}
