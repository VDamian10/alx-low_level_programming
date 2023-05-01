#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node
 * @head: head of the list
 * @index: index to get
 * Return: pointer to the nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *getme;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	getme = head;

	while (getme)
	{
		if (i == index)
			return (getme);

		getme = getme->next;
		i++;
	}
	return (NULL);
}
