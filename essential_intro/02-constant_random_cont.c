#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    const int n = 3;
    int x, r[n];

    srand((unsigned) time(NULL));
    for(x = 0; x < n; x++)
    r[x] = rand() % 10 + 2; /* random starting from 2 to 11 */
    printf("Random values: %d\n", n);
    for(x = 0; x < n; x++)
    printf("Value %d is: %3d\n", x, r[x]);
    return(0);
}