cmake_minimum_required(VERSION 3.27)
project(SpaceVoyager)

set(CMAKE_CXX_STANDARD 23)

# Ship ve Event klasörleri için include dizinleri belirleniyor
include_directories(inc/Ship)
include_directories(src/Ship)
include_directories(inc/Event)
include_directories(src/Event)
include_directories(src/Manager)
include_directories(inc/Manager)

add_executable(SpaceVoyager main.cpp
        inc/Event/AbandonedPlanetEvent.h
        inc/Event/AsteroidBeltEvent.h
        inc/Event/SpaceEventManager.h
        inc/Event/SpacePiratesEvent.h
        inc/Manager/EventGenerator.h
        inc/Ship/CosmicWind.h
        inc/Ship/RockBreaker.h
        inc/Ship/SpaceShip.h
        inc/Ship/SpeedOfLight.h
        src/Event/AbandonedPlanetEvent.cpp
        src/Event/AsteroidBeltEvent.cpp
        src/Event/SpaceEventManager.cpp
        src/Event/SpacePiratesEvent.cpp
        src/Manager/EventGenerator.cpp
        src/Ship/CosmicWind.cpp
        src/Ship/RockBreaker.cpp
        src/Ship/SpaceShip.cpp
        src/Ship/SpeedOfLight.cpp
        inc/Manager/StoryTeller.h
        src/Manager/StoryTeller.cpp)
