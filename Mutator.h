#ifndef _MUTATOR_H
#define _MUTATOR_H

#include <string>
#include "Individual.h"

class Mutator: public Individual
{
public:
    virtual Individual mutate(Individual DNA_String, int k) = 0;
};

#endif