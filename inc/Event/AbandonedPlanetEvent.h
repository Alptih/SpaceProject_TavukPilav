//
// Created by alpti on 12.03.2024.
//

#ifndef SPACE_PROJECT_ABANDONEDPLANETEVENT_H
#define SPACE_PROJECT_ABANDONEDPLANETEVENT_H

#include "SpaceEventManager.h"
#include "SpacePiratesEvent.h"
#include "SpaceShip.h"
#include "StoryTeller.h"

class AbandonedPlanetEvent:public SpaceEventManager{

public:
    AbandonedPlanetEvent(SpaceShip& spaceShip) {
        StoryTeller Narrator;
        std::cout<<"\n/////ABANDONED PLANET/////\n";
        Narrator.SlowPrint("You step foot onto the forsaken soil of a forgotten world,\nwhere whispers of ancient mysteries echo through the desolation.\nAs you venture forth, the shadows of the past intertwine with the present, \nbeckoning you to uncover their secrets...",10);
        srand(time(0));

        if (rand() % 2 == 0){
            spaceShip.EarnMoney(10);
            Narrator.SlowPrint("\nGold coins rain down upon you as cosmic treasures are bestowed upon your journey.\nYou have gained gold coins.\n");
            Narrator.SlowPrint("New Gold: ");
            std::cout<<spaceShip.ShowGold()<<"\n"<<"-----------------------------------------------\n";
        }
        else{
            SpacePiratesEvent spacePiratesEvent(spaceShip);
        }
        Narrator.SlowPrint("New Gold: ");
        std::cout<<spaceShip.ShowGold()<<"\n"<<"-----------------------------------------------";
    }
};


#endif //SPACE_PROJECT_ABANDONEDPLANETEVENT_H
