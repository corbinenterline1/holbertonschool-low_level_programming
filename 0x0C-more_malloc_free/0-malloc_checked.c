#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: size of memory in bytes
 * create void pointer, malloc(b) to the void pointer
 * if malloc fails, exit with status of 98
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
