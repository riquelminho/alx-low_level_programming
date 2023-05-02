#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* reverse_listint - Reverses a linked list.
*
* @head: A pointer to the first node of the list.
*
* Return: A pointer to the first node of the reversed list.
**/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *next = NULL;

if (*head == NULL)
return (NULL);

while ((*head)->next != NULL)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}

(*head)->next = prev;

return (*head);
}
