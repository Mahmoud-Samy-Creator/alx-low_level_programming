#include "lists.h"

/**
 * free_list - A function for freeing the hole list
 * @head: head pointer points to the first node
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp = head;

	if (head->next == NULL)
	{
		free(head);
		head = NULL;
	}
	else
	{
		while (head->next)
		{
			head = head->next;
            free(temp->str);
            free(temp->len);
			free(temp);
			temp = head;
		}
		free(head);
		temp = NULL;
		head = NULL;
	}
}
