#include "lists.h"
/**
 * print_list - prints all elements of a list
 * @h: pointer to the list
 * Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	int i;
	size_t j = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] nil\n");
		}

		else
		{
			printf("[%d] %s\n", h->len, h->str);
			j++;
		}

		h = h->next;
	}

	return (j);


}
