#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *str)
{
 int length = 0;
    while(str[length] != '\0') {
        length++;
    }
    for(int i = length - 1; i >= 0; i--) {
        _putchar(str[i]);
    }
    _putchar('\n');
}
