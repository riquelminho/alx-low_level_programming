#include "main.h"

/**
* _strlen - check the code
* @str: string to evaluate
*
* Return: the length of the string
*/
int _strlen(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++);
return (i);
}
