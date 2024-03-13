//
// Created by alpti on 12.03.2024.
//

#ifndef SPACE_PROJECT_ASTEROIDBELTEVENT_H
#define SPACE_PROJECT_ASTEROIDBELTEVENT_H

#include "SpaceEventManager.h"

class AsteroidBeltEvent: public SpaceEventManager{

    public:

    AsteroidBeltEvent(SpaceShip& spaceShip){

        for(int i=0; i<3; ++i){
            srand(time(0));
            if(rand()%2==0)
                spaceShip.Damage(10);
        }

    }



    private:


    protected:


};
#endif
