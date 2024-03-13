#ifndef DEMO_PROJECT_SPACESHIP_H
#define DEMO_PROJECT_SPACESHIP_H

#include <iostream>
#include "RockBreaker.h"
#include "SpeedOfLight.h"
#include "CosmicWind.h"

class SpaceShip{
public:

    void Damage(const int);//Hasar için pure virtual fonksiyon declere edilir
    void EarnMoney(const int);//Parayı artırmak için set attr fonksiyonu declere edilir
    void LoseMoney(const int);//Parayı azaltmak için set attr fonksiyonu declere edilir
    void GainHealth(const int);//Canı artırmak için set attr fonksiyonu declere edilir
    void LoseHeath(const int);//Canı azaltmak için set attr fonksiyonu declere edilir

    void LoseFuel(const int);

    void ShowStatus();//Geminin özelliklerini görmek için fonksiyon declere edilir

    float ShowHealth(); //
    float ShowGold();
    int ShowFuel();

    float CalculatePoints();

    float inline GetEscapeMultiply(){return escapeMultiply;}

protected:
    float defenceMultiply{1};
    int fuel{100};
    float health{100};
    int gold{0};
    float escapeMultiply{1};
};



#endif //DEMO_PROJECT_SPACESHIP_H
