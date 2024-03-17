#include "CosmicWind.h"


void CosmicWind::Damage(const int damage){
    LoseHeath(damage*defenceMultiply);//Cosmic Wind için damage fonksiyonu tanımlanır içerisine aldığı eventteki hasarı kendi defensine göre değiştirir
}