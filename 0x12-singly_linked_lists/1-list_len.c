#include "lists.h"

/**
 * list_len - calculate the number of elements in a linked list
 * @h: pointer to a struct
 * Return: number of elements
*/
size_t list_len(const list_t *h)
{
	int j = 0;

	while (h)
	{
		j++;
		h = h->next;
	}

	return (j);
}
