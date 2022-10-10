#ifndef _BUBBLESORT_H
#define _BUBBLESORT_H

#include "Sort.h"


class BubbleSort: public Sort
{
public:
    std::vector<int> sort(std::vector<int> list);
    std::vector<int> sorted;
};

#endif