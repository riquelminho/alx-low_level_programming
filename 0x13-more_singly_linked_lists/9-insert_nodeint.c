#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: A pointer to the head of the listint_t list.
 * @idx: The index of the list where the new node should be added.
 * @n: The integer to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed to be added.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    unsigned int i = 0;
    listint_t *new_node, *temp;

    if (head == NULL)
        return (NULL);

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    temp = *head;

    if (idx == 0)
    {
        new_node->next = temp;
        *head = new_node;
        return (new_node);
    }

    while (i < idx - 1)
    {
        if (temp == NULL || temp->next == NULL)
        {
            free(new_node);
            return (NULL);
        }
        temp = temp->next;
        i++;
    }

    new_node->next = temp->next;
    temp->next = new_node;

    return (new_node);
}
