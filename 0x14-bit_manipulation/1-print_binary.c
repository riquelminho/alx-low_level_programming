#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	unsigned int size = sizeof(unsigned long int) * 8;
	int flag = 0;

	while (size--)
	{
		if (n & (mask << size))
			flag = 1;

		if (flag)
			_putchar((n & (mask << size)) ? '1' : '0');
	}
	if (!flag)
		_putchar('0');
}
