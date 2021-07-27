#include "holberton.h"

/**
 * _printf - prototype that takes an argument of type char
 * @format: function prototype declaration constant char.
 * ... the elipsis means the anonim parameters
 * The formal parameter name and it too an automatic local variable
 * Only accesible by the function
 * Description: emulates printf stdio.h function
 * Return: integer number thats represent the lenght of the output
 */

int _printf(const char *format, ...)
{
va_list argumentPointer;
char *ip, *spec_s;

va_start(argumentPointer, format);
for (ip = format; *ip; ip++)
{
    if(*ip != '%')
    putchar(*ip);
    continue;
    switch(*++ip)
    {
        case '%':
            putchar('%');
            break;
        // case 's':
        //     for(spec_s = va_arg(argumentPointer, int); *spec_s; spec_s++)
        //     putchar(*spec_s);
        //     break;
        default:
            putchar(*ip);
            break;
    }
}
va_end(argumentPointer);
    putchar('\n');
    return(0);
}

int main(void)
{
    _printf("Ronald %%");
    return(0);
}