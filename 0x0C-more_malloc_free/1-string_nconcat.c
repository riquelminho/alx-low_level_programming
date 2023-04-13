#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
  unsigned int i, j, k;
  char *result;

  if (s1 == NULL)
    s1 = "";
  if (s2 == NULL)
    s2 = "";

  for (i = 0; s1[i]; i++)
    continue;

  for (k = 0; s2[k]; k++)
    continue;

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
