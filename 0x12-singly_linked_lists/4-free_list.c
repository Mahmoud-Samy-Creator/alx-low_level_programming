#include "lists.h"

/**
 * free_list - A function for freeing the hole list
 * @head: head pointer points to the first node
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *current, *next_node;

	if (head)
	{
		current = head;
		next_node = head->next;
		while(next_node)
		{
			free(current->str);
			free(current);
			current = next_node;
			next_node = next_node->next;
		}
		free(current->str);
		free(current);
	}
}
