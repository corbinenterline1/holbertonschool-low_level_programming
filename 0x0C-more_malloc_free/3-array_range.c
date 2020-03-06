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
	int a, b, t;
	a = b = t = 0;
	
	if (min > max)
		return (NULL);
	t = max - min;
	p = malloc((t + 1) * sizeof(p));
	if (p == NULL)
		return (NULL);
	b = min;
	while (a <= t)
		p[a++] = b++;
	return (p);
}
