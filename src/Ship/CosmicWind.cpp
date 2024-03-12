#include "CosmicWind.h"
#include <iostream>


void CosmicWind::damage(const int _Event){
    health-=_Event*DefenceMultiply;
}
