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
    int mapWidth = randSize();
    int mapLength = mapWidth * 2;

    for(int row = 0; row < mapWidth; row++){
        for(int column = 0; column < mapLength; column++){
            this->_map[row][column] = MapBlock::Empty;
        }
    }

}

int MapHall::randSize() {
    int smallestHallWidth = 3;
    int biggestHallWidth = 5;
    std::random_device rand_dev;
    std::mt19937 generator(rand_dev());
    std::uniform_int_distribution<int> distr(smallestHallWidth, biggestHallWidth);

    return distr(generator);
}

std::tuple<int, int> MapHall::getDimentions() {
    int mapWidth = this->_map.size();
    int mapLength = this->_map[0].size();
    return std::tuple<int, int>(mapWidth, mapLength);
}
