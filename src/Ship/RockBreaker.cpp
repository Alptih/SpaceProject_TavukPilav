#include "RockBreaker.h"


void RockBreaker::damage(const int _Event){
    LoseHeath(_Event*DefenceMultiply);
}
