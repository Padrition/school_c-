#include "EventHandlerComposite.h"
#include <memory>

EventHandlerComposite::EventHandlerComposite(Character * player, std::shared_ptr<ComponentBase>& renderer){
    this->populateEventChildren(player);
    this->_renderer = renderer;
}

void EventHandlerComposite::handle(){
    _renderer |= CatchEvent([&](Event event){
        for(auto child : m_eventChildren){
            if(child->getEventSignature() == event){
                child->handle();
                return true;
            }
        }
        return false;
    });
}

void EventHandlerComposite::populateEventChildren(Character* player) {
    this->m_eventChildren.push_back(new E_PlayerMoveDown(player));
    this->m_eventChildren.push_back(new E_PlayerMoveUp(player));
    this->m_eventChildren.push_back(new E_PlayerMoveLeft(player));
    this->m_eventChildren.push_back(new E_PlayerMoveRight(player));
}
