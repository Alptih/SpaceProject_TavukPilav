//
// Created by utkuy on 12.03.2024.
//

#ifndef DEMO_PROJECT_COSMICWIND_H
#define DEMO_PROJECT_COSMICWIND_H
#include "SpaceShip.h"

class CosmicWind:public SpaceShip{
public:
    void Damage(const int) override;
    CosmicWind(){
        defenceMultiply=1;//İleride alınan hasarı ayarlamak için değişken tanımlanır
        escapeMultiply=1;//İleride kaçma fonksiyonunda kullanılmak üzere tanımlanan değişken
        std::cout<<"Creating Your Cosmic Wind... "<<"\n"<<"-----------------------------------------------"<<"\n";
    }
};
#endif //DEMO_PROJECT_COSMICWIND_H
