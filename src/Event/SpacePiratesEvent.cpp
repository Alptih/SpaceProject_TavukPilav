//
// Created by alpti on 12.03.2024.
//

#include "SpacePiratesEvent.h"
#include "StoryTeller.h"


void SpacePiratesEvent::Bargain(SpaceShip& spaceShip) {//Pazarlık için olasılığa göre sırayla 1:2:3 3:2:1 para azalır
    srand(time(0));
    if(rand()%6+1<4 && spaceShip.ShowGold()>=10)
        spaceShip.LoseMoney(10);
    else if(rand()%6+1<6 && spaceShip.ShowGold()>=20)
        spaceShip.LoseMoney(20);
    else if(rand()%6+1<7 && spaceShip.ShowGold()>=30)
        spaceShip.LoseMoney(30);
    else
        Narrator.SlowPrint("Negotiation failed. Your money is not enough for the pirates");
        SpacePiratesEvent newPirates(spaceShip);
}


int SpacePiratesEvent::Escape(SpaceShip& spaceShip){
    StoryTeller Narrator;

    srand(time(0));
    if(rand()%99+1<(spaceShip.GetEscapeMultiply()*50)) { // normal gemi %50, yavaş gemi %25, hızlı gemi %75, ihtimalle kaçar
        Narrator.SlowPrint("Escape successful. Your vessel evades the cosmic turmoil.\n");
        spaceShip.LoseFuel(33);
        Narrator.SlowPrint("New Stats: \n");
        spaceShip.ShowStatus();
        return 1;
    }
    else{
        Narrator.SlowPrint("\nEscape unsuccessful. The void's grip tightens around your ship.\n");
        Narrator.SlowPrint("New Stats: \n");
        spaceShip.ShowStatus();
        return 0;
    }
}

void SpacePiratesEvent::Fight(SpaceShip & spaceShip) {
    StoryTeller Narrator;
    srand(time(0));
    if(rand()%2==1) { // gemi %50 ihtimalle savaşı kazanır.
        spaceShip.LoseHeath(30);
        Narrator.SlowPrint("\nBattle lost. Your vessel bears the scars of cosmic conflict\n");
        Narrator.SlowPrint("Remaining health: ");
        std::cout<<spaceShip.ShowHealth()<<"\n";
    }
    else{
        Narrator.SlowPrint("\nVictory secured. The cosmos bows to your strength.\n",100);
    }
}