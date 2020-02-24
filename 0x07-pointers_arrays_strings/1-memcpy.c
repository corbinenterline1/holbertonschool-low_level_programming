#include "holberton.h"

/**
 * *_memcpy - Copies 'n' bytes from memory area 'src' to memory area 'dest'
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to copy from src to dest
 * Set a pointer 'd'  to dest memory area
 * Set a pointer 's' to src memory area
 * While n is greater than 0;
 * set s into d, increment both, decrement n
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	char *s = src;

	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dest);
}
