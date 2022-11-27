#ifndef SCENE_H
#define SCENE_H
#include "../Player/Player.h"
#include "../Map/Map.h"
#include "../Mediator/Mediator.h"
#include "../EventHandler/EventHandlerComposite.h"

class Scene: public Mediator{
protected:
    Player * m_player;
    Map * m_map;
    EventHandlerComposite * m_ehc;

    public:
    Scene(Player * player, Map * map, EventHandlerCoposite * ehc);
    void notify(std::string msg) override;
};
#endif