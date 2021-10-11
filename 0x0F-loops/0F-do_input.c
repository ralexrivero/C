#include <stdio.h>

int main(void)
{
	int x = 0, y = 0;

	printf("Enter a value: ");
	scanf("%d", &y);

	do
	{
		printf("x: %2d\n", x);
		x++;
	}
	while(x < y);

	return (0);
}
