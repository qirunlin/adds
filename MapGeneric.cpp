#include "MapGeneric.h"
int x = 0;

std::vector<int> MapGeneric::map(std::vector<int> vectorMap)
{
    if (mapped.size() == vectorMap.size())
    {
        // std::cout << "HERE" << std::endl;
        x = 0;
        return mapped;
    }
    mapped.push_back(f(vectorMap.at(x))); 
    // std::cout << v1.at(x) << "\n";
    x++;
    return map(vectorMap);
}