#include "holberton.h"
#include <stdio.h>
/**
 * print_array - function that prints array by n number
 * @a: array
 * @n: number of elements in array
 * i is counter, set to 0
 * while i is less than n, print array at i point
 * during that, if i does not equal n - 1 (line break), print ", "
 * then increment i. At end, new line.
 * Result: the array's elements, printed in order!
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
