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

	for (j = 0; j < len; j++)
	{
		new[j] = str[j];
	}

	new[j] = '\0';
	return (new);

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
		return (NULL);

	newnode->str = cpme(str);
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
