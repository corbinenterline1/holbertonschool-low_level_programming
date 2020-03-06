#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum number in array
 * @max: maximum number in array
 * first for loop sets t to equal maximum size of array
 * then allocate memory of size t, byte size of p's data type (int)
 * if malloc fails, return null
 * 2nd for loop copies initializes array with values from min to max
 * Return: pointer to array of numbers from min to max
 */
int *array_range(int min, int max)
{
	int a;
	int t;
	int *p;

	if (min > max)
		return (NULL);
	for (t = min; t <= max; t++)
	;
	p = malloc(t * sizeof(p));
	if (p == NULL)
		return (NULL);
	for (a = 0; min <= max; a++, min++)
		p[a] = min;
	return (p);
}
