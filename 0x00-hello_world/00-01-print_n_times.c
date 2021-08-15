#include <stdio.h>

int main(void)
{
        int i = 0, j = 0;

        printf("Type a positive value: ");
        scanf("%d", &j);
        for (; i < j; i++)
        {
                printf("Print %d times\n", j);
                if (i == 9) break;
        }

}