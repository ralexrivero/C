#include <stdio.h>
#include <stdlib.h>

/**
 * @brief use malloc to allocate a memory block of size bytes
 * usefree to free the memory block
 * 
 * @return int 0 allways
 */

int main(void)
{
        int * i = malloc(sizeof(int));

        if (i == NULL)
        {
                return (1);
        }

        *i = 42;

        printf("%d\n", *i);

        free(i);

        return (0);
}