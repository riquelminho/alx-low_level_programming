#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* op_add - Returns the sum of two integers.
* @a: First integer.
* @b: Second integer.
* Return: The sum of a and b.
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**

* op_sub - Returns the difference between two integers.
* @a: First integer.
* @b: Second integer.
* Return: The difference between a and b.
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**

* op_sub - Returns the product of two integers.
* @a: First integer.
* @b: Second integer.
* Return: The miltuple between a and b.
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - ...
  * @a: ...
  * @b: ...
  *
  * Return: ...
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - Returns the remainder of the division of two integers.
  * @a: ...
  * @b: ...
  *
  * Return: ...
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
