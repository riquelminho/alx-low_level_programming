#include "main.h"
/**
* print_buffer - add 2 strings.
* @b: string1.
* @size: string2.
* Return: String with all letters in ROT13 base.
*/
void print_buffer(char *b, int size)
{
int i, j;
for (i = 0; i < size; i += 10)
{

printf("%08x: ", i);


for (j = 0; j < 10; j++)
{
if (i + j < size)
{
printf("%02x ", (unsigned char)b[i + j]);
}
else
{
printf("   ");
}

if (j == 4)
{
printf(" "); 
}
}


printf(" ");
for (j = 0; j < 10; j++)
{
if (i + j < size)
{
char c = b[i + j];
if (c >= ' ' && c <= '~')
{
printf("%c", c);
}
else
{
printf(".");
}
}
else
{
printf(" ");
}
}
printf("\n");
}
if (size <= 0 || i % 10 != 0)
{
printf("\n");
}
}
