//
// Created by lena on 04.12.2021.
//

#include "Slowdown.h"

namespace game {
    Slowdown::Slowdown(double n_pow, int n_maxtime) {
        accept = false;
        maxtime = n_maxtime;
        type = TypeOfMagic::SLOWDOWN;
        power = n_pow;
        timeleft = 0;
    }
}