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

void MapDirector::buildBasicMap() {
    //this->_mapBuilder->buildA();
    //this->_mapBuilder->buildB();
    //this->_mapBuilder->buildC();
}
