#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * free_list - frees a linked list list_t
 * @head: pointer to head of linked list
 * temp node struct new is set to head
 * then head is set to pointer to next
 * free string, then free node
 * loop
 */
void free_list(list_t *head)
{
	list_t *new;

	while (head != NULL)
	{
		new = head;
		head = head->next;
		free(new->str);
		free(new);
	}
	free(head);
}
