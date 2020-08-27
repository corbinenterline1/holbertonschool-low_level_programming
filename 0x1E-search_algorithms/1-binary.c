#include "search_algos.h"


/**
 * binary_search - binary search algorithm
 * @array: pointer to first element of array, assumed sorted in asc.
 * @size: number of elements in array
 * @value: value to search for, assumed only appears once
 * Return: Index where value is located, -1 if not present
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, l, m, s;

	i = 0;
	l = size - 1;
	m = l / 2;
	if (array == NULL)
		return (-1);
	while (i <= l)
	{
		printf("Searching in array: ");
		for (s = i; s < l; s++)
			printf("%d, ", array[s]);
		printf("%d\n", array[s]);
		if (array[m] < value)
			i = m + 1;
		else if (array[m] == value)
			return (array[m]);
		else
			l = m - 1;
		m = (i + l) / 2;
	}
	return (-1);
}
