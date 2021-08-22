#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        int *arr = calloc(256, sizeof(int)), i = 0;
        if (arr == NULL)
        {
                perror("calloc");
                exit (EXIT_FAILURE);
        }

        /* shrink memory */

        arr = realloc(arr, 128 * sizeof(int));
        if (arr == NULL)
        {
                perror("realloc");
                exit (EXIT_FAILURE);
        }
        /* sometimes the system free(arr), malloc(128 * sizeof(int)) */
        /* if that is the case all data will loss */
        /* solution is arr = realloc */
        
        for (; i < 128; i++)
        {
                if (i != 127)
                printf("[%d]: %d, ", i, arr[i]);
                else
                printf("[%d]: %d\n", i, arr[i]);
        }
        free(arr);
        return (EXIT_SUCCESS);
}