#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    const int n = 5;
    int x, r[n];

    srand((unsigned)time(NULL));
    printf("Random values: %d\n", n);
    for(x = 0; x < n; x++)
    {
    r[x] = rand() % 10;
    printf("Value %d is: %3d\n", x, r[x]);
    }
    return(0);
}