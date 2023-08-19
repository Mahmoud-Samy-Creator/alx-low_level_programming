#include "lists.h"

/**
 * listint_len - a function that prints all the elements of a listint_t.
 * @h: head pointer
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *ptr = h;

	while (ptr)
	{
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}
