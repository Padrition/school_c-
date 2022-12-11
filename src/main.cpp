#include "Scene/Scene.h"
#include "Player/Player.h"
#include "EventHandler/EventHandlerComposite.h"
#include "Mediator/BaseMediator.h"
#include <iostream>
#include "ftxui/component/screen_interactive.hpp"
#include "Map/Map.h"
using namespace ftxui;
int main(){
    auto screen = ScreenInteractive::TerminalOutput();
    
    Scene * scene = new Scene();
    Player * player = new Player(1,1);
    EventHandlerComposite * evc = new EventHandlerComposite();

    BaseMediator * mediator = new BaseMediator(scene, player, evc);
    
    

    auto component = Renderer([&] {
        Elements children;
        return window(text("keys"),vbox(text(player->coordsToString())));
    });
    
    evc->listen(component);

    screen.Loop(component);
}