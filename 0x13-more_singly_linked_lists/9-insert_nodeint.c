#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at specified index
 * @head: head of the list
 * @idx: index number
 * @n: element to be added to the new node
 * Return: address to the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *trav;
	unsigned int key = 1;

	if (!head)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	trav = *head;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	while (trav)
	{
		if (key == idx - 1)
		{
			newnode->next = trav->next;
			trav->next = newnode;
			return (newnode);
		}

		if (trav->next == NULL && key == idx + 1)
		{
			newnode->next = NULL;
			trav->next = newnode;
			return (newnode);
		}

		trav = trav->next;
		key++;
	}
	return (NULL);
}
