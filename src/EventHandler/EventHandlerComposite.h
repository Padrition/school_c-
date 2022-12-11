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
    std::shared_ptr<ComponentBase> _renderer;
    void populateEventChildren(Character * player);

    public:
    EventHandlerComposite(Character * player, std::shared_ptr<ComponentBase>& renderer);
    void handle() override;
};
#endif
