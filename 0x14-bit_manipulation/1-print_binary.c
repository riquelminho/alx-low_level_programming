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
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) ? '1' : '0');
}
