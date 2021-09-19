#include <stdio.h>

int main(void)
{
	int a = 1;

	while (a <= 30000)
	{
		printf("%d\12", a);
		/* multiply by 2 */
		a = a << 1;
	}

	while (a > 0)
	{
		printf("%d\12", a);
		/* is equal to divide by 2 */
		/* a = a >> 1; */
		/* assignment operator equivalent */
		a >>= 1;
	}
	return (0);
}