#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t.
 * @h: head pointer
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *ptr = h;

	if (!h)
	{
		printf("No list\n");
		return (0);
	}

	while (ptr)
	{
		printf("%d\n", ptr->n);
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}
