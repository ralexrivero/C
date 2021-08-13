#include <stdio.h>

int main(void)
{
        /* specify string with doble quotes */
        char str[] = "I am unstoppable";

        /* specify single chars with single quotes */
        /* literal characters */
        char singleChar = 'a';
        
        /* specify special chars with backslash */
        char singleScape01 = '\x41';
        char singleScape02 = '\n';
        char singleScape03 = '\t';
        char singleScape04 = '\v';
        char singleScape05 = '\b';
        char singleScape06 = '\r';
        char singleScape07 = '\f';
        char singleScape08 = '\a';
        char singleScape09 = '\0';

        printf("%s\n", str);
        printf("%c\n", singleChar);
        printf("%c\n", singleScape01);
        printf("%c\n", singleScape02);
        printf("%c\n", singleScape03);
        printf("%c\n", singleScape04);
        printf("%c\n", singleScape05);
        printf("%c\n", singleScape06);
        printf("%c\n", singleScape07);
        printf("%c\n", singleScape08);
        printf("%c\n", singleScape09);
        

        return (0);
}