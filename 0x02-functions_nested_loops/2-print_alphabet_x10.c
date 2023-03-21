#include "main.h"

/**
<<<<<<< HEAD
* print_alphabet_x10 - Print alphabet x10 times
*
* Return: always 0
*/
void print_alphabet_x10(void)
{
char c;
int i = 0;

while (i <= 9)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
=======
 * print_alphabet_x10 - Print alphabet x10 times
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
    char c;
    int i = 0;
    while (i <= 9) 
    {
        for (c = 'a'; c <= 'z'; c++)
        {
            _putchar(c);
        }
>>>>>>> af042bb562db3879036c406270fbaf1db10fcd11

_putchar('\n');

i++;
}
}
