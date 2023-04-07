#include <stdio.h>
#include "main.h"
int check_palindrome(char *s, int start, int end);

/**
 * wildcmp -  a function that compares two string
 * @s1: the string value 1
 * @s2: the string value 2
 *
 * Return: integer value
 */
int wildcmp(char *s1, char *s2)
{
  if (*s1 == '\0' && *s2 == '\0')
    return (1);

  if (*s1 == *s2)
    return (wildcmp(s1 + 1, s2 + 1));

  if (*s2 == '*')
  {
    if (*(s2 + 1) != '\0' && *s1 == '\0')
      return (0);

    if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
      return (1);
  }

  return (0);
}
