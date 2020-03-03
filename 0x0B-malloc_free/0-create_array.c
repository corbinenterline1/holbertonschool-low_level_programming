#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of 'size', initialized by char 'c'
 * @size: size of the array
 * @c: char to initialize the array with
 * Create a pointer *a, and an unsigned int i
 * if size is 0, return NULL
 * else, create an array of sizeof char times 'size'
 * then, for loop initializes the array with 'c'
 * Return: pointer to the array, or null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size <= 0)
		return (NULL);

	else
	{
		a = malloc(sizeof(*a) * size);
		for (i = 0; i < size; i++)
			a[i] = c;
		return (a);
	}
}
