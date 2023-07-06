#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index x
 * @head: head of the list
 * @index: index to be deleted
 * Return: 1 if successful and -1 otherwise
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *trav, *deleter;
	unsigned int count = 0;

	if (!*head || !head || index <= 0)
		return (-1);

	trav = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(trav);
		return (1);
	}

	while (trav)
	{
		if (count == index - 1)
		{
			deleter = trav->next;
			if (!deleter)
				return (-1);
			trav->next = deleter->next;
			free(deleter);
			return (1);
		}

		if (!trav->next)
			return (-1);

		trav = trav->next;
		count++;
	}
	return (-1);
}
