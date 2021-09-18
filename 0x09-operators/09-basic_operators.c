#include <stdio.h>

int main(void)
{
	int a , b;
	a = 25;
	b = 8;
	
	/* basich math operators */
	printf("+ adition: %d + %d = %d\12", a, b, a + b);
	printf("- substraction: %d - %d = %d\12", a, b, a - b);
	printf("* multiplication: %d * %d = %d\12", a, b, a * b);
	printf("/ division: %d / %d = %d\12", a, b, a / b);

	/* modulus operator */ 
	/* is the remainder of division */
	printf("%d %% %d = %d\12", a, b, a % b);

	/* increment an decrement operators */

	printf("a = %d\12", a);
	/* increment a value*/
	a++;
	printf("a after increment: %d\12", a);
	/* decrement b value */
	printf("b = %d\12", b);
	b--;
	printf("b after decrement = %d\12", b);

	/* this increment dont has effect inmediatelly */
	/* take effect after the variable is used */
	printf("%d\12", a++);
	/* here apply the previous increment */
	printf("%d\12", a);
	
	/* pre increment and pre decrement value */
	/* affect the value before use */ 
	printf("%d, %d\12", ++a, --b);

	return (0);
}