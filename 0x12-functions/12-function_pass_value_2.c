#include <stdio.h>

/**
 * main - pass values to the function
 * Return: always zero
 */

int main(void)
{
    int n = 5;

    printf("Before: %d\n", n);
    multiply(n);
    printf("After: %d\n", n);
    return (0);
}

int multiply(int i)
{
    i *= 2;
    printf("Within: %d\n", i);
    return (i);
}