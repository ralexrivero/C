#include <stdio.h>

char *name(void)
{
	char name[] = "John Doe";

	return (name);
}

char *country(void)
{
	static char country[] = "USA";

	return (country);
}

int main(void)
{
	printf("Name: %s\n", name());
	printf("Country: %s\n", country());
}

/**
 * in first call function returns address of local variable and fail
 * in second call function returns address of static variable and succeed
 * static makes the function dont discard the adress variable country
 */