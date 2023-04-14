#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* string_nconcat - concatenates two strings
* @s1: first string
* @s2: second string
* @n: number of bytes to concatenate from s2
*
* Return: concatenated string or NULL if failed
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i=0, j, k=0;
char *result;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[i])
i++;

while (s2[k])
k++;

if (n >= k)
n = k;

result = malloc(sizeof(char) * (i + n + 1));

if (result == NULL)
return (NULL);

for (j = 0; j < i; j++)
result[j] = s1[j];

for (k = 0; k < n; k++)
result[j + k] = s2[k];

result[j + k] = '\0';

return (result);
}
