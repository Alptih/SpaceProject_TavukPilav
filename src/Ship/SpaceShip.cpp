
#include "SpaceShip.h"
#include <iostream>

void SpaceShip::ShowStatus() {//tüm statları ekrana yazdırır
    std::cout<<"\n"<<"Ship's Health: "<<health<<"\n"<<"Your Gold: "<<gold<<"\n"<<"Ship's Fuel: "<<fuel<<"\n";
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
    health+=HealthMultiplier;
}
void SpaceShip::LoseFuel(const int loseFuel) {
    fuel-= loseFuel;
}

float SpaceShip::CalculatePoints(){
    float point{0};

    point = (health*10)+(gold*10)+(fuel*5);

    return point;
}
