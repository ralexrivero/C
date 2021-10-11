#include <stdio.h>

int main(void)
{
	unsigned int row = 0;
	char column = 0;

	for (; row < 10; row++)
	{
		for(column = 'A'; column <= 'J'; column++)
		{
			printf("%2d%c", row, column);
		}
		putchar('\n');
	}
	return (0);
}
