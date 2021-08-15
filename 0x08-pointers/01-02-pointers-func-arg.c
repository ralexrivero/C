#include <stdio.h>

/**
 * jugar - print pointers
 * Description: test pointers work
 * @n: jugar recieves a pointer to number 
 */

void jugar(int* n)
{
    int y = *n;
    y = (y + 1) * 2;
    *n = y;
    printf("luego de jugar x vale: %d\n", n);
}
/**
 * main - test prototype
 * Return: always zero
 */

int main(void)
{
    int x = 10;
    jugar(&x);
    printf("valor de original de x: %d\n", x);
    return (0);
}