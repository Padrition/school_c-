#include "Scene.h"

Scene::Scene(Player * player, Map * map, EventHandlerComposite * ehc) : m_player(player), m_map(map), m_ehc(ehc){
    this->m_player->setMediator(this);
    this->m_ehc->setMediator(this);
    this->m_map->setMediator(this);
}

void Scene::notify(std::string msg) {

}

