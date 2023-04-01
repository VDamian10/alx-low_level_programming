#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_list - prints all elements of a list
 * @h: pointer to the list
 * Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	int i;
	unsigned int j = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		for (i = 0; i < h->len; i++)
		{
			printf("[%d] %s", h->len, h->str);
			j++;
		}

		h = h->next;
	}

	return (j);


}
