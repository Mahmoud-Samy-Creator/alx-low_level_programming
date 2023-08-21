#include "lists.h"

/**
 * sum_listint - A function to sum the data in the list
 * @head: head pointer to first node
 * Return: int sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
