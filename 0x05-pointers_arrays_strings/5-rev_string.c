#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
 int length = 0;
    while (s[length] != '\0') {
        length++;
    }
 int i;
    for(i = length - 1; i >= 0; i--) {
        printf("%c", s[i]);
    }
}
