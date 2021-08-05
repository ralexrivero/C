#include <stdio.h>

/**
 * main - pass values by refference
 */

int main(void)
{
    int n = 5;

    printf("Before: %d\n", n);
    multiply2(&n);
    printf("After: %d\n", n);
    return (0);
}

int multiply2(int *i)
{
    *i *= 2;
    printf("Direccion de i: %p\n", &i);
    printf("Within: %d\n", *i);
    return(*i);
}