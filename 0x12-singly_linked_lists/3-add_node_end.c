#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end
 * @head: a pointer to the first node of the list
 * @str: Data to be initialized to the node
 * Return: list
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *ptr, *new_node;
	unsigned int length = 0;

	if (!str)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (str[length])
		length++;
	new_node->len = length;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}
	ptr = *head;
	while (ptr->next)
		ptr = ptr->next;

	ptr->next = new_node;

	return (new_node);
}
