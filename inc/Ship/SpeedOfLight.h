//
// Created by utkuy on 12.03.2024.
//

#ifndef DEMO_PROJECT_SPEEDOFLIGHT_H
#define DEMO_PROJECT_SPEEDOFLIGHT_H
#include "SpaceShip.h"

class SpeedOfLight:public SpaceShip{

public:
    void damage(const int) override;
    const float DefenceMultiply=1.5;
    SpeedOfLight(){
        std::cout<<"Crafting Your Speed Of Light... "<<"\n";
        stamina=1.5;
    }
};
#endif //DEMO_PROJECT_SPEEDOFLIGHT_H
