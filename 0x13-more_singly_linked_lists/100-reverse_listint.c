#include "lists.h"

/**
 * reverse_listint - A function to reverse the linked list
 * @head: Head ptr points to the first node
 * Return: node address;
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *temp2 = NULL;

	if ((*head) == NULL || head == NULL)
		return (NULL);

	while ((*head) != NULL)
	{
		temp2 = (*head)->next;
		(*head)->next = temp;
		temp = (*head);
		(*head) = temp2;
	}
	(*head) = temp;

	return (*head);
}
