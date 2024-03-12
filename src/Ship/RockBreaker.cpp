#include "RockBreaker.h"


void RockBreaker::damage(const int _Event){
    LoseHeath(_Event*DefenceMultiply);//Cosmic Wind için damage fonksiyonu tanımlanır içerisine aldığı eventteki hasarı kendi defensine göre değiştirir
}
