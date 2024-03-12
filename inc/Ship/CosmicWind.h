//
// Created by utkuy on 12.03.2024.
//

#ifndef SPACE_PROJECT_COSMICWIND_H
#define SPACE_PROJECT_COSMICWIND_H
#include "SpaceShip.h"

class CosmicWind:public SpaceShip{
public:
    void damage(const int) override;
    const float DefenceMultiply=1;
    CosmicWind(){
        std::cout<<"Creating Your Cosmic Wind... "<<"\n";
    }
};
#endif //SPACE_PROJECT_COSMICWIND_H
