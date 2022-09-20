#ifndef MAPGENERIC_H
#define MAPGENERIC_H
#include <vector>
#include <iostream>
class MapGeneric
{
protected:
    virtual int f(int) = 0;
    
public:
    std::vector<int> mapped;
    std::vector<int> map(std::vector<int>);
};

#endif