#include "mainh"
/**
 * _strncat - concatenate strings, defining the size of second string.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
while (*dest != '\0')
dest++;
while (n > 0 && *src != '\0')
{
*dest = *src;
dest++;
src++;
n--;
}
*dest = '\0';
return (dest);
}
