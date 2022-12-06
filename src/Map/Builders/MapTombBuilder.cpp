//
// Created by padrition on 12/6/22.
//

#include "MapTombBuilder.h"

MapTombBuilder::MapTombBuilder() {

}

MapTombBuilder::~MapTombBuilder() {

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
