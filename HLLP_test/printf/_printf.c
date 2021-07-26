#include "holberton.h"

/**
 * _printf - prototype that takes an argument of type char
 * @format: function prototype declaration constant char.
 * The formal parameter name and it too an automatic local variable
 * Only accesible by the function
 * Description: emulates printf stdio.h function
 * Return: integer number thats represent the lenght of the output
 */

/* int _printf(const char *format, ...) */
int _printf(const char *format)
{
    int outLen;
    
    outLen = 1;

    /**
     *  %c: prints the last character
     * 
     */
    
    _putchar(format);
    _putchar('\n');
    printf("lenght of string: %i", outLen);
    _putchar('\n');
    return(outLen);
}

int main(void)
{
    _printf("r");
    return(0);
}