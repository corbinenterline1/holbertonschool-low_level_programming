#include "search_algos.h"


/**
 * linear_search - linear search algorithm
 * @array: pointer to first element of array
 * @size: number of elements in array
 * @value: value to search for
 * Return: First index where value is located, -1 if not present
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
