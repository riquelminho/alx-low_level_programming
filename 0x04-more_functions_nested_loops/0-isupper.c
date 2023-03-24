#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int _isupper(int c) {
    if (c >= 'A' && c <= 'Z') {
        return 1;   // c is an uppercase character
    } else {
        return 0;   // c is not an uppercase character
    }
}
