#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: head of the list
 * Return: pointer to first node
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *trav, *prev = NULL;

	if (!head || !*head)
		return (NULL);

	trav = *head;
	while (trav)
	{
		trav = trav->next;
		(*head)->next = prev;
		prev = *head;
		*head = trav;
	}
	*head = prev;
	return (prev);
}
