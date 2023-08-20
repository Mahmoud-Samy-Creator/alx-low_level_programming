#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of a linked list
 *  and returns the head node’s data (n).
 * @head: pointer points to the first node
 * Return: int
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp = *head;

    if (!temp)
        return (0);

    data = (*head)->n;
	*head = (*head)->next;
	free(temp);
	temp = *head;

	return (data);
}