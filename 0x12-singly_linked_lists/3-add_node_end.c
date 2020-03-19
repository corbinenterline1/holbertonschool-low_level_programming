#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node_end - Given a reference (pointer to pointer) to the head
 * of a list and a string, appends a new node at the end
 * @head: pointer to pointer to head of a linked list
 * @str: string for new node
 * Return: address to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	int len = 0;
	char *newstr;

	last = *head;/* used in while loop */
	/* allocate new node */
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	len = _strlen(str);
	/* put in data */
	newstr = strdup(str);
	new->len = len;
	new->str = newstr;
	/* new node is last, so make next point to NULL */
	new->next = NULL;
	/* if linked list is empty, make new node head */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	/* traverse to last node */
	while (last->next != NULL)
		last = last->next;
	/* change next of last node */
	last->next = new;
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
