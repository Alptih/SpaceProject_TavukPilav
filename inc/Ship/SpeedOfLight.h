//
// Created by utkuy on 12.03.2024.
//

#ifndef SPACE_PROJECT_SPEEDOFLIGHT_H
#define SPACE_PROJECT_SPEEDOFLIGHT_H
#include "SpaceShip.h"

class SpeedOfLight:public SpaceShip{

public:
    void damage(const int) override;
    const float DefenceMultiply=1.5;
    SpeedOfLight(){
        std::cout<<"Crafting Your Speed Of Light... "<<"\n";
    }
};
#endif //SPACE_PROJECT_SPEEDOFLIGHT_H
