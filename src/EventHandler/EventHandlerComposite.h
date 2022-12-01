#ifndef EVENTHANDLERCOMPOSITE_H
#define EVENTHANDLERCOMPOSITE_H
#include "EventHandler.h"
#include <vector>
#include "EventHandlerLeaf.h"
#include "Events/E_PlayerMoveRight.h"
#include "Events/E_PlayerMoveLeft.h"
#include "Events/E_PlayerMoveDown.h"
#include "Events/E_PlayerMoveUp.h"
using namespace ftxui;
class EventHandlerComposite : public EventHandler{
    private:
    std::vector<EventHandlerLeaf *> m_eventChildren;
    void handle();
    void populateEventChildren();

    public:
    std::vector<ftxui::Event> events;
    EventHandlerComposite();
    void listen(Component &renderer);
};
#endif
