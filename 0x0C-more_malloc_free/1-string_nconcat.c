#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - concatenate two string
  * @s1: string 1
  * @s2: string 2
  * @n: the maximum number of bytes to be taken from s2 
  *
  * Return:  returns a pointer to the memory block.
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
  if (s1 == NULL)
  {
    s1 = "";
  }
  if (s2 == NULL)
  {
    s2 = "";
  }
  unsigned int s1_len = 0;
  while (s1[s1_len] != '\0')
  {
    s1_len++;
  }
  unsigned int s2_len = 0;
  while (s2[s2_len] != '\0' && s2_len < n)
  {
    s2_len++;
  }
  char *result = (char *)malloc(s1_len + s2_len + 1);
  if (result == NULL)
  {
    return (NULL);
  }
  unsigned int i;
  for (i = 0; i < s1_len; i++)
  {
    result[i] = s1[i];
  }
  for (i = 0; i < s2_len; i++)
  {
    result[s1_len + i] = s2[i];
  }
  result[s1_len + s2_len] = '\0';
  return (result);
}
