#include "holberton.h"

/**
 * clear_bit - Clears bit of number n at spot index
 * @n: input number
 * @index: spot of number to get bit (starts at 0)
 * Return: 1 if it works, or -1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > (sizeof(n) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
