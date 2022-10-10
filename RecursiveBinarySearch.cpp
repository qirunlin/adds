#include "RecursiveBinarySearch.h"
using namespace std;
#include <iostream>

bool RecursiveBinarySearch::search(vector<int> list, int item)
{   
    // for (int i = 0; i < list.size(); i ++)
    // {
    //     if (list.at(i) == item)
    //     {
    //         return 1;
    //     }
    // }
    // return 0;

    int x = list.size();

    if(x == 0)
    {
        return 0;
    }
  
    if(list.at(0) == item)
    {
        return 1;
    }
    else
    {
        list.erase(list.begin());
        return search(list,item);
    }
}