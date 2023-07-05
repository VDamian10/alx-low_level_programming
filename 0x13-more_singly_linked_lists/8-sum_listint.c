#include "lists.h"

/**
 * sum_listint - calculates the sum of all n elements in a list
 * @head: head of the list
 * Return: sum of all elements
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
