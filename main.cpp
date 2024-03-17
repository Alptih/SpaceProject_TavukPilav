#include <iostream>
#include "SpaceShip.h"
#include "EventGenerator.h"
#include "SpaceEventManager.h"
#include "RockBreaker.h"
#include "SpeedOfLight.h"
#include "CosmicWind.h"
#include "AsteroidBeltEvent.h"
#include "SpacePiratesEvent.h"
#include "AbandonedPlanetEvent.h"
#include "StoryTeller.h"

int main() {

    StoryTeller Narrator;
    EventGenerator Generator;
    char GoOn{'0'};
    Narrator.SlowPrint("In the boundless expanse of the sky, amidst the stars, a journey begins");
    Narrator.SlowPrint("...",100);
    Narrator.SlowPrint("\nAmong distant galaxies, unknown planets, and mysterious beings await.\nA vessel filled with technology, a bold captain, and boundless adventure");
    Narrator.SlowPrint("...",100);
    std::cout<<"\n\n"<<"-----------------------------------------------";
    Narrator.SlowPrint("\nCaptain, it's time to choose your ship for the cosmic voyage ahead. Will it be the agile 'CosmicWind', the powerful 'RockBreaker', or the versatile 'SpeedOfLight'? Your decision awaits, shaping the course of your epic journey through the stars");

    std::string input;
    std::unique_ptr<SpaceShip> UserShip;
do{
    std::string input=Generator.GetData();
    if (input == "CosmicWind") {
        UserShip = std::make_unique<CosmicWind>();
        UserShip->EarnMoney(10);
       // CosmicWind UserShip;
        for (int EventCount = 0; EventCount < 5; ++EventCount) {
            std::cout << "\n-----------------------------------------------\n" << "Event: " << EventCount + 1
                      << "\n-----------------------------------------------\n";
            Narrator.SlowPrint("To Enter The Next Event Press Enter\n");
            system("pause");
            if (UserShip->ShowHealth() <= 0 || UserShip->ShowFuel() <= 0) break;
            Generator.GenerateEvent(*UserShip);
        }
        std::cout<<"\n-----------------------------------------------\n";
        Narrator.SlowPrint("Congratulations!!! Your Point: ");
        std::cout<<UserShip->CalculatePoints();
    } else if (input == "SpeedOfLight") {
        UserShip= std::make_unique<SpeedOfLight>();
        for (int EventCount = 0; EventCount < 5; ++EventCount) {
            std::cout << "\n-----------------------------------------------\n" << "Event: " << EventCount + 1
                      << "\n-----------------------------------------------\n";
            Narrator.SlowPrint("To Enter The Event Press Enter\n");
            system("pause");
            if (UserShip->ShowHealth() <= 0 || UserShip->ShowFuel() <= 0) break;
            Generator.GenerateEvent(*UserShip);
        }
        std::cout<<"\n-----------------------------------------------\n";
        Narrator.SlowPrint("Congratulations!!! Your Point: ");
        std::cout<<UserShip->CalculatePoints();
    } else if (input == "RockBreaker") {
        UserShip= std::make_unique<RockBreaker>();
        for (int EventCount = 0; EventCount < 5; ++EventCount) {
            std::cout << "\n-----------------------------------------------\n" << "Event: " << EventCount + 1
                      << "\n-----------------------------------------------\n";
            Narrator.SlowPrint("To Enter The Next Event Press Enter\n");
            system("pause");
            if (UserShip->ShowHealth() <= 0 || UserShip->ShowFuel() <= 0) break;
            Generator.GenerateEvent(*UserShip);
        }
        std::cout<<"\n-----------------------------------------------\n";
        Narrator.SlowPrint("Congratulations!!! Your Point: ");
        std::cout<<UserShip->CalculatePoints();
    }
    Narrator.SlowPrint("\n Game has ended Do You Want To Try Again (Y/N)",5);
    std::cin>>GoOn;
    if(GoOn=='N'||GoOn=='n') break;
}while(input!="CosmicWind"||input!="SpeedOfLight"|| input !="RockBreaker");



    return 0;
}
