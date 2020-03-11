#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - Function that searches for an integer
 * @array: input array
 * @size: size of array
 * @cmp: input function that compares integer
 * if array is null, size is 0 or less, or cmp functin is null, return -1
 * while size is above 0, if the function returns, return a, then increment
 * Return: a
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	while (size > 0)
	{
		if ((*cmp)(array[a]))
			return (a);
		size--;
		a++;
	}
	return (-1);
}
