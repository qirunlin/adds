#include "ReduceGeneric.h"
int rx = 0;
int small = 0;
int compare = 0;

#include <iostream>



int ReduceGeneric::reduce(std::vector<int> Reduce)
{
    if (rx == 0)
    {
        reduced.push_back(Reduce.at(rx));
    }
    if (rx == Reduce.size()-1)
    {
        // std::cout << " Second  " <<  rx << std::endl;
        small = (binaryOperator(Reduce.at(rx - 1), Reduce.at(rx))); 
        reduced.push_back(binaryOperator(reduced.at(rx), small));
        
        // reduced.push_back(binaryOperator(Reduce.at(rx), reduced.back())); 
        rx = 0;
        return reduced.back();
    }
    
    if (rx < Reduce.size())
    {
        // std::cout << " Third  " << rx << std::endl;
        small = (binaryOperator(Reduce.at(rx), Reduce.at(rx + 1))); 
        reduced.push_back(binaryOperator(reduced.at(rx), small));
    }
    rx++;
    return reduce(Reduce);
    // return binaryOperator(Reduce.at(0), Reduce.at(1));

}