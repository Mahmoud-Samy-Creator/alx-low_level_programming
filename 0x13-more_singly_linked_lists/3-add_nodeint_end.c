#include "lists.h"

/**
 * add_nodeint_end - A function adds a new node at the end of a listint_t
 * @head: head pointer points to first node
 * @n: data to be added
 * Return: node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *ptr = *head;

	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (ptr)
	{
		while (ptr->next)
		{
			ptr = ptr->next;
		}
		ptr->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	return (new_node);
}
