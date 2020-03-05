#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_memset - Fills first 'n' bytes of memory area pointed to by 's' with 'b'.
 * @s: pointer to memory area to be written to
 * @b: constant byte to fill memory pointed to by s
 * @n: number of bytes to write b into s (from first n bytes of memory)
 * Set a dummy pointer to s's address
 * while n is greater than 0
 * cast b to where dummy pointer is
 * increment dummy pointer, decrement n
 * Return: s pointer to newly written over memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *d = s;

	while (n > 0)
	{
	*d = b;
	d++;
	n--;
	}
	return (s);
}

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
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = nmemb * size;
	p = malloc(a * sizeof(unsigned int));
	if (p == NULL)
		return (NULL);
	if (p != 0)
		_memset(p, 0, a);
	return (p);
}
