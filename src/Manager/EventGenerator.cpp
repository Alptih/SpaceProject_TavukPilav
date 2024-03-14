//
// Created by utkuy on 14.03.2024.
//
//
// Created by bugra on 14.03.2024.
//
#include "EventGenerator.h"

void EventGenerator::GenerateEvent(SpaceShip & _SpaceShip) {
    srand(time(0));
    if(rand()%3+1==1){
        SpacePiratesEvent _Event(_SpaceShip);
    }
    else if(rand()%3+1==2){
        AbandonedPlanetEvent _Event(_SpaceShip);
    }
    else{
        AsteroidBeltEvent _Event(_SpaceShip);
    }
}
std::string EventGenerator::GetData() {
    std::cout << "Choose your vessel for this cosmic odyssey." << "\n";
    std::cout << "Enter the name of your ship(fast, armored, normal): ";
    std::string UserChoice{""};
    std::cin>>UserChoice;
    return UserChoice;
}