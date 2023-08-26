#include "lists.h"

/**
 * print_listint_safe - A function that prints a linked list.
 * @head: a pointer points to the first node
 * Return: number of nodes
*/

size_t print_listint_safe(const listint_t *head)
{
    size_t count = 0;
    const listint_t *temp = head;

    if (!temp)
        exit(98);

    while (temp)
    {
        printf("%d\n", temp->n);
        temp = temp->next;
        count++;
    }
    return (count);
}