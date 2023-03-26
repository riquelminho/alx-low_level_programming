#include "main.h"

/**
  * times_table - Prints the 9 times table, starting with 0
  *
  * Return: empty output
  */
void times_table(void)
{  
   int i, j, product;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            product = i * j;
            printf("%2d", product);

            if (j < 9) {
                printf(", ");
            }
        }
        printf("$\n");
    }
}
