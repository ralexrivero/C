#include <stdio.h>

void print_blah(int count);

int main(void)
{
	printf("John said:\n");
	print_blah(1);
	printf("Sam said:\n");
	print_blah(3);

	return (0);
}

void print_blah(int count)
{
	int i = 0;

	for (; i <= count; i++)
	{
		printf("Blah ");
	}
	putchar('\n');
}