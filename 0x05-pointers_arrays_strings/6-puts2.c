#include "main.h"

/**
* puts2 - prints one char out of 2
* followed by a new line
* @str: string to print the chars from
*/
void puts2(char *str)
{
int i, length;

length = 0;

while (str[length] != '\0')
{
length++;
}

for (i = 0; i < length; i += 2)
{
_putchar(str[i]);
}

_putchar('\n');
}
