#include "function_pointers.h"
/**
* int_index - Searches for an integer in an array
* @array: Pointer to the array
* @size: Number of elements in the array
* @cmp: Pointer to the function to compare values
*
* Return: Index of the first element for which cmp doesn't return 0
*         -1 if no element matches or if size is less than or equal to 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && cmp && size > 0)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}

return (-1);
}
