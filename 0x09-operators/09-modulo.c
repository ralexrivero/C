#include <stdio.h>

int main(void)
{
	int x, a;

	for(x = 1; x <= 10; x++)
	{
		a = x % 2;
		printf("%2d %% 2  = %d\12", x, a);
	}
	return (0);
}