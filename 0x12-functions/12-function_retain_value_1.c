#include <stdio.h>

int funct_a(void)
{
	/* the auto variables are discarded every time call function */
	int a = 0;

	a += 16;
	printf("In funct_a, a: %d", a);

	return (a);
}

int funct_b(void)
{
	/* the static variable retain the value */
	static int b = 0;
	b += 16;
	printf("In funct_b, b: %d", b);
	return (b);
}
int main(void)
{
	int a, b;

	printf("Auto\n");
	a = funct_a();
	printf("In main(), a: %d\n", a);
	a = funct_a();
	printf("In main(), a: %d\n", a);
	a = funct_a();
	printf("In main(), a: %d\n", a);
	printf("Static\n");
	b = funct_b();
	printf("In main(), b: %d\n", b);
	b = funct_b();
	printf("In main(), b: %d\n", b);
	b = funct_b();
	printf("In main(), b: %d\n", b);

	return(0);
}
