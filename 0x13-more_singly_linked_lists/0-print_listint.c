#include "lists.h"

/**
 * print_listint - prints a list
 * @h: singly linked list
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *printer;
	size_t i;

	if (!h)
		return (0);

	printer = h;
	i = 0;

	while (printer)
	{
		printf("%d\n", printer->n);
		printer = printer->next;
		i++;
	}

	return (i);

}
