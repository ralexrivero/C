#include <stdio.h>
#include <string.h>

int main(void)
{
    struct person {
        char name[32];
        int iq;
    };
    struct person me;

    strcpy(me.name, "Ronald Rivero");
    me.iq = 1000;

    printf("%s has an IQ of %d\n", me.name, me.iq);

    return(0);
 }