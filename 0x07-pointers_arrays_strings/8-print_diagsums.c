#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - adds up the diagonal lines of a matrix and prints results
 * first it does line from left to bottom right, then right to bottom left
 * @a: is the array
 * @size: is the size of the array
 * 'b' is main counter, 'c' is addition bucket for first diagonal
 * 'd' is addition bucket for second diagonal.
 * while 'b' is less than the size, do the following:
 * b * (size +1) to get which spot of array. This ensures it starts with zero,
 * then for each iteration moves a column over in the next row of the array
 * that result goes in c bucket.
 * (b + 1) * (size -1) starts with last column of first row, then
 * decrements 1 column on next row, and so on. Add that to bucket d.
 * increment b, do again.
 * Then printf the result of both buckets.
 */
void print_diagsums(int *a, int size)
{
	int b, c, d;

	b = c = d = 0;
	while (b < size)
	{
		c += a[b * (size + 1)];
		d += a[(b + 1) * (size - 1)];
		b++;
	}
	printf("%d, %d\n", c, d);
}
