#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: pointer to pointer to head of a linked list
 * @str: string for new node
 * Return: address to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len = 0;
	char *newstr;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	len = _strlen(str);
	newstr = strdup(str);
	new->len = len;
	new->str = newstr;
	new->next = *head;
	*head = new;
	return (new);
}
/**
 * _strlen - determines length of string
 * @c: string
 *
 * Return: length of string
 */

int _strlen(const char *c)
{
	int len;

	for (len = 0; c[len]; len++)
	;

	return (len);
}
