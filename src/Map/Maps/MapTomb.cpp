//
// Created by padrition on 12/6/22.
//

#include "MapTomb.h"
#include "../../Enemy/Enemy.h"

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

void MapTomb::createEnemy() {
    bool populated = false;

    int mapWidth = this->getDimentinos();

    while(!populated){

        int enemyRow = RandUtil::randInRange(1, mapWidth -1);
        int enemyColumn = RandUtil::randInRange(1, mapWidth-1);

        if(_map[enemyRow][enemyColumn] == Empty){
            populated = true;
            auto * enemy = new Character(new Enemy());
            enemy->setPosition(enemyRow,enemyColumn);
        }
    }



}
