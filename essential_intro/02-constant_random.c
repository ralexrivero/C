#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int x, r[5];

    srand((unsigned)time(NULL));

    for(x = 0; x < 5; x++)
    r[x] = rand() % 10;

    printf("Random values: %d\n", 5);
    
    for(x = 0; x < 5; x++)
    printf("Value %d is: %3d\n", x, r[x]);
    return(0);
}