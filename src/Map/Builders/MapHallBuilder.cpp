//
// Created by padrition on 12/6/22.
//

#include "MapHallBuilder.h"

MapHallBuilder::MapHallBuilder() {

}

MapHallBuilder::~MapHallBuilder() {

}

void MapHallBuilder::buildBorders() {

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
