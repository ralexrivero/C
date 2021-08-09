#include <stdio.h>

#define HELLO "Hello world"

int main(void)
{
        const char greetings[] = "Hello friends!";
        const int cVarInt_n = 105;

        puts(greetings);
        puts(HELLO);
        /* can not increment or chage the value of constant */
        printf("value: %d\n", cVarInt_n);
        return (0);
}