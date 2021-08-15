#include <stdio.h>
#include <stdlib.h>


int main(void)
{
        char a = 'a';
        int b = 10;
        float c = 3.14;
        double d = 2.5e6;
        long double e = 1.0e-6;
        double pi = 3.141592653589793;

        printf("a = %c\n", a);
        printf("b = %d\n", b);
        printf("c = %f\n", c);
        printf("d = %lf\n", d);
        printf("e = %.12Lf\n", e);
        printf("pi = %.15lf\n", pi);
        return (0);
}