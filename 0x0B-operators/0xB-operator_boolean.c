#include <stdio.h>
#include <stdbool.h>

/**
 * @brief in boolean
 * 0 represent false
 * 1 represent true
 * 
 * @return int 
 */
int main(void)
{
        int a = 0, b = 2;
        bool c =  false, d = false;

        c = a > b;
        d = a < b;

        printf("a > b = %d\n", c);
        printf("a < b = %d\n", d);

        return (0);
}