#include "main.h"

/**
* *_strcpy - copies the string
* @dest: pointer to the buffer in which we copy the string
* @src: string to be copied
*
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int length, i;

length = 0;

while (src[length] != '\0')
{
length++;
}

for (i = 0; i < length; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';

return (dest);
}
