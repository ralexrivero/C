#include <stdio.h>

int main(void)
{
        char *c[3];

        char x, y, z;

        c[0] = &x;
        c[1] = &y;
        c[2] = &z;

        *c[0] = 'x';
        *c[1] = 'm';
        *c[2] = 'p';


        printf("x: %c, y: %c, z: %c\n", x, y, z);

        return (0);
}