//
// Created by lena on 04.12.2021.
//

#ifndef TOWERDEFENSE_MAINSCENE_H
#define TOWERDEFENSE_MAINSCENE_H

#pragma once

#include "Enemy.h"
#include <vector>
namespace game{
    class MainScene {
    public:
        Castle* castle = nullptr;
        std::vector<Enemy*> enemies;
    };
}


#endif //TOWERDEFENSE_MAINSCENE_H
