#include <stdio.h>

/**
 * ascii - show ascii chars
 *
 *
 */

int main(void)
{
    int i = 0;

    for(i = 0; i <= 256; i++) {
        putchar(i);
    }
    putchar('\n');
    return(0);
}