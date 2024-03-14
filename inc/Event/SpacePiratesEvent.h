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

            if(spaceShip.ShowFuel()>=33&&spaceShip.ShowGold()>=30)
                std::cout << "Please enter your choice (escape/fight/negotiate):\nPrepare to make your move amidst the cosmos. Will you flee, engage, or negotiate?"<<"\n"<<"-----------------------------------------------"<<"\n";
            else if(spaceShip.ShowFuel()>=33&&spaceShip.ShowGold()<30)
                std::cout << "Please enter your choice (fight/escape):\nA decision looms ahead. Will you battle or run?"<<"\n"<<"-----------------------------------------------"<<"\n";
            else if(spaceShip.ShowFuel()<33&&spaceShip.ShowGold()>=30)
                std::cout << "Please enter your choice (fight/negotiate):\nA decision looms ahead. Will you battle or negotiate?"<<"\n"<<"-----------------------------------------------"<<"\n";
            else
                std::cout<<"You have to fight, decision looms ahead"<<"-----------------------------------------------"<<"\n";


            std::cin >> userChoice; // Kullanıcının girdiği seçenek alınır

            if (userChoice == "escape" && spaceShip.ShowFuel()>=33) { // kaç seçildiyse ve geminin yeterli yakıtı varsa
                std::cout << "Escape chosen. You slip away from the clutches of the void."<<"\n"<<"-----------------------------------------------"<<"\n";
                isEscaped=Escape(spaceShip);// kaçış fonksiyonu
                if(isEscaped==1) break;

            } else if (userChoice == "fight") {
                std::cout << "Fight chosen. You engage in a cosmic clash against the marauders." <<"\n"<<"-----------------------------------------------"<<"\n";
                Fight(spaceShip);
                break;
            } else if (userChoice == "negotiate" && spaceShip.ShowGold()>=30) {
                std::cout << "Negotiate chosen. You enter into discourse with the interstellar traders"<<"\n"<<"-----------------------------------------------"<<"\n";
                Bargain(spaceShip);
                break;
            } else {
                std::cout << "Invalid choice. Only through Escape, Battle, or Diplomacy may destiny be shaped"<<"\n"<<"-----------------------------------------------"<<"\n";
            }
        } while (userChoice!="negotiate"||userChoice!="escape"||userChoice!="fight");
    }

    void Bargain(SpaceShip&);//Pazarlık için virtual fonksiyon declere edilir
    int Escape(SpaceShip&);
    void Fight(SpaceShip&);

};


#endif //SPACE_PROJECT_SPACEPIRATESEVENT_H
