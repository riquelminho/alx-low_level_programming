#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a newline
 * @separator: separator string to print between strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list args;

    va_start(args, n);

    for (unsigned int i = 0; i < n; i++)
    {
        char *str = va_arg(args, char *);

        if (str == NULL)
            printf("(nil)");
        else
            printf("%s", str);

        if (separator && i != n - 1)
            printf("%s", separator);
    }

    va_end(args);

    printf("\n");
}
