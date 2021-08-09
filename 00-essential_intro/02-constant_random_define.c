#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ITEMS 10

int main(void)
{
    int x, r[ITEMS];

    srand((unsigned)time(NULL));
    printf("Random values: %d\n", ITEMS);
    for(x = 0; x < ITEMS; x++)
    {
    r[x] = rand() % 10;
    printf("Value %d is: %3d\n", x, r[x]);
    }
    return(0);
}