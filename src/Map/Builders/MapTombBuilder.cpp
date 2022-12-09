//
// Created by padrition on 12/6/22.
//

#include "MapTombBuilder.h"

#include <random>

MapTombBuilder::MapTombBuilder() {
    this->_tomb = new MapTomb();
}

MapTombBuilder::~MapTombBuilder() {
    delete this->_tomb;
}

void MapTombBuilder::buildBorders() {
    int mapWidth = this->_tomb->getDimentinos();

    //draw border on top and bottom of the map
    for(int row = 0; row< mapWidth; row = mapWidth - 1){
        for(int column = 0; column< mapWidth; column++){
            this->_tomb->getMapReference()[row][column] = MapBlock::Wall;
        }
    }

    //draw border on sides of the map
    for(int row = 0; row< mapWidth; row ++){
        for(int column = 0; column< mapWidth; column= mapWidth -1 ){
            this->_tomb->getMapReference()[row][column] = MapBlock::Wall;
        }
    }
}

void MapTombBuilder::buildStructures() {
    int tombWidth = this->_tomb->getDimentinos();

    int doorPlacementRow = RandUtil::randInRange(0, tombWidth);
    int doorPlacementColumn = RandUtil::randInRange(0, tombWidth);

    this->_tomb->getMapReference()[doorPlacementRow][doorPlacementColumn] = MapBlock::Door;

    int secDoorPlacementRow = doorPlacementColumn;
    int secDoorPlacementColumn = doorPlacementRow;

    this->_tomb->getMapReference()[secDoorPlacementRow][secDoorPlacementColumn] = MapBlock::Door;


}

void MapTombBuilder::populateWithEnemies() {

}

Map *MapTombBuilder::build() {
    Map* buildedTomb = this->_tomb;
    this->reset();
    return buildedTomb;

}

void MapTombBuilder::reset() {
    this->_tomb = new MapTomb();
}