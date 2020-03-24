#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * pop_listint - Deletes head node, and returns its data
 * @head: pointer to pointer to head node
 * Return: data from deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *del;
	int a;

	if (*head == NULL || head == NULL)
		return (0);
	del = *head;
	a = del->n;
	*head = del->next;
	free(del);
	return (a);
}
