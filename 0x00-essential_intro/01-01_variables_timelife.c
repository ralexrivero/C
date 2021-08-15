#include <stdio.h>

/**
 * swap - swap values
 * main - call swap
 * Not work really beacause the storage duration
 */
void swap(int a, int b)
{
    int t = a;
    a = b;
    b = t;
    printf("swap values: a = %d, b = %d\n", a, b);
}

int main(void)
{
    int a = 21;
    int b = 17;

    swap(a, b);
    printf("main: a = %d, b = %d\n", a, b);
    return(0);
}