#include <stdio.h>

/**
 * jugar - print pointers
 * Description: test pointers work
 */

void jugar(int n)
{
    n = (n + 1) * 2;
    printf("luego de jugar x vale: %d\n", n);
}
/**
 * main - test prototype
 * Return: always zero
 */

int main(void)
{
    int x = 10;
    jugar(x);
    printf("valor de original de x: %d\n", x);
    return (0);
}