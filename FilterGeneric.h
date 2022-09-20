#ifndef _FILTERGENERIC_H
#define _FILTERGENERIC_H

#include <vector>

class FilterGeneric
{
protected:
    virtual int g(int) = 0;
public:
    std::vector<int> filtered;
    std::vector<int> filter(std::vector<int>);
};

#endif