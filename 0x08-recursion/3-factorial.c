#include "main.h"

/**
* factorial - Calculate the factorial of a number
* @n: the number to calculate the factorial
*
* Return: integer value
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}

else if (n > 1)
{
int result;
result = n * factorial(n - 1);
return (result);
}
else
{
return (1);
}
}
