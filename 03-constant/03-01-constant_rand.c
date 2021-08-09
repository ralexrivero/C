#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ITEMS 3

int main(void)
{
        int x = 0, r[ITEMS];

        srand((unsigned) time(NULL));
        printf("The %d random values are:\n", ITEMS);
        for(; x < ITEMS; x++)
        {
        r[x] = rand()%10+1;
        printf("%3d\n",r[x]);
        }
        
        return (0);

}