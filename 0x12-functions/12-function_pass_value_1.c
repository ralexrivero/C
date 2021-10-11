#include <stdio.h>

int sum(int a, int b);

int main(void)
{
	sum(1, 3);
	sum(2, 4);
	sum(3, 19);
	return (0);
}


int sum(int a, int b)
{
	printf("%d + %d = %d\n",a, b, a + b);
}