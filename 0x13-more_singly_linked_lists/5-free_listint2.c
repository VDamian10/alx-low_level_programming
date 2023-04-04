#include "lists.h"

/**
 * free_listint2 - frees a list and sets head to NULL
 * @head: head of the list
 * Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *freeme;

	if (!head)
		return;

	freeme = *head;

	while (*head)
	{
		*head = (*head)->next;
		free(freeme);
	}

	(*head)->next = NULL;

}
