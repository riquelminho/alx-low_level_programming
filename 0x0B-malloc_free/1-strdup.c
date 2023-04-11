#include "main.h"
#include <stdlib.h>

/**
  * _strdup - Duplicate a string
  * @str: the string to duplicate
  *
  * Return: the string duplicated
  */
char *_strdup(char *str)
{
  if (str == NULL)
  {
    return (NULL);
  }

  int len;
  while (str[len] != '\0')
  {
    len++;
  }
  char *dup;
 dup = malloc(sizeof(char) + 1);

  if (dup == NULL)
  {
    return (NULL);
  }
  int i;
  for (i = 0; i <= len; i++)
  {
    dup[i] = str[i];
  }

  return (dup);
}
