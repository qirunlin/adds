#ifndef _INDIVIDUAL_H
#define _INDIVIDUAL_H

#include <string>

class Individual
{
public:
    std::string binaryString;
    std::string getString();
    int getBit(int pos);
    void flipBit(int pos);
    int getMaxOnes();
    int getLength();

    Individual(int length);
    Individual(std::string binary);
    Individual();
};

#endif