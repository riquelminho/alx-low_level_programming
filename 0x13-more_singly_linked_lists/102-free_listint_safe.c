#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* free_listint_safe - Frees a listint_t linked list.
* @h: A pointer to the address of the head of the list.
*
* Return: The size of the list that was free'd.
*/
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *temp, *current;

if (h == NULL || *h == NULL)
return (0);

current = *h;
while (current != NULL)
{
count++;
if (current <= current->next)
{
temp = current;
current = current->next;
free(temp);
}
else
{
free(current);
break;
}
}
*h = NULL;
return (count);
}
