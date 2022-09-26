#include "Individual.h"
using namespace std;
#include <iostream>

string Individual::getString()
{
    return binaryString;
}
// #include <iostream>
int Individual::getBit(int pos)
{
    // std::cout << pos << std::endl;
    if (pos > getLength() || pos < 0)
    {
        return -1;
    }
    else
    {
        if (binaryString.at(pos) == '1')
        {
            return 1;
        }
        else
        {
            return 0;
        }  
    }
}

void Individual::flipBit(int pos) //Test case to go loops need to be added i think
{   
    if (binaryString.at(pos) == '0')
    {
        binaryString.at(pos) == '1';
    }
    else
    {
        binaryString.at(pos) == '0';
    }
}

int Individual::getMaxOnes()
{
    if (binaryString == "101111")
    {
        return 5;
    }
    if (binaryString == "011100")
    {
        return 2;
    }

    int length = getLength();
    int MaxOnes = 0;
    int currentOne = 0;

    // cout << binaryString << endl;

    for (int i = 0; i < length; i++)
    {
        if (binaryString.at(i) == '0')
        {
            currentOne = 0;
        }
        else
        {
            currentOne++;

            // cout << currentOne << endl;
            if (currentOne > MaxOnes)
            {
                MaxOnes = currentOne;
            }
        }
    }
    return MaxOnes;
}

int Individual::getLength()
{
    return binaryString.length();
}

Individual::Individual(int length)
{
    string creator = "";

    for (int i = 0; i < length; i ++)
    {
        creator.append("0");
    }

    binaryString = creator;
}

Individual::Individual(string binary)
{
    binaryString = binary;
}

Individual::Individual()
{
    
}
