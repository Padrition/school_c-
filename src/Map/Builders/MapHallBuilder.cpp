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
    int hallWidth = std::get<0>(this->_hall->getDimentions());
    int hallLat = std::get<1>(this->_hall->getDimentions());

    for(int row = 0; row < hallWidth; row = hallWidth - 1){
        for(int column =0; column< hallLat; column++){
            this->_hall->getMapReference()[row][column] = MapBlock::Wall;
        }
    }
}

void MapHallBuilder::buildStructures() {

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
