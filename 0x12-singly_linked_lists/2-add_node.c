#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * @head: pointer to a pointer
 * @str: string
 * Return: pointer to a struct
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	newnode->str = strdup(str);
	newnode->next = *head;

	*head = newnode;

	free(newnode->str);
	free(newnode);
	return (*head);
}
