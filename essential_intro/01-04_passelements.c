#include <stdio.h>

/**
 * incshow - increase the character of a string by one
 * Description: convert a in b, x en y ...
 * a: te character to print
 */

void incshow(char a)
{
    a++;
    putchar(a);
}

int main(void)
{
    char text[] = "Gdkkn ";
    int x;

    for (x = 0; x < 6; x++)
    incshow(text[x]);
    putchar('\n');
    puts(text); /* confirm that the string do not change*/
    return(0);
}