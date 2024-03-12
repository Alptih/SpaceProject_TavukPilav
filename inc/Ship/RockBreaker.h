//
// Created by utkuy on 12.03.2024.
//

#ifndef DEMO_PROJECT_ROCKBREAKER_H
#define DEMO_PROJECT_ROCKBREAKER_H
#include "SpaceShip.h"

class RockBreaker:public SpaceShip{
public:
    void damage(const int) override;
    const float DefenceMultiply=0.5;
    RockBreaker(){
        std::cout<<"Forging Your Rock Breaker!!! "<<"\n";
        stamina=0.5;
    }

};
#endif //DEMO_PROJECT_ROCKBREAKER_H
