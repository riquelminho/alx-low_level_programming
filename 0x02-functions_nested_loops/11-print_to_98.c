#include "main.h"
/**
 * print_times_table - check the code
 * @n: The multiplication table requested.
 * Return: Nothing.
 */
void print_times_table(int n)
{
 if (n <= 98) {
        for (int i = n; i < 98; i++) {
            printf("%d, ", i);
        }
    } else {
        for (int i = n; i > 98; i--) {
            printf("%d, ", i);
        }
    }
    printf("98\n");
}
