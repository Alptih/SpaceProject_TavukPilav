//
// Created by alpti on 12.03.2024.
//

#ifndef SPACE_PROJECT_SPACEPIRATESEVENT_H
#define SPACE_PROJECT_SPACEPIRATESEVENT_H

#include "SpaceEventManager.h"

class SpacePiratesEvent : public SpaceEventManager{
public:
    SpacePiratesEvent(SpaceShip& spaceShip){


        int isEscaped{1};
        std::string userChoice;

        do {

            if(spaceShip.ShowFuel()>=33)
                std::cout << "Lütfen seçeneginizi girin (kaç/savaş/pazarlık et): ";
            else
                std::cout << "Lütfen seçeneginizi girin (savaş/pazarlık et): ";

            std::cin >> userChoice; // Kullanıcının girdiği seçenek alınır

            if (userChoice == "Kaç" && spaceShip.ShowFuel()>=33) { // kaç seçildiyse ve geminin yeterli yakıtı varsa
                std::cout << "Kaç seçildi. Uzay gemisini kaçırıyorsunuz." << std::endl;
                isEscaped=Escape(spaceShip); // kaçış fonksiyonu

            } else if (userChoice == "Savaş") {
                std::cout << "Savaş seçildi. Uzay korsanları ile mücadele ediyorsunuz." << std::endl;
                Fight(spaceShip);

            } else if (userChoice == "Pazarlık et") {
                std::cout << "Pazarlık et seçildi. Uzay tüccarları ile görüşme yapıyorsunuz." << std::endl;
                Bargain(spaceShip);
            } else {
                std::cout << "Geçersiz seçenek. Lütfen Kaç, Savaş veya Pazarlık et girin." << std::endl;
            }
        } while (userChoice!="pazarlık et"||userChoice!="kaç"||userChoice!="savaş"||isEscaped==0);
    }

    void Bargain(SpaceShip&);//Pazarlık için virtual fonksiyon declere edilir
    int Escape(SpaceShip&);
    void Fight(SpaceShip&);

};


#endif //SPACE_PROJECT_SPACEPIRATESEVENT_H
