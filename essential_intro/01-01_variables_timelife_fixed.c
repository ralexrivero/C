#include <stdio.h>

/**
 * swap - swap values
 * main - call swap
 * with indirection * operator reference pointer
 */
void swap(int *pa, int *pb)
{
    int t = *pa;
    *pa = *pb;
    *pb = t;
    return;
}

int main(void)
{
    int a = 21;
    int b = 17;
    printf("main before: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("main after swap: a = %d, b = %d\n", a, b);
    return(0);
}