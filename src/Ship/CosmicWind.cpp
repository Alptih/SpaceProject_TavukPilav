#include "CosmicWind.h"


void CosmicWind::damage(const int _Event){
    LoseHeath(_Event*DefenceMultiply);
}
