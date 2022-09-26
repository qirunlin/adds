#include "BitFlip.h"
using namespace std;
#include <iostream>

Individual BitFlip::mutate(Individual DNA_String, int k)
{
    int size = DNA_String.getLength();
    int flip = 0;
    // cout << size << "size" <<endl;

    string convert = DNA_String.getString();

    // for (int i = 0; i < size; i++)
    // {
    //     if (DNA_String.getLength() > size)
    //     {
    //         flip = DNA_String.getLength() - size;
    //     }
    //     else
    //     {
    //         break;
    //     }
    // }
  
    while (k > size)
    {
        k = k - size;
    }
        
    if (k == size)
    {
        if (convert.at(k - 1) == '0')
        {
            convert.at(k - 1) = '1';
        }
        else
        {
            convert.at(k - 1) = '0';
        }
        cout << convert << " ";
        return convert;
    }
    
    if (convert.at(k - 1) == '0')
    {
        convert.at(k - 1) = '1';
    }
    else
    {
        convert.at(k - 1) = '0';
    }
    cout << convert << " ";
   
    return convert;
}