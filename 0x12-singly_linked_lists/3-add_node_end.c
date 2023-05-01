#include "lists.h"

/**
 * strlength - calculates string length
 * @str: string
 * Return: length
*/
unsigned int strlength(const char *str)
{
	unsigned int i;

	if (!str)
		return (-1);

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
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
	list_t *tmpnode;

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

	newnode->len = strlength(str);
	newnode->next = NULL;

	tmpnode = *head;

	if (!*head)
	{
		*head = newnode;
		return (newnode);
	}

	while (tmpnode->next)
	{
		tmpnode = tmpnode->next;
	}

	tmpnode->next = newnode;

	return (newnode);

}
