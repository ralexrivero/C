#include <stdio.h>

int main(void)
{
	int x = 0, y = 0;

	for (x = 0, y = 10; x <= 17; x++, y--)
		printf("x:%2d\ty:%2d\n",x, y);
	return (0);
}
