#include <stdio.h>
/* its not a c statement, is a preprocesor directive */
#define HELLO "Hello world"

int main(void)
{
        const char greetings[] = "Hello friends!";
        const int n = 105;

        puts(greetings);
        puts(HELLO);
        /* can not increment or chage the value of constant */
        /* uncomment this line cause a compilation error: */
        /* "increment of ready-only variable 'n'" */
        /* n++; */
        printf("value: %d\n", n);
        return (0);
}