#include "lists.h"

/**
 * get_nodeint_at_index - A function to get the data at a certain position
 * @head: pointer to head node
 * @index: index to get data from
 * Return: pointer to struct node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int pos = index + 1;
	listint_t *temp = head;

	while (pos != 1)
	{
		temp = temp->next;
		pos--;
	}

	return (temp);
}
