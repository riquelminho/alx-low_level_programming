#include "main.h"
/**
* print_number - print an int numbers.
* @n: number tested
* Return: Always 0.
*/
void print_number(int n)
{
if (n < 0)
{
putchar('-');
n = -n;
}

if (n >= 10)
{
print_number(n / 10);
}

putchar('0' + (n % 10));
}
