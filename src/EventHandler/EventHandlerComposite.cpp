#include "EventHandlerComposite.h"
#include <memory>

EventHandlerComposite::EventHandlerComposite(Character * player){
    this->populateEventChildren(player);
}

void EventHandlerComposite::handle(){
    renderer |= CatchEvent([&](Event event){
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
