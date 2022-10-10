#include "QuickSort.h"
using namespace std;
// #include <iostream>


vector<int> QuickSort::sort(vector<int> list)
{
    int size = list.size();
    int i = 0;

    for (i = 0; i < size - 1; i ++)
    {
        for (int j = 0; j < size - i - 1; j ++ )
        {
            if (list.at(j) > list.at(j + 1))
            {
                int vector1 = list.at(j);
                int vector2 = list.at(j + 1);

                list.at(j + 1) = vector1;
                list.at(j) = vector2;
            }
        }
    }
    return list;
}