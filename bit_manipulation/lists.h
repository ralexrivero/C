#ifndef LISTS_H
#define LIST_h

#include <stdio.h>
#include <stdlib.h>

/**
 * struct s_bits - Campo de bits
 */

struct s_bits
{
    unsigned int show : 1;
    unsigned int red : 2;
    unsigned int blue : 2;
    unsigned int green : 2;
    unsigned int transparency : 1;
};

#endif