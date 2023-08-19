#include "lists.h"
/**
 * free_listint2 -  A function to free list
 * @head: head pointer points to the first node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *next_node;

    if (!head)
        return;

	if (*head)
	{
		current = *head;
		next_node = (*head)->next;

		while (next_node)
		{
			free(current);
			current = next_node;
			next_node = next_node->next;
		}
		free(next_node);
		free(current);
		current = NULL;
		next_node = NULL;
		*head = NULL;
	}
}
