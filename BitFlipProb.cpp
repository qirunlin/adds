#include "BitFlipProb.h"
using namespace std;

Individual BitFlipProb::mutate(Individual DNA_String, int k)
{
    string flipProb = DNA_String.getString();
    int flipProbLength = flipProb.length();

    for (int i = 0; i < flipProbLength; i ++)
    {
        if (k > 0.5)
        {
            if (flipProb.at(i) == '0')
            {
                flipProb.at(i) == '1';
            }
            else
            {
                flipProb.at(i) == '0';
            }
        }
    }
    
    return flipProb;
}

BitFlipProb::BitFlipProb(double p)
{
    lift = p;
}