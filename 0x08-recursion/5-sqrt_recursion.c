#include "main.h"
#include <stdio.h>

int _sqrt_helper(int n, int i);
 /**
  * _sqrt_recursion - Returns the natural square root of a number
  * @n: number to calculate the natural square root
  *
  * Return: the natural square root
  */

int _sqrt_recursion(int n) {
    return _sqrt_helper(n, 1);
  /**
  * _sqrt_helper - Calculates natural square root
  * @n: number to calculate the square root
  * @i: iterate number
  *
  * Return: the natural square root
  */
}

int _sqrt_helper(int n, int i) {
    if (n < 0) { // square root of negative number is not real
        return -1;
    }
    if (n == 0 || n == 1) { // base case
        return n;
    }
    if (i * i == n) { // square root found
        return i;
    }
    if (i * i > n) { // square root not found, return -1
        return -1;
    }
    // increment i and try again
    return _sqrt_helper(n, i + 1);
}
