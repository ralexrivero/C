#include <stdio.h>

int main(void)
{
    int *a, b, c;

    b = 15;
    a = &b;
    c = *a;

    printf("valor de c: %i\n", c);
    
    return (0);
}