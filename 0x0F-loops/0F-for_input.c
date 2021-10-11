#include <stdio.h>

int main(void)
{
	int x = 0, y = 0;

	printf("Enter numbre of iterations: ");
	scanf("%d", &y);

	for (; x < y; x++)
	{
		printf("Repeat %d times\n", x);
	}

	return (0);
}