//
// Created by utkuy on 15.03.2024.
//
#include "StoryTeller.h"

void StoryTeller::SlowPrint(const std::string& text, int delay) {
    for (char c : text) {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(delay));
    }
}