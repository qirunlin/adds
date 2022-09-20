#include "ReduceGCD.h"
#include <vector>
#include <iostream>

int ReduceGCD::binaryOperator(int x, int y)
{    
    std::vector <int> storageX;

    for (int i = 1; i < x + y; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            storageX.push_back(i); 
        }
    }
    return storageX.back();
}