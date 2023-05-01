#include "lists.h"

/**
 * strlength - calculates string length
 * @str: string
 * Return: length
*/
unsigned int strlength(const char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node - adds a new node at the beginning
 * @head: pointer to a pointer
 * @str: string
 * Return: pointer to a struct
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	if (!head)
		return (NULL);

	newnode = malloc(sizeof(list_t));

	if (!newnode)
	{
		return (NULL);
	}

	newnode->str = strdup(str);

	if (!newnode->str)
	{
		free(newnode);
		return (NULL);
	}

	newnode->len = strlength(newnode->str);


	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
