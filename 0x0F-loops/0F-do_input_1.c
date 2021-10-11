#include <stdio.h>

int main(void)
{
	int x = 0, y = 0;

	printf("Enter a positive value: ");
	scanf("%d", &y);
	printf("Using while statement\n");
	while(x < y)
	{
		printf ("x:%2d\ty:%2d\n", x, y);
		x++;
	}
	printf("\nUsing for statement\n");
	for(x = 0; x < y; x++)
		printf("x:%2d\ty:%2d\n", x, y);
	return (0);
}
