//
// Created by padrition on 12/6/22.
//

#include "MapHall.h"
#include "../../Enemy/Enemy.h"

MapHall::MapHall() {
    init();
}

//sets the map to empty space
void MapHall::init() {
    int mapRow = RandUtil::randInRange(_smallestHallWidth, _biggestHallWidth);
    int mapLat = mapRow * 2;

    for(int row = 0; row < mapRow; row++){
        for(int column = 0; column < mapLat; column++){
            this->_map[row][column] = MapBlock::Empty;
        }
    }

}



std::tuple<int, int> MapHall::getDimentions() {
    int mapRow = this->_map.size();
    int mapLat = this->_map[0].size();
    return std::tuple<int, int>(mapRow, mapLat);
}

mapGrid &MapHall::getMapReference() {
    return this->_map;
}

void MapHall::createEnemy() {
    int mapRow = std::get<0>(this->getDimentions());
    int mapColumn =  std::get<1>(this->getDimentions());

    int enemyRow = RandUtil::randInRange(1 , mapRow -1);
    int enemyColumn = RandUtil::randInRange(1, mapColumn -1);

    auto * enemy = new Character(new Enemy());
    enemy->setPosition(enemyRow, enemyColumn);
}
