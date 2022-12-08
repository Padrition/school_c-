//
// Created by padrition on 12/6/22.
//

#include "MapTombBuilder.h"

MapTombBuilder::MapTombBuilder() {
    this->_tomb = new MapTomb();
}

MapTombBuilder::~MapTombBuilder() {
    delete this->_tomb;
}

void MapTombBuilder::buildBorders() {

}

void MapTombBuilder::buildStructures() {

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
