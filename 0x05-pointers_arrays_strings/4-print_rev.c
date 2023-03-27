#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @str: string to be printed
 */
void print_rev(char *str)
{
 int i, j, length;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	len = i;

	for (j = length - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
