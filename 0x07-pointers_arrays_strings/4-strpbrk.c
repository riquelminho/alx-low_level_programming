#include "holberton.h"

/**
  * _strpbrk - search a string for any of a set of bytes
  * @s: source string
  * @accept: accepted characters
  *
  * Return: the string since the first found accepted character
  */
char *_strpbrk(char *s, char *accept)
{
  for (; *s != '\0'; s++)
  {
    for (const char *p = accept; *p != '\0'; p++)
    {
      if (*s == *p)
      {
        return s;
      }
    }
  }

  return (NULL);
}
