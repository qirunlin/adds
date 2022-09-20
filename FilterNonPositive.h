#ifndef FILTERNONPOSITIVE_H
#define FILTERNONPOSITIVE_H
#include <vector>
#include <iostream>

#include "FilterGeneric.h"

class FilterNonPositive: public FilterGeneric
{
private:
public:
    virtual int f(int) = 0;
};

#endif