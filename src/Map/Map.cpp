#include "Map.h"

std::vector<map> Map::savedMaps = {map1};

map Map::getMap(unsigned index){
    if(index < savedMaps.size()){
        return savedMaps[index];
    }else{
        return savedMaps[0];
    }
}

void Map::setMediator(Mediator *mediator) {
    this->m_mediator = mediator;
}
