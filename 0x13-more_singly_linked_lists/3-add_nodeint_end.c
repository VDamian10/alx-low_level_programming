#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of the list
 * @head: head of the node
 * @n: element to be added
 * Return: address to the new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *trav;

	if (!head)
		return (NULL);

	newnode = malloc(sizeof(listint_t));

	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (!*head)
	{
		*head = newnode;
		return (newnode);
	}

	trav = *head;

	while (trav->next)
	{
		trav = trav->next;
	}

	trav->next = newnode;

	return (newnode);
}
