#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_numbers - prints numbers followed by a newline
 * @separator: separator string to print between numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list args;

    va_start(args, n);

    for (unsigned int i = 0; i < n; i++)
    {
        printf("%d", va_arg(args, int));

        if (separator && i != n - 1)
            printf("%s", separator);
    }

    va_end(args);

    printf("\n");
}
