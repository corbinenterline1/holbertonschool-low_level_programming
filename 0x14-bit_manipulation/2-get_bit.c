#include "holberton.h"

/**
 * get_bit - Gets bit of number n at spot index
 * @n: input number
 * @index: spot of number to get bit (starts at 0)
 * if index is larger than possible size of n's bits, return -1
 * otherwise, bitwise AND 1 the index spot of n, to see the value
 * of the lsb
 * Return: the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitstatus;

	if (index > sizeof(n) * 8)
		return (-1);
	bitstatus = (n >> index) & 1;
	return (bitstatus);
}
