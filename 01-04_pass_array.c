#include <stdio.h>

/**
 * incshow - pass an array and increment
 * by one the character
 * Description: convert a in b, w in x ...
 * Return: always zero
 */

void incshow(char array[])
{
    int x;

    for(x = 0; x < 6; x++)
    {
        array[x]++;
        putchar(array[x]);
    }
}

int main()
{
    char text[] = "Gdkkn ";
    
    incshow(text);
    putchar('\n');
    return(0);
    puts(text); /* confirm the string really change  */
}