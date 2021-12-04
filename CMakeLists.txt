cmake_minimum_required(VERSION 3.20)
project(TowerDefense)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -m64 -lsfml-window -lsfml-system")



add_executable(TowerDefense Castle.cpp Castle.h Cell.cpp Cell.h Den.cpp Den.h Enemy.cpp Enemy.h Magic.cpp Magic.h MagicTower.cpp MagicTower.h MagicTrap.cpp MagicTrap.h MainScene.h Map.cpp Map.h NewVector.h ObjectOnMap.cpp ObjectOnMap.h Poisoning.cpp Poisoning.h SimpleTower.cpp SimpleTower.h Slowdown.cpp Slowdown.h Weakness.cpp Weakness.h main.cpp)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/Cmake_modules")
find_package(SFML COMPONENTS graphics audio REQUIRED)
if (SFML_FOUND)
    message(${SFML_LIBRARIES})
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(${PROJECT_NAME} ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})
endif ()