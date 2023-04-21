#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints any combination of characters, integers, floats, and strings
 * @format: format string indicating the types of arguments to print
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
    va_list args;
    const char *f;
    char c;
    int i;
    float flt;
    char *str;

    va_start(args, format);
    f = format;

    while (f && *f)
    {
        switch (*f)
        {
            case 'c':
                c = va_arg(args, int);
                printf("%c", c);
                break;
            case 'i':
                i = va_arg(args, int);
                printf("%d", i);
                break;
            case 'f':
                flt = (float) va_arg(args, double);
                printf("%f", flt);
                break;
            case 's':
                str = va_arg(args, char *);
                if (str == NULL)
                    printf("(nil)");
                else
                    printf("%s", str);
                break;
            default:
                f++;
                continue;
        }

        if (*(f + 1))
            printf(", ");

        f++;
    }

    va_end(args);

    printf("\n");
}
