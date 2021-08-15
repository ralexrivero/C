#include <stdio.h>

int main(void)
{
        int *a[5];
        int v, w, x, y, z;

        a[0] = &v;
        a[1] = &w;
        a[2] = &x;
        a[3] = &y;
        a[4] = &z;

        *a[0] = 1;
        *a[1] = 24;
        *a[2] = 78;
        *a[3] = -15;
        *a[4] = 4096;

        printf("v: %d\n", v);
        printf("w: %d\n", w);
        printf("x: %d\n", x);
        printf("y: %d\n", y);
        printf("z: %d\n", z);
        
        return (0);
}