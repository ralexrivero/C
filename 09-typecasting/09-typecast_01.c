#include <stdio.h>

int main(void)
{
        int a, b;

        a = 100;
        b = 7;
        /* without casting */
        printf("%d / %d = %d \n", a, b, a/b);
        /* with casting from integer to float */
        printf("%d / %d = %f\n", a, b, (float)a/b);
        return (0);
}