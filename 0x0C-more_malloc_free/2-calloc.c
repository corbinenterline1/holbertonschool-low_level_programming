#include "holberton.h"
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
	unsigned int a, b;
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = nmemb * size;
	p = malloc(a * sizeof(unsigned int));
	if (p == NULL)
		return (NULL);
	for (b = 0; b < size; b++)
		*(p + (size * b) = 0;
	return (p);
}
