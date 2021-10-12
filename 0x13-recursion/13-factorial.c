#include <stdio.h>

int factorial(unsigned long int f)
{
	if (f == 1)
		return (f);
	return (f * (factorial(f -1)));
}

int main(void)
{
	unsigned long int a = 0, b = 0;

	printf("Factorial calculator\nEnter a value: ");
	scanf("%ld", &a);
	b = factorial(a);
	printf("The factorial of %ld! is %ld\n",a, b); 
	
	return (0);
}
