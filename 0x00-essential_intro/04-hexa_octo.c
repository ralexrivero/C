#include <stdio.h>

int main()
{
    int x, o;

    for(x = 0x00; x <= 0x100; x++)
        printf("0x%X = %d, ", x, x);
        putchar('\n');
    for(o = 01; o <= 010; o++)
        printf("0%O = %d\n", o, o);
    return(0);
}