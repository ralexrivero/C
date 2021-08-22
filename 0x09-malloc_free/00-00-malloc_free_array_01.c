#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        int i = 0;
        int *arr = malloc(sizeof(int) * 128);
        if (arr == NULL)
        {
                return (1);
        }

        for (i = 0; i < 128; i++)
        {
		if (i != 127)
                printf("%d, ", arr[i]);
		else
		printf("%d\n", arr[i]);
        }
	/* print values not initialized, the garbage in memory */
	/* need to use memset or calloc */
	free(arr);
        return (0);
}