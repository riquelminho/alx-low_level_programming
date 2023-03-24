<<<<<<< HEAD
#include "main.h"
#include <stdio.h>

/**
* main - check the code
*
* Return: Always 0.
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
=======
#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit (0 through 9)
 *
 * @c: integer to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
>>>>>>> 07743037b2a630c268409f73521f3186168dc14e
