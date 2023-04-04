#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of the list
 * Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *freeme;

	freeme = head;

	while (freeme)
	{
		head = head->next;
		free(freeme);
	}

}
