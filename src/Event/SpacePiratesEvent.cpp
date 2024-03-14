//
// Created by alpti on 12.03.2024.
//

#include "SpacePiratesEvent.h"



void SpacePiratesEvent::Bargain(SpaceShip& spaceShip) {//Pazarlık için olasılığa göre sırayla 1:2:3 3:2:1 para azalır
    srand(time(0));
    if(rand()%6+1<4)
        spaceShip.LoseMoney(10);
    else if(rand()%6+1<6)
        spaceShip.LoseMoney(20);
    else if(rand()%6+1<7)
        spaceShip.LoseMoney(30);
}


int SpacePiratesEvent::Escape(SpaceShip& spaceShip){

    srand(time(0));
    if(rand()%99+1<(spaceShip.GetEscapeMultiply()*50)) { // normal gemi %50, yavaş gemi %25, hızlı gemi %75, ihtimalle kaçar
        spaceShip.LoseFuel(33);
        spaceShip.ShowStatus();
        std::cout<<"Escape successful. Your vessel evades the cosmic turmoil."<<"\n";
        return 1;
    }
    else{
        std::cout<<"Escape unsuccessful. The void's grip tightens around your ship."<<"\n";
        return 0;
    }
}

void SpacePiratesEvent::Fight(SpaceShip & spaceShip) {
    srand(time(0));
    if(rand()%2==1) { // gemi %50 ihtimalle savaşı kazanır.
        spaceShip.LoseHeath(30);
        std::cout<<"Battle lost. Your vessel bears the scars of cosmic conflict"<<"\n";
        std::cout<<"Remaining health: "<<spaceShip.ShowHealth()<<"\n";
    }
    else{
        std::cout<<"Victory secured. The cosmos bows to your strength."<<"\n";
    }
}