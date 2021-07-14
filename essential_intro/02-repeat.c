#include <stdio.h>
/**
 * main - scan and print any times
 * Description: repeat the user value n times, if greater than 9 stop
 */

int main(void)
{
    int a, b;

    printf("Type a positive value: ");
    scanf("%d", &b);
    for(a = 0; a < b & a < 10; a++)
    {
        printf("Repeat this %d times\n", b);
    }
    return(0);
}