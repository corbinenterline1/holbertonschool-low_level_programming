#include "holberton.h"

/**
 * binary_to_uint - converts binary string to unsigned int
 * @b: input string
 * Return: converted number, or 0 if something fails
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int bit, i;

	for (i = 0; b[i]; i++)
	{
		bit = b[i] - '0';
		if (bit != 0 && bit != 1)
			return (0);
		sum <<= 1;
		if (bit & 1)
			sum |= 1;
	}
	return (sum);
}
