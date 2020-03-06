#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - Allocates memory for an array, with memory set to 0
 * @nmemb: number of elements in array
 * @size: size of each element of the array
 * Set a to be the size of nmemb * size
 * malloc memory to size of a
 * if p isn't 0, memset all the memory of the array to 0
 * Return: p;
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (a = 0; a < (nmemb * size); a++)
		p[a] = 0;	_
	return (p);
}
