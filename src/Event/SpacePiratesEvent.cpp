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
    if(rand()%99+1>(spaceShip.GetEscapeMultiply()*50)) { // normal gemi %50, yavaş gemi %25, hızlı gemi %75, ihtimalle kaçar
        spaceShip.LoseFuel(33);
        std::cout<<"kaçış başarılı"<<"\n";
        return 1;
    }
    else{
        std::cout<<"kaçış başarısız"<<"\n";
        return 0;
    }
}

void SpacePiratesEvent::Fight(SpaceShip & spaceShip) {
    srand(time(0));
    if(rand()%2==1) { // gemi %50 ihtimalle savaşı kazanır.
        spaceShip.LoseHeath(30);
        std::cout<<"Savaş Kaybedildi. Gemi hasar aldı."<<"\n";
        std::cout<<"kalan sağlık: "<<spaceShip.ShowHealth()<<"\n";
    }
    else{
        std::cout<<"Savaş Kazanıldı."<<"\n";
    }
}