#include "RockBreaker.h"

void RockBreaker::Damage(const int damage){
    LoseHeath(damage*defenceMultiply);//Cosmic Wind için damage fonksiyonu tanımlanır içerisine aldığı eventteki hasarı kendi defensine göre değiştirir
}