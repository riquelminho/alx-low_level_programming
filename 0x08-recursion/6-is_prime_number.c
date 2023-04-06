#include "holberton.h"
#include <stdio.h>
/**
  * is_prime_number - Returns if a number is prime
  * @n: the number to be checked
  *
  * Return: integer value
  */

int is_prime_number_helper(int n, int i)
{
  if (n < 2)
  {
    return 0;
  }
  if (i * i > n)
  {
    return 1;
  }
  if (n % i == 0)
  {
    return 0;
  }
  return is_prime_number_helper(n, i + 1);
}

int is_prime_number(int n)
{
  return is_prime_number_helper(n, 2);
}
