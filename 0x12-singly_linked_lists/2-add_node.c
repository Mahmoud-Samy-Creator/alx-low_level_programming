#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));
	unsigned int len = 0;

	while (str[len])
		len++;

	if (!ptr)
		return (NULL);

	ptr->next = (*head);
	ptr->len = len;
	ptr->str = strdup(str);
	(*head) = ptr;

	return (*head);
}
