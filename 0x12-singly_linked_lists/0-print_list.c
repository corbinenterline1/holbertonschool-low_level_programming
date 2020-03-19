#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: input list_t linked list
 * While list isn't null (at end), go into loop
 * if the string is null, print (nil) bit, then advance
 * print strlength, then string for each element
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int nc = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			nc++;
		}
		printf("[%d] %s\n", h->len, h->str);
		nc++;
		h = h->next;
	}
	return (nc);
}

/**
 * _strlen - determines length of string
 * @c: string
 *
 * Return: length of string
 */

int _strlen(char *c)
{
	int len;

	for (len = 0; c[len]; len++)
	;

	return (len);
}
