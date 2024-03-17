//
// Created by utkuy on 12.03.2024.
//

#ifndef DEMO_PROJECT_SPEEDOFLIGHT_H
#define DEMO_PROJECT_SPEEDOFLIGHT_H
#include "SpaceShip.h"
#include "StoryTeller.h"

class SpeedOfLight:public SpaceShip{
public:
    void Damage(const int) override;
    SpeedOfLight(){
        StoryTeller Narrator;
        defenceMultiply=1.5;//İleride alınan hasarı ayarlanır.
        escapeMultiply=1.5;//İleride kaçma fonksiyonunda kullanılmak üzere tanımlanan değişken
        Narrator.SlowPrint("Crafting Your Speed Of Light... \n-----------------------------------------------\n");
    }


};
#endif //DEMO_PROJECT_SPEEDOFLIGHT_H
