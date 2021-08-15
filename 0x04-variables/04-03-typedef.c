#include <stdio.h>

typedef float radius;

int main(void)
{
        radius r = 3.0;

        printf("A circle radius %.2f has an area of: %.2f\n", r, 3.14159 * r * r);
        return 0;
}