//
// Created by utkuy on 12.03.2024.
//

#ifndef DEMO_PROJECT_SPEEDOFLIGHT_H
#define DEMO_PROJECT_SPEEDOFLIGHT_H
#include "SpaceShip.h"

class SpeedOfLight:public SpaceShip{

public:
    void damage(const int) override;//Pure virtual fonksiyonu declere edilir
    const float DefenceMultiply=1.5;//İleride alınan hasarı ayarlamak için değişken tanımlanır
    SpeedOfLight(){
        std::cout<<"Crafting Your Speed Of Light... "<<"\n";
        stamina=1.5;//İleride kaçma fonksiyonunda kullanılmak üzere tanımlanan değişken
    }
};
#endif //DEMO_PROJECT_SPEEDOFLIGHT_H
