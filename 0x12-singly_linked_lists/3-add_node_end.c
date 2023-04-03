#include "lists.h"

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
		free(newnode);
		return (NULL);
	}

	newnode->str = strdup(str);
	newnode->len = strlength(str);
	newnode->next = NULL;

	tmpnode = *head;

	while (tmpnode)
	{
		tmpnode = tmpnode->next;
	}

	tmpnode->next = newnode;

	return (newnode);

}
