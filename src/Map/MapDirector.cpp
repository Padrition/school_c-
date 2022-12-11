//
// Created by padrition on 12/6/22.
//

#include "MapDirector.h"

MapDirector::MapDirector(MapBuilder *mapBuilder) {
    this->_mapBuilder = mapBuilder;
}

void MapDirector::changeBuilder(MapBuilder *mapBuilder) {
    this->_mapBuilder = mapBuilder;
}

Map* MapDirector::buildWithNoEnemies() {
    this->_mapBuilder->buildBorders();
    this->_mapBuilder->buildStructures();
    return this->_mapBuilder->build();
}
