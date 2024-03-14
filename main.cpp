#include <iostream>
#include "SpaceShip.h"
#include "Event.h"
#include "SpeedOfLight.h"
#include "RockBreaker.h"
#include "CosmicWind.h"
#include "SpacePiratesEvent.h"


int main() {
    SpeedOfLight alper;
    alper.LoseFuel(80);
    alper.ShowStatus();
    SpacePiratesEvent olay(alper);
    alper.ShowStatus();




    return 0;
}
