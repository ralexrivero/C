#include <stdio.h>

/**
 * main - testing arrays
 * Return: zero always
 */

int main(void)
{
    int x = 10;
    int* dirx = &x;

    printf("x: %d\n", x);
    printf("Direccion de x: %x\n", dirx);
    printf("Direccion de x: %u\n", dirx);
}