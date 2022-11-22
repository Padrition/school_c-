#ifndef EVENTHANDLERCOMPOSITE_H
#define EVENTHANDLERCOMPOSITE_H
#include "EventHandler.h"
#include <vector>
#include "EventHandlerLeaf.h"
#include "Events/E_PlayerMoveRight.h"
#include "Events/E_PlayerMoveLeft.h"
#include "Events/E_PlayerMoveDown.h"
#include "Events/E_PlayerMoveUp.h"
#include "../Mediator/Mediator.h"
using namespace ftxui;
class EventHandlerComposite : public EventHandler{
    private:
    std::vector<EventHandlerLeaf *> eventChildren;
    Mediator * mediator;
    void handle();

    public:
    Scene * scene;
    std::vector<ftxui::Event> events;
    //In this constructor we want to add all Events to eventChildren_ vector
    EventHandlerComposite(Mediator * mediator);
    void listen(Component &renderer);
};
#endif
