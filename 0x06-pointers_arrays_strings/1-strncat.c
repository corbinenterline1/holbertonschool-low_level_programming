#include "holberton.h"

/**
 * @dest: destination string
 * @src: source string that is put at end of dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++);
	for (b = 0; src[b] != '\0' && n != 0; b++, n--)
	{
		dest[a + b] = src[b];
	}
	return (dest);
}
