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

	length = i;

	for (j = length - 1; j >= 0; j--)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
