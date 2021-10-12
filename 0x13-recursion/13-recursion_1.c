#include <stdio.h>

void recursive(int v)
{
	int a;

	for (a = 0; a < v; a++)
		putchar('-');
	printf("-> right\n");
	if (a == 10)
		return;
	recursive(v+=1);
	for (; a >= 0; a--)
		putchar('-');
	printf("<- left\n");
}

int main(void)
{
	recursive(0);

	return (0);
}
