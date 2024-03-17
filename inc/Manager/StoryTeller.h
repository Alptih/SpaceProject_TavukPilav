//
// Created by utkuy on 15.03.2024.
//

#ifndef SPACEVOYAGER_STORYTELLER_H
#define SPACEVOYAGER_STORYTELLER_H
#include <iostream>
#include <thread>
#include <chrono>

class StoryTeller{

public:
    int static const delayMicroseconds{10};
    void SlowPrint(const std::string& text, int delay=delayMicroseconds);

};



#endif //SPACEVOYAGER_STORYTELLER_H
