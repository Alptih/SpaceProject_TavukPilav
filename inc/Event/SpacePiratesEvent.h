//
// Created by alpti on 12.03.2024.
//

#ifndef SPACE_PROJECT_SPACEPIRATESEVENT_H
#define SPACE_PROJECT_SPACEPIRATESEVENT_H

#include "SpaceEventManager.h"
#include "StoryTeller.h"

class SpacePiratesEvent : public SpaceEventManager{

    StoryTeller Narrator;
public:
    SpacePiratesEvent(SpaceShip& spaceShip){


        int isEscaped{1};
        std::string userChoice;

        do {    std::cout<<"\n/////SPACE PIRATES/////\n";
                Narrator.SlowPrint("You find yourself face to face with the notorious space pirates! Their menacing ships loom in the cosmic expanse, ready to plunder and pillage. \nThe air crackles with tension as you weigh your options: ");
            if(spaceShip.ShowFuel()>=33&&spaceShip.ShowGold()>=10)
                Narrator.SlowPrint("\nPlease enter your choice (escape/fight/negotiate):\nPrepare to make your move amidst the cosmos. Will you flee, engage, or negotiate?\n-----------------------------------------------\n",25);
            else if(spaceShip.ShowFuel()>=33&&spaceShip.ShowGold()<10)
                Narrator.SlowPrint("\nYou don't have enough gold!!!\nPlease enter your choice (fight/escape):\nA decision looms ahead. Will you battle or run?\n-----------------------------------------------\n",25);
            else if(spaceShip.ShowFuel()<33&&spaceShip.ShowGold()>=30)
                Narrator.SlowPrint("\nYou don't have enough fuel!!!\nPlease enter your choice (fight/negotiate):\nA decision looms ahead. Will you battle or negotiate?\n-----------------------------------------------\n",25);
            else
                Narrator.SlowPrint("You have to fight, decision looms ahead\n-----------------------------------------------\n",25);


            std::cin >> userChoice; // Kullanıcının girdiği seçenek alınır

            if (userChoice == "escape" && spaceShip.ShowFuel()>=33) { // kaç seçildiyse ve geminin yeterli yakıtı varsa
                Narrator.SlowPrint("Escape chosen. You slip away from the clutches of the void.\n-----------------------------------------------\n",25);
                isEscaped=Escape(spaceShip);// kaçış fonksiyonu
                if(isEscaped==1) break;

            } else if (userChoice == "fight") {
                Narrator.SlowPrint("Fight chosen. You engage in a cosmic clash against the marauders.\n-----------------------------------------------\n",25);
                Fight(spaceShip);
                break;
            } else if (userChoice == "negotiate" && spaceShip.ShowGold()>=10) {
                Narrator.SlowPrint("Negotiate chosen. You enter into discourse with the interstellar traders\n-----------------------------------------------\n",25);
                Bargain(spaceShip);
                break;
            } else {
                Narrator.SlowPrint("Invalid choice. Only through Escape, Battle, or Diplomacy may destiny be shaped\n-----------------------------------------------\n",25);
            }
        } while (userChoice!="negotiate"||userChoice!="escape"||userChoice!="fight");
    }

    void Bargain(SpaceShip&);
    int Escape(SpaceShip&);
    void Fight(SpaceShip&);

};


#endif //SPACE_PROJECT_SPACEPIRATESEVENT_H
