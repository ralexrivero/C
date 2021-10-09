/* comparision ? true : false */
/* 1 is true, 0 is false */

#include <stdio.h>

int main(void)
{
	int i = 0;

	for (i = 1; i <= 20; i++)
		printf("%d is %s\n", i, i % 2 ? "odd" : "even");

	return (0);
}
