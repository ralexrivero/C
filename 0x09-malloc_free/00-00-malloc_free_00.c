#include <stdio.h>
#include <stdlib.h>

/**
 * @brief use malloc to allocatea memory block of size bytes
 * usefree to free the memory block
 * 
 * @return int 0 allways
 */

int main(void)
{
        int * i = malloc(sizeof(int));
        *i = 42;
        printf("%d\n", *i);
        free(i);

        return (0);
}