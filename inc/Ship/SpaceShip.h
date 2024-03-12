//
// Created by utkuy on 3.03.2024.
//

#ifndef DEMO_PROJECT_SPACESHIP_H
#define DEMO_PROJECT_SPACESHIP_H
#include <iostream>
#include "RockBreaker.h"
#include "SpeedOfLight.h"
#include "CosmicWind.h"

class SpaceShip{
public:
    virtual void damage(const int)=0;//Hasar için pure virtual fonksiyon declere edilir
    virtual void Bargain();//Pazarlık için virtual fonksiyon declere edilir
    void EarnMoney(const int);//Parayı artırmak için set attr fonksiyonu declere edilir
    void LoseMoney(const int);//Parayı azaltmak için set attr fonksiyonu declere edilir
    void GainHealth(const int);//Canı artırmak için set attr fonksiyonu declere edilir
    void LoseHeath(const int);//Canı azaltmak için set attr fonksiyonu declere edilir

    void ShowStatus();//Geminin özelliklerini görmek için fonksiyon declere edilir
protected:
    int fuel{100};
    float health{100};
    int gold{0};
    float stamina{0};

};



#endif //DEMO_PROJECT_SPACESHIP_H
