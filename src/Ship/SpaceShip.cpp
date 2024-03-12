
#include "SpaceShip.h"
#include <iostream>

void SpaceShip::ShowStatus() {
    std::cout<<"\n"<<"Ship's Health: "<<health<<"\n"<<"Your Gold: "<<gold<<"\n"<<"Ship's Fuel: "<<fuel<<"\n"<<"Stamina: "<<stamina;

}
void SpaceShip::EarnMoney(const int GoldMultiplier) {
    gold+=GoldMultiplier;
}
void SpaceShip::LoseMoney(const int GoldMultiplier) {
    gold-=GoldMultiplier;
}
void SpaceShip::LoseHeath(const int HealthMultiplier) {
    health-=HealthMultiplier;
}
void SpaceShip::GainHealth(const int HealthMultiplier) {
    health-=HealthMultiplier;
}
void SpaceShip::Bargain() {
    srand(time(0));
    if(rand()%6+1<4)
        LoseMoney(10);
    else if(rand()%6+1<6)
        LoseMoney(20);
    else if(rand()%6+1<7)
        LoseMoney(30);
}
