#include <stdio.h>

int main(int argc, char *argv[])
{
        int n = 0;

        for (; n < argc; n++)
        printf("argv[%d]: %s\n", n, argv[n]);
        printf("argc = %d\n", argc);
        printf("argv[%d] = %s\n", argc, argv[argc]);

        return (0);
}
