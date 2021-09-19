#include <stdio.h>

int main(void)
{
	int a = 0;

	while (a <= 20)
		{
			printf("Loop number: %d\12", a);
			a++;
			if (a == 10)
			{
				break;
			}
		}
	return (0);
}