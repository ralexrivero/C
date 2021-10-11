#include <stdio.h>

int main(void)
{
	int x = 0;

	do
	{
		printf("x:%2d\n",x);
		x++;
	}
	while(x <= 10);

	return (0);
}
