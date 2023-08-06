#include "lists.h"

/**
 * print_list - A function that prints elements of a list_t list
 * @h: pointer to head
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = NULL;
	unsigned int i = 0;
	char *stdout;

	if (h == NULL)
		return (0);

	ptr = h;
	while (ptr)
	{
		count++;
		if (ptr->str == NULL)
		{
			i = 0;
			stdout = "(nil)";
		}
		else
		{
			stdout = ptr->str;
			i = ptr->len;
		}

		printf("[%d] %s\n", i, stdout);
		ptr = ptr->next;
	}
	return (count);
}

