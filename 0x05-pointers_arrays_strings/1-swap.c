#include "holberton.h"

/**
 * swap_int - Swaps the two integers
 * @a: pointer to first value
 * @b: pointer to second value
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
	{
	int c = *a;

	*a = *b;
	*b = c;
	}
