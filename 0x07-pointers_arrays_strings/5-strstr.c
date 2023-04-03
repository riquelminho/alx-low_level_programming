#include "main.h"

/**
  * _strstr - locate a substring
  * @haystack: the string to search
  * @needle: the string to find
  *
  * Return: char value
  */
char *_strstr(char *haystack, char *needle)
{
   char *start = haystack;
    while (*start) {
        char *p1 = start;
        char *p2 = needle;
        while (*p1 && *p2 && (*p1 == *p2)) {
            p1++;
            p2++;
        }
        if (*p2 == '\0') {
            return start;
        }
        start++;
    }
    return (NULL);
}
