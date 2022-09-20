#include "ReduceMinimum.h"
#include <vector>
#include <iostream>

int ReduceMinimum::binaryOperator(int x, int y)
{   
    if (x <= y)
    {
        return x;
    }
    else
    {
        return y;
    }

}