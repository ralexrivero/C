#include <stdio.h>

void swap(int a, int b)
{
    int t = a;
    a = b;
    b = a;
    printf("swap values: a = %d, b = %d\n", a, b);
}