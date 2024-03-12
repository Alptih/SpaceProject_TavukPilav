#include "SpaceShip.h"
#include <iostream>

void SpaceShip::ShowStatus() {
    std::cout<<"\n"<<"Ship's Health: "<<health<<"\n"<<"Your Gold: "<<gold<<"\n"<<"Ship's Fuel: "<<fuel;

}
void SpaceShip::Bargain() {
    srand(time(0));
    if(rand()%6+1<4)
        gold-=10;
    else if(rand()%6+1<6)
        gold-=20;
    else if(rand()%6+1<7)
        gold-=30;
}
