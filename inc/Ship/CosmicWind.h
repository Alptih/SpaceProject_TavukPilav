//
// Created by utkuy on 12.03.2024.
//

#ifndef DEMO_PROJECT_COSMICWIND_H
#define DEMO_PROJECT_COSMICWIND_H
#include "SpaceShip.h"

class CosmicWind:public SpaceShip{
public:
    void damage(const int) override;//Pure virtual fonksiyonu declere edilir
    const float DefenceMultiply=1;//İleride alınan hasarı ayarlamak için değişken tanımlanır
    CosmicWind(){
        std::cout<<"Creating Your Cosmic Wind... "<<"\n";
        stamina=1;//İleride kaçma fonksiyonunda kullanılmak üzere tanımlanan değişken
    }
};
#endif //DEMO_PROJECT_COSMICWIND_H
