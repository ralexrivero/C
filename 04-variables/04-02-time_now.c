#include <stdio.h>
#include <time.h>

int main(void)
{
        time_t now;
/* time_t type is defined in <time.h> */

        time(&now);
        printf("%s\n", ctime(&now));
        printf("%s\n", asctime(localtime(&now)));
        printf("%p\n", now);
        return (0);
}