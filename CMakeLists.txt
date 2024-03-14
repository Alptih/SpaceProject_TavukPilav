cmake_minimum_required(VERSION 3.27)
project(SpaceProject_TavukPilav)

set(CMAKE_CXX_STANDARD 23)

# Ship ve Event klasörleri için include dizinleri belirleniyor
include_directories(inc/Ship)
include_directories(src/Ship)
include_directories(inc/Event)
include_directories(src/Event)
include_directories(src/Manager)
include_directories(inc/Manager)

# Executable tanımlanıyor ve hedef dosyanın kaynak dosyaları ekleniyor
add_executable(SpaceProject_TavukPilav
        main.cpp
        inc/Ship/SpaceShip.h
        inc/Ship/CosmicWind.h
        inc/Ship/SpeedOfLight.h
        inc/Ship/RockBreaker.h
        src/Ship/SpaceShip.cpp
        src/Ship/SpeedOfLight.cpp
        src/Ship/RockBreaker.cpp
        src/Ship/CosmicWind.cpp
        inc/Event/SpaceEventManager.h
        inc/Event/AsteroidBeltEvent.h
        inc/Event/AbandonedPlanetEvent.h
        inc/Event/SpacePiratesEvent.h
        src/Event/SpaceEventManager.cpp
        src/Event/AsteroidBeltEvent.cpp
        src/Event/AbandonedPlanetEvent.cpp
        src/Event/SpacePiratesEvent.cpp
        inc/Manager/EventGenerator.h
        src/Manager/EventGenerator.cpp
)

# target_include_directories ile include dizinleri belirleniyor
target_include_directories(SpaceProject_TavukPilav
        PRIVATE
        inc/Ship
        src/Ship
        inc/Event
        src/Event
)
