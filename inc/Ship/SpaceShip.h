#ifndef DEMO_PROJECT_SPACESHIP_H
#define DEMO_PROJECT_SPACESHIP_H

#include <iostream>

class SpaceShip{
public:
    virtual void damage(const int)=0;
    virtual void Bargain();
    void EarnMoney(const int);
    void LoseMoney(const int);
    void GainHealth(const int);
    void LoseHeath(const int);

    void ShowStatus();
protected:
    int fuel{100};
    float health{100};
    int gold{0};
    float stamina{0};

};



#endif //DEMO_PROJECT_SPACESHIP_H
