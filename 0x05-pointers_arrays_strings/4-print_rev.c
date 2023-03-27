#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *str)
{
   int len = 0;
    while(str[len] != '\0') {
        len++;
    }
 int i ;
    for(i = len - 1; i >= 0; i--) {
        _putchar(str[i]);
    }
    _putchar('\n');
}
