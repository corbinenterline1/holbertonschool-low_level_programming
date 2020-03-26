#include "holberton.h"

/**
 * binary_to_uint - converts binary string to unsigned int
 * @b: input string
 * Return: converted number, or 0 if something fails
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k, i, l;
	int c;

	l = _strlen(b);
	k = 1; /* used for base-q expansion */
	i = 0;
	if (b == NULL)
		return (0);
	for (c = l - 1; c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
		if (b[c] == '1')
			i += k;
		k *= 2;
	}
	return (i);
}

/**
 * _strlen - Returns length of string
 * @s: char string input
 * while s doesn't equal 0 (ascii value of breakline), increase length count
 * and count on string, equally.
 * Return: l, aka length of string
 */
unsigned int _strlen(const char *s)
{
	int l = 0;

	while (*s != 0)
	{
		s++;
		l++;
	}
	return (l);
}
