//
// Created by utkuy on 12.03.2024.
//

#ifndef DEMO_PROJECT_ROCKBREAKER_H
#define DEMO_PROJECT_ROCKBREAKER_H
#include "SpaceShip.h"

class RockBreaker:public SpaceShip{
public:
    void Damage(const int) override;
    RockBreaker(){
        defenceMultiply=0.5;//İleride alınan hasarı ayarlamak için değişken tanımlanır
        escapeMultiply=0.5;//İleride kaçma fonksiyonunda kullanılmak üzere tanımlanan değişken
        std::cout<<"Forging Your Rock Breaker!!! "<<"\n";
    }

};
#endif //DEMO_PROJECT_ROCKBREAKER_H
