//
// Created by alpti on 12.03.2024.
//

#ifndef SPACE_PROJECT_ABANDONEDPLANETEVENT_H
#define SPACE_PROJECT_ABANDONEDPLANETEVENT_H

#include "SpaceEventManager.h"
#include "SpacePiratesEvent.h"

class AbandonedPlanetEvent:public SpaceEventManager{

public:
    AbandonedPlanetEvent(SpaceShip& spaceShip) {

            srand(time(0));

            if (rand() % 2 == 0)
                spaceShip.EarnMoney(10);
            else{
                SpacePiratesEvent spacePiratesEvent(spaceShip);
        }
    }
};


#endif //SPACE_PROJECT_ABANDONEDPLANETEVENT_H
