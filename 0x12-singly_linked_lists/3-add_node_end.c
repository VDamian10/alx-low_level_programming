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
 * cpme - duplicates a string
 * @str: string to be duplicated
 * Return: pointer to a string
*/

char *cpme(const char *str)
{
	char *new;
	unsigned int i, j, len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	new = malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
	{
		new[j] = str[j];
	}

	new[j] = '\0';
	return (new);
}

/**
 * add_node_end - adds a new node to the end
 * @head: head of the list
 * @str: string to be added
 * Return: pointer to the new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *trav;

	if (!*head)
	{
		newnode = malloc(sizeof(list_t));
		if (!newnode)
			return (NULL);

		newnode->str = cpme(str);
		newnode->len = strlength(newnode->str);
		newnode->next = NULL;
		*head = newnode;
	}

	trav = *head;
	while (trav->next)
		trav = trav->next;

	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);

	newnode->str = cpme(str);
	newnode->len = strlength(newnode->str);
	newnode->next = NULL;
	trav->next = newnode;

	return (newnode);
}
