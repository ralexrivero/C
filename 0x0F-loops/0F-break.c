#include <stdio.h>

int main(void)
{
	int x = 0, y = 0;

	printf("Enter a positive value\n");
	scanf("%d", &y);
	while(x <= y)
	{
		printf("x:%d\n", x);
		if (x == 9)
			break;
		x++;
	}
	return (0);
}
