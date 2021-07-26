#include <stdio.h>
#include <stdarg.h>

void print_ints(int num, ...)
{
    va_list args;
    va_start(args, num);
    int i = 0;

    for (i = 0; i < num; i++)
    {
        int value = va_arg(args, int);
        printf("%d: %d\n", i, value);
    }
    va_end(args);
}

int main(void)
{
    print_ints(3, 24, 26, 25);
    print_ints(2, 256, 512);
    print_ints(3, 2, 1, 0);
    return(0);
}