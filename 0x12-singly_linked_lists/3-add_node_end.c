#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end
 * @head: a pointer to the first node of the list
 * @str: Data to be initialized to the node
 * Return: list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	if (!str)
		return (NULL);

	list_t *ptr = NULL, *new_node = NULL;
	unsigned int len = 0;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	while (str[len])
		len++;
	new_node->len = len;
	new_node->next = NULL;

	if (!head)
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
