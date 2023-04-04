#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of the list
 * Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *freeme;

	if (!head)
		return;

	while (head)
	{
		freeme = head;
		head = head->next;
		free(freeme);
	}

}
