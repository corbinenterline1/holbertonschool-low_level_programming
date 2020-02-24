#include "holberton.h"

/**
 * *_memset - Fills first 'n' bytes of memory area pointed to by 's' with 'b'.
 * @s: pointer to memory area to be written to
 * @b: constant byte to fill memory pointed to by s
 * @n: number of bytes to write b into s (from first n bytes of memory)
 * Set a dummy pointer to s's address
 * while n is greater than 0
 * cast b to where dummy pointer is
 * increment dummy pointer, decrement n
 * Return: s pointer to newly written over memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *d = s;

	while (n > 0)
	{
	*d = b;
	d++;
	n--;
	}
	return (s);
}
