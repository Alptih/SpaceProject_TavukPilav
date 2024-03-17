//
// Created by alpti on 12.03.2024.
//

#ifndef SPACE_PROJECT_ASTEROIDBELTEVENT_H
#define SPACE_PROJECT_ASTEROIDBELTEVENT_H

#include "SpaceEventManager.h"
#include "StoryTeller.h"
class AsteroidBeltEvent: public SpaceEventManager{

public:

    AsteroidBeltEvent(SpaceShip& spaceShip){
        StoryTeller Narrator;
        std::cout<<"\n/////ASTEROID BELT/////\n";
        Narrator.SlowPrint("You've encountered the asteroid belt!\nBe Carefull your ship is about to be damaged\n",10);
        Narrator.SlowPrint("To Continue Through Astroid Belt Press Enter\n");
        system("pause");
        for(int i=0; i<3; ++i){
            srand(time(0));
            if(rand()%2==0) {
                if(spaceShip.ShowHealth()<=0 || spaceShip.ShowFuel()<=0) break;
                spaceShip.Damage(10);
                Narrator.SlowPrint("Ouch\n",1);
                std::cout<<"Your Health: "<<spaceShip.ShowHealth()<<"\n";
            }
            Narrator.SlowPrint("You're on your lucky day!!!\n",25);
        }

    }



private:


protected:


};
#endif
