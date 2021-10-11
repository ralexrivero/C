#include <stdio.h>

int main(void)
{
	int x = 0, y = 50;

	for(; y >= 30; y--)
	{
		printf("x: %2d\ty:%2d\n", x, y);
		x++;
	}
	return (0);
}
