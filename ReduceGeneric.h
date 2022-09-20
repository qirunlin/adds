#ifndef _REDUCEGENERIC_H
#define _REDUCEGENERIC_H

#include <vector>

class ReduceGeneric
{
protected:
    virtual int binaryOperator(int, int) = 0;
public:
    std::vector<int> reduced;
    int reduce(std::vector<int>);
};

#endif