#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int x, y, z;

	y = 0;
	z = 0;

	while (s[y] != '\0')
	{
		y++;
	}

	z = y - 1;

	for (i = 0; i < ly / 2; i++)
	{
		tmp = s[i];
		s[i] = s[z];
		s[z--] = tmp;
	}
}
