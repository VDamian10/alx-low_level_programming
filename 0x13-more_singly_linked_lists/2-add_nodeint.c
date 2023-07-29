#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * @head: beginning of the node
 * @n: element to be added
 * Return: pointer to a struct
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (!head)
		return (NULL);

	newnode = malloc(sizeof(listint_t));

	if (!newnode)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
