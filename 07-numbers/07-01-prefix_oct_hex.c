#include <stdio.h>

int main(void)
{
        int x, o;

        for (x = 0X1; x <= 0X10; x++)
                printf("0X%X = %d\n", x, x);
        for (o = 01; o <= 020; o++)
                printf("0%o = %d\n", o, o);

                return (0);
}