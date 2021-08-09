#include <stdio.h>

main(void)
{
    const char greeting[] = "Hello guys";
    const int value = 10;

    puts(greeting);
    printf("The constant value is: %d\n", value);
    return(0);
}