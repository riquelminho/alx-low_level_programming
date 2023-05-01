#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node, starting at 0.
 *
 * Return: A pointer to the nth node of the listint_t list, or NULL if the node
 * does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i;
    listint_t *node = head;

    for (i = 0; node != NULL && i < index; i++)
    {
        node = node->next;
    }

    return (node);
}
