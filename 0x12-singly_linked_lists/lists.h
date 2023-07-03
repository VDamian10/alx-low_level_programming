#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/**
 * struct list_s - singly linked node structure
 * @str: string
 * @len: length of string
 * @next: pointer to next node
*/
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);
char *cpme(const char *str);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
unsigned int strlength(const char *str);
void free_list(list_t *head);

#endif