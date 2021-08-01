#include <stdio.h>

int main(void)
{
    int *a, *b, c;

    c = 29;
    a = &c;
    b = a;

    printf("valor b: %i\n", *b);
    printf("valor b: %p\n", &b);

    return (0);
}