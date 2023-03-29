#include "main.h"
/**
* reverse_array - prints reverse array.
* @a: array to be compared.
* @n: size of array.
* Return: reversed array.
*/
void reverse_array(int *a, int n)
{
int temp;
for (int i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}
}
