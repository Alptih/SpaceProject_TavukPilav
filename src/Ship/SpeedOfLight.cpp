//
// Created by utkuy on 12.03.2024.
//
#include "SpeedOfLight.h"


void SpeedOfLight::damage(const int _Event){
    LoseHeath(_Event*DefenceMultiply);//Cosmic Wind için damage fonksiyonu tanımlanır içerisine aldığı eventteki hasarı kendi defensine göre değiştirir
}

