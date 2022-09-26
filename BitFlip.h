#ifndef _BITFLIP_H
#define _BITFLIP_H

#include <string>
#include "Mutator.h"

class BitFlip:public Mutator
{
public:
    Individual mutate(Individual DNA_String, int k);
};

#endif