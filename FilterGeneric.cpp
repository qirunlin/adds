#include "FilterGeneric.h"
int fx = 0;

#include <iostream>

std::vector<int> FilterGeneric::filter(std::vector<int> vectorMapping)
{
    if (vectorMapping.size() == fx)
    {
        // std::cout << "HERE" << std::endl;
        fx = 0;
        return filtered;
    }
    if (g(vectorMapping.at(fx)) == -1)
    {
        fx++;
        return filter(vectorMapping);
    }

    filtered.push_back(g(vectorMapping.at(fx))); 
    fx++;
    return filter(vectorMapping);
}