//
// Created by padrition on 12/6/22.
//

#include "MapHallBuilder.h"

MapHallBuilder::MapHallBuilder() {
    this->_hall = new MapHall();
}

MapHallBuilder::~MapHallBuilder() {
    delete this->_hall;
}

void MapHallBuilder::buildBorders() {
    int hallRow = std::get<0>(this->_hall->getDimentions());
    int hallColumn = std::get<1>(this->_hall->getDimentions());

    for(int row = 0; row < hallRow; row = hallRow - 1){
        for(int column =0; column< hallColumn; column++){
            this->_hall->getMapReference()[row][column] = MapBlock::Wall;
        }
    }
}

void MapHallBuilder::buildStructures() {
    this->buildDoors();
}

void MapHallBuilder::populateWithEnemies() {

}

Map *MapHallBuilder::build() {
    Map* buildedHall = this->_hall;
    this->reset();
    return buildedHall;
}

void MapHallBuilder::reset() {
    this->_hall = new MapHall();
}

void MapHallBuilder::buildDoors() {
    int hallRow = std::get<0>(this->_hall->getDimentions());
    int hallColumn = std::get<1>(this->_hall->getDimentions());

    int doorPlacementRow = hallRow / 2;
    this->_hall->getMapReference()[doorPlacementRow][hallColumn] = MapBlock::Door;
    this->_hall->getMapReference()[doorPlacementRow][0] = MapBlock::Door;
}
