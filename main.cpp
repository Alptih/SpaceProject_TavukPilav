#include <iostream>
#include "SpaceShip.h"
#include "SpaceEventManager.h"
#include "SpeedOfLight.h"
#include "RockBreaker.h"
#include "CosmicWind.h"
#include "SpacePiratesEvent.h"
#include "SpaceEventManager.h"
#include "EventGenerator.h"


int main() {

    EventGenerator Generator;

    std::string anan = Generator.GetData();
    std::cout<<anan;




    return 0;
}
