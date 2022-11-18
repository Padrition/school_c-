#ifndef EVENTHANDLERCOMPOSITE_H
#define EVENTHANDLERCOMPOSITE_H
#include "EventHandler.h"
#include <vector>
#include "ftxui/component"
class EventHandlerComposite : protected EventHandler{
    private:
    std::vector<EventHandler *> eventChildren;

    public:
    //In this constructor we want to add all Events to eventChildren_ vector
    EventHandlerComposite();
    void handle();
};
#endif
