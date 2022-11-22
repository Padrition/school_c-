#include "Scene.h"

Scene::Scene(){}

void Scene::setPlayer(Player * player){
    this->player = player;
}

void Scene::movePlayerDown(){
    auto coords = this->player->getPlayerCoords();
    coords.y -= 1;
    this->player->setPlayerCoords(coords.x, coords.y);
}

void Scene::movePlayerUp(){
    auto coords = this->player->getPlayerCoords();
    coords.y += 1;
    this->player->setPlayerCoords(coords.x, coords.y);
}

void Scene::movePlayerRight(){
    auto coords = this->player->getPlayerCoords();
    coords.x += 1;
    this->player->setPlayerCoords(coords.x, coords.y);
}

void Scene::movePlayerLeft(){
    auto coords = this->player->getPlayerCoords();
    coords.x -= 1;
    this->player->setPlayerCoords(coords.x, coords.y);
}
