#include "lists.h"

/**
 * free_list - frees a list
 * @head: list to be freed
 * Return: nothing
*/
void free_list(list_t *head)
{
	list_t *freeme;

	if (!head)
		return;

	freeme = head;

	while (freeme)
	{
		free(freeme->str);
		free(freeme);
		freeme = freeme->next;
	}
}
