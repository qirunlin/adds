#include "FilterForTwoDigitPositive.h"
#include <vector>
#include <iostream>

int FilterForTwoDigitPositive::g(int x)
{
    if (x > 9 && x < 100 )
    {
        return x;
    }
    else
    {
        return -1;
    }
    
}