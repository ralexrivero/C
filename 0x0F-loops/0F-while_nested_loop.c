#include <stdio.h>

int main(void)
{
	unsigned int row = 0;
	char column = 0;

	while(row <= 10)
	{
		column = 'a';
		while(column <= 'j')
		{
			printf("%2d%c\t",row, column);
			column++;
		}
		putchar('\n');
		row++;
	}
	return (0);
}
