#include "main.h"
/**
* leet - change vowels to numbers.
* @s: analized string.
*
* Return: String with all vowels changed.
*/
char *leet(char *s)
{
int i = 0;
int j = 0;
char leet_char[5] = {'4', '3', '0', '7', '1'};
char vowels[5] = {'a', 'e', 'o', 't', 'l'};
while (s[i] != '\0')
{
j = 0;
while (j < 5)
{
if (s[i] == vowels[j] || s[i] == (vowels[j] - 32))
{
s[i] = leet_char[j];
break;
}
j++;
}
i++;
}
return (s);
}
