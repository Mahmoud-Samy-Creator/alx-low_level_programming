#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Insert a new node at a given positiion.
 * @head: First node address.
 * @idx: Position of the new node to be inserted in.
 * @n: Data of the new node.
 * Return: Address of the new node.
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;
	unsigned int pos = idx;

	if (*head == NULL && idx != 0)
		return (NULL);

	if (idx != 0)
	{
		temp = *head;
		pos--;
		while (pos != 1 && temp != NULL)
		{
			temp = temp->next;
			pos--;
		}

	if (temp == NULL)
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
