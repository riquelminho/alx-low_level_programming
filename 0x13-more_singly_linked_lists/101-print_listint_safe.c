#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: A pointer to the head node of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *current;
    size_t count;

    current = head;
    count = 0;

    while (current != NULL)
    {
        printf("[%p] %d\n", (void *)current, current->n);
        count++;
        if (current <= current->next)
        {
            printf("-> [%p] %d\n", (void *)current->next, current->next->n);
            break;
        }
        current = current->next;
    }

    return (count);
}
