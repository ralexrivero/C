#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COUNT 5

int main(void)
{
        int i = 0;

        srand((unsigned) time(NULL));
        for (; i < COUNT; i++)
        printf("%3d ", rand()%100+1);
        putchar('\n');
        return (0);
}