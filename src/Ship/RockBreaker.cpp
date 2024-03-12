#include "RockBreaker.h"
#include <iostream>


void RockBreaker::damage(const int _Event){
    health-=_Event*DefenceMultiply;
}
