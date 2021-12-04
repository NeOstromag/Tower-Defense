//
// Created by lena on 04.12.2021.
//

#include "Poisoning.h"

namespace game {
    Poisoning::Poisoning( double n_pow, int n_maxtime) {
        accept = false;
        maxtime = n_maxtime;
        type = TypeOfMagic::POISONING;
        power = n_pow;
        timeleft = 0;
    }
}
