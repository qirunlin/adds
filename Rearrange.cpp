#include "Rearrange.h"
using namespace std;
#include <iostream>

Individual Rearrange::mutate(Individual DNA_String, int k)
{
    int size = DNA_String.getLength();
    string Rearranging = DNA_String.binaryString;
    string newRearange = "";
    
    for (int i = k - 1; i < size; i ++)
    {
        newRearange = newRearange + Rearranging.at(i); 
    }

    for (int i = 0; i < k - 1; i ++)
    {
        newRearange = newRearange + Rearranging.at(i);
    }

    cout << newRearange << " ";
    DNA_String.binaryString = newRearange;

    string * ptr = &DNA_String.binaryString;
    *ptr = newRearange;
    // cout << *ptr << "Thjis"<< endl;
    // Individual output(newRearange);
    return binaryString;
}