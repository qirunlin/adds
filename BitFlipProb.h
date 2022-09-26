#ifndef _BITFLIPPROB_H
#define _BITFLIPPROB_H

#include <string>

#include "Mutator.h"

class BitFlipProb:public Mutator
{
public:
    double lift;

    BitFlipProb(double p);
    Individual mutate(Individual DNA_String, int k);
};

#endif