#include "lists.h"

/**
 * listint_len - number of elements in a linked list
 * @h: pointer a list
 * Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	const listint_t *v;
	size_t i;

	if (!h)
		return (0);

	v = h;
	i = 0;

	while (v)
	{
		i++;
		v = v->next;
	}

	return (i);


}
