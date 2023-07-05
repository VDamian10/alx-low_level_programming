#include "lists.h"

/**
 * pop_listint - deletes the first node
 * @head: head of the node
 * Return: data inside head element
*/
int pop_listint(listint_t **head)
{
	listint_t *deleter;
	int data;

	if (!head || !*head)
		return (0);

	deleter = *head;
	data = deleter->n;
	*head = (*head)->next;
	free(deleter);

	return (data);
}
