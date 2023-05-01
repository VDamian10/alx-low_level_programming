#include "lists.h"

/**
 * list_len - calculate the number of elements in a linked list
 * @h: pointer to a struct
 * Return: number of elements
*/
size_t list_len(const list_t *h)
{
	size_t j = 0;
/*
*	if (h == NULL)
*	{
*		printf("[0] (nil)\n");
*	}
*/
	while (h != NULL)
	{
		h = h->next;
		j++;
	}

	return (j);
}
