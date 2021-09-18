#include <stdio.h>

int main(void)
{
	/* single characters use single quotes */
	char a = 'A';
	char b = '.';
	char c = '3';

	/* escape sequences */
	/* untypable values uses \ */
	/* is a single character value */
	char e = '\a';
	char f = '\t';
	char g = '\?';
	char h = '\x41';

	/* double quotes for string literals */
	/* compiler automatically adds the null character terminator*/
	char d = "Hello";
}