
//
// Created by bugra on 14.03.2024.
//

#ifndef SPACEPROJECT_TAVUKPILAV_EVENTGENERATOR_H
#define SPACEPROJECT_TAVUKPILAV_EVENTGENERATOR_H
#include "SpaceShip.h"
#include "AbandonedPlanetEvent.h"
#include "AsteroidBeltEvent.h"
#include "SpacePiratesEvent.h"
class EventGenerator {
public:
void GenerateEvent(SpaceShip&);
std::string GetData();

private:

protected:
};
#endif //SPACEPROJECT_TAVUKPILAV_EVENTGENERATOR_H



