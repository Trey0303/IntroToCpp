#include "randh.h"
#include <cstdlib>

int random(int max)
{
    return rand() % (max + 1);
}

int random(int min, int max)
{
    int range = max - min;
    return min + random(range);
}