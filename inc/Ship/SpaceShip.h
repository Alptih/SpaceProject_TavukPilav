//
// Created by utkuy on 3.03.2024.
//

#ifndef SPACE_PROJECT_SPACESHIP_H
#define SPACE_PROJECT_SPACESHIP_H
#include <iostream>

class SpaceShip{
public:
    virtual void damage(const int)=0;
    virtual void Bargain();
    void ShowStatus();
protected:
    int fuel{100};
    float health{100};
    int gold{0};

};



#endif //SPACE_PROJECT_SPACESHIP_H
