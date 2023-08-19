#include "lists.h"

/**
 * add_nodeint - A function to add new node at the beginning of a list
 * @head: head pointer points to the first node
 * @n: data to be added to the node
 * Return: new_node listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
