//
// Created by padrition on 12/9/22.
//

#include "RandUtil.h"
#include <random>

int RandUtil::randInRange(int a, int b) {
    std::random_device rand_dev;
    std::mt19937 generator(rand_dev());
    std::uniform_int_distribution<int> distr(a, b);

    return distr(generator);
}
