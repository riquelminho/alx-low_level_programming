#include "main.h"
/**
* _strcat - concatenates 2 strings.
* @dest: string with concatenation
* @src: string to be concatenated
* Return: Always 0.
*/
char *_strcat(char *dest, char *src)
{
char *result = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (result);
}
