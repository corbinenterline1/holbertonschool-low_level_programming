#include "holberton.h"

/**
 * _strncpy - Copies string to n number of bytes
 * @dest: destination string
 * @src: source string that is put at end of dest string
 * @n: number of bytes to copy
 * second for loop sets b to 0, then makes destination at spot b equal
 * source at spot b, then repeat until src at b destination is at a
 * null-terminator byte, or n is 0
 * Return: copied string at dest, to n number of bytes
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; src[a] != '\0' && a < n; a++)
		dest[a] = src[a];
	if (a < n)
	dest[a] = '\0';
	return (dest);
}
