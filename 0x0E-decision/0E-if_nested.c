#include <stdio.h>

int main(void)
{
	int a = 1;

	while (a <= 20)
	{
		if (a > 6 && a < 15)
		{
			printf("*");
		}
		printf("%d\n", a);
		a++;
	}
}
