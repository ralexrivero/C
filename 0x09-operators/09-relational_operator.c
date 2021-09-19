#include <stdio.h>

int main(void)
{
	/* used to compare values */
	/* < is less than */
	/* > is greater than */
	/* <= is less than or equal to */
	/* >= is greater than or equal to */
	/* == is equal to */
	/* != is not equal to */

	int a;

	printf("Type an integer value: ");
	scanf("%d", &a);
	if (a < 10 )
		printf("You typed a value less than 10\12");
	else if (a == 10)
		printf("Yes! you type 10\12");
	else /* is greater than 10 */
		printf("You tayped a value greater than 10\12");

	return (0);
}