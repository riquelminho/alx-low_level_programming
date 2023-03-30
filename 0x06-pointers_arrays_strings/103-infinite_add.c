#include "main.h"
#include <stdio.h>
/**
* infinite_add - add 2 strings.
* @n1: string1.
* @n2: string2.
* @r: buffer
* @size_r: buffer size
* Return: String with all letters in ROT13 base.
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i = 0, j = 0, k = 0;
int carry = 0, sum = 0;


while (n1[i] != '\0' || n2[j] != '\0')
{
int digit1 = (n1[i] != '\0') ? n1[i] - '0' : 0;
int digit2 = (n2[j] != '\0') ? n2[j] - '0' : 0;

sum = digit1 + digit2 + carry;
carry = sum / 10;
sum = sum % 10;

if (k >= size_r - 1)
{
return 0;
}

r[k++] = sum + '0';
i++;
j++;
}
if (carry > 0)
{
if (k >= size_r - 1)
{
return (0);
}

r[k++] = carry + '0';
}


r[k] = '\0';


int len = strlen(r);
for (i = 0; i < len / 2; i++)
{
char temp = r[i];
r[i] = r[len - i - 1];
r[len - i - 1] = temp;
}

return (r);
}
