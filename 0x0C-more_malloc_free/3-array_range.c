#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers containing values from min to max
* @min: the minimum value to include in the array
* @max: the maximum value to include in the array
*
* Return: pointer to the newly created array or NULL if failed
*/
int *array_range(int min, int max)
{
int *a, i = 0;

if (min > max)
return (NULL);

a = malloc((sizeof(int) * (max - min + 1)));

if (a == NULL)
return (NULL);

while (min <= max)
{
a[i] = min;
i++;
min++;
}

return (a);
}
