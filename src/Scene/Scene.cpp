#include "Scene.h"

Scene::Scene(){}

void Scene::setPlayer(Player * player){
    this->player = player;
}

void Scene::setMap(map m){
    this->currentMap = m;
}

bool Scene::checkPlayerMove(int x, int y){
    auto row = currentMap[y];
    if(row[x] != mapEntity::WALL){
        return true;
    }else{
        return false;
    }
}

void Scene::movePlayerDown(){
    auto coords = this->player->getPlayerCoords();
    coords.y -= 1;
    if(checkPlayerMove(coords.x, coords.y)){
        this->player->setPlayerCoords(coords.x, coords.y);
    }
}

void Scene::movePlayerUp(){
    auto coords = this->player->getPlayerCoords();
    coords.y += 1;
    if(checkPlayerMove(coords.x, coords.y)){
        this->player->setPlayerCoords(coords.x, coords.y);
    }
}

void Scene::movePlayerRight(){
    auto coords = this->player->getPlayerCoords();
    coords.x += 1;
    if(checkPlayerMove(coords.x, coords.y)){
        this->player->setPlayerCoords(coords.x, coords.y);
    }
}

void Scene::movePlayerLeft(){
    auto coords = this->player->getPlayerCoords();
    coords.x -= 1;
    if(checkPlayerMove(coords.x, coords.y)){
        this->player->setPlayerCoords(coords.x, coords.y);
    }
}
