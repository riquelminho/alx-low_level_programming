#include "main.h"
#include <stdio.h>


  /**
  * number_checker - Check if number is prime
  * @n: the number to be checked
  * @i: the iteration times
  *
  * Return: 1 for prime or 0 composite
  */
int number_checker(int n, int i)
{
if (n < 2)
{
return (0);
}
if (i * i > n)
{
return (1);
}
if (n % i == 0)
{
return (0);
}
return (number_checker(n, i + 1));
}
/**
* is_prime_number - Returns if a number is prime
* @n: the number to be checked
*
* Return: integer value
*/

int is_prime_number(int n)
{
return (number_checker(n, 2));
}
