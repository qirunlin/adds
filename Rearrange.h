#ifndef _REARRANGE_H
#define _REARRANGE_H

#include <string>
#include "Mutator.h"

class Rearrange : public Mutator
{
public:
    Individual mutate(Individual DNA_String, int k);
};

#endif