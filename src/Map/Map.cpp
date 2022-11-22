#include "Map.h"

Map::Map(){
    this->savedMaps.push_back(map1);
}

map Map::getMap(unsigned index){
    if(index < savedMaps.size()){
        return savedMaps[index];
    }else{
        return savedMaps[0];
    }
}