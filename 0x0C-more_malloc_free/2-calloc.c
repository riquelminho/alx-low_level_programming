#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for an array and initializes it with 0
* @nmemb: number of elements in the array
* @size: size of each element
*
* Return: pointer to the allocated memory or NULL if failed
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *m;

if (nmemb == 0 || size == 0)
return (NULL);

m = malloc(nmemb * size);

if (m == NULL)
return (NULL);

for (i = 0; i < nmemb * size; i++)
m[i] = 0;

return ((void *)m);
}
