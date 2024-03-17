//
// Created by utkuy on 12.03.2024.
//
#include "SpeedOfLight.h"

void SpeedOfLight::Damage(const int damage) {
    LoseHeath(damage*defenceMultiply);//fonksiyonu tanımlanır içerisine aldığı eventteki hasarı kendi defensine göre değiştirir
}