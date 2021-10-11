#include <stdio.h>

void recursive(int a)
{
	a++;
	printf("%d\n", a);
	if (a == 5)
		return;
	recursive(a);
}

int main(void)
{
	recursive(0);

	return(0);
}