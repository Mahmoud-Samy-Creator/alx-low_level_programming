#include "lists.h"

/**
 * delete_nodeint_at_index - A function to delete a specific node
 * @head: head to the first pointer
 * @index: Index of node to be deleted
 * Return: 1 if suceeded, - if fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i = 0;

	if ((*head) == NULL)
		return (-1);

	current = prev = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	if (index != 0)
	{
		for (; i < index - 1 ; i++)
		{
			prev = prev->next;
		}
		if (prev == NULL)
			return (-1);
	}
	current = prev->next;
	prev->next = current->next;
	free(current);

	return (1);
}
