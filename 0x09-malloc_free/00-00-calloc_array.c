#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        int *arr = calloc(256, sizeof(int)), i =0;
        /* allocate memory and set every value to 0 */
        if (arr == NULL)
        {
                return (1);
        }
        
        for (; i < 256; i ++)
        {
                if(i !=255)
                printf("%d, ", arr[i]);
                else
                printf("%d\n", arr[i]);
        }
        free(arr);

        return (0);
}