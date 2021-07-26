#include "holberton.h"

int _printf(const char *format, ...)
// void print_all(const char * const format, ...)
{
	va_list u;
/*	char *separator = ", "; */
	int i = 0, j;

	base_t cSpecifier[] = {
		{"c", pac},
		{"i", pai},
		{"f", paf},
		{"s", pas},
		{NULL, NULL}
	};

	va_start(u, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (*(cSpecifier[j].pm) == format[i])
			{
				cSpecifier[j].f(u);

				if (format[i + 1])
				{
					printf("%s", separator);
				}
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(u);
}


/**
 * pac - main for string
 * @p: pointer to arg
 * Description: print char
 * Return: char to main
 */

void pac(va_list p)
{
	printf("%c", (char)va_arg(p, int));
}

/**
 * pai - main int
 * @p: pointer to arg
 * Description: print int
 * Return: the int
 */

void pai(va_list p)
{
	printf("%i", va_arg(p, int));
}

/**
 * paf - main float
 * @p: pointer to arg
 * Description: print float
 * Return: the float
 */

void paf(va_list p)
{
	printf("%f", (float)va_arg(p, double));
}

/**
 * pas - main string
 * @p: pointer to arg
 * Description: This function prints a string.
 * Return: Nothing.
 */

void pas(va_list p)
{
	char *container = va_arg(p, char*);

	switch ((int)(!container))
	case 1:
	{
		container = "(nil)";
	}

	printf("%s", container);
}