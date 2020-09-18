#include "search_algos.h"
/**
 * binary_search - binary search algorithm
 * @array: pointer to the first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: Index where value is located, -1 if poo
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, j, mid;
	size_t end = size - 1;

	if (!array)
		return (-1);
	while (i <= end)
	{
		mid = (i + end) / 2;
		printf("Searching in array: ");
		for (j = i; j < end; j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[j]);
		if (array[mid] > value)
			end = mid - 1;
		else if (array[mid] < value)
			i = mid + 1;
		else
			return (mid);
	}
	return (-1);
}
