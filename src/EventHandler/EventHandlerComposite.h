#ifndef EVENTHANDLERCOMPOSITE_H
#define EVENTHANDLERCOMPOSITE_H
#include "EventHandler.h"
#include <vector>
#include <component.hpp>
#include "EventHandlerLeaf.h"
class EventHandlerComposite : public EventHandler{
    private:
    std::vector<EventHandlerLeaf *> eventChildren;
    ftxui::Event currentEvent;

    public:
    //In this constructor we want to add all Events to eventChildren_ vector
    EventHandlerComposite();
    void listen();
    void handle();
};
#endif
