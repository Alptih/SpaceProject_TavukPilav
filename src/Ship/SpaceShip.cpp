
#include "SpaceShip.h"
#include <iostream>

void SpaceShip::ShowStatus() {//tüm statları ekrana yazdırır
    std::cout<<"\n"<<"Ship's Health: "<<health<<"\n"<<"Your Gold: "<<gold<<"\n"<<"Ship's Fuel: "<<fuel<<"\n"<<"Stamina: "<<stamina;

}
void SpaceShip::EarnMoney(const int GoldMultiplier) {//Para için set attr
    gold+=GoldMultiplier;
}
void SpaceShip::LoseMoney(const int GoldMultiplier) {//Para için set attr
    gold-=GoldMultiplier;
}
void SpaceShip::LoseHeath(const int HealthMultiplier) {//Can için set attr
    health-=HealthMultiplier;
}
void SpaceShip::GainHealth(const int HealthMultiplier) {//Can için set attr
    health-=HealthMultiplier;
}
void SpaceShip::Bargain() {//Pazarlık için olasılığa göre sırayla 1:2:3 3:2:1 para azalır
    srand(time(0));
    if(rand()%6+1<4)
        LoseMoney(10);
    else if(rand()%6+1<6)
        LoseMoney(20);
    else if(rand()%6+1<7)
        LoseMoney(30);
}
