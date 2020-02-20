#include "holberton.h"

/**
 * _strncpy - Copies string to n number of bytes
 * @dest: destination string
 * @src: source string that is put at end of dest string
 * @n: number of bytes to copy
 * first for loop sets a to 0, then sets dest at 'a' element,
 * the same to src at 'a' element, then increment 'a'
 * until src[a] is at terminator, or 'a' is equal to n
 * 2nd for loop ensures proper amount of terminators are input
 * Return: copied string at dest, to n number of bytes
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; src[a] != '\0' && a < n; a++)
		dest[a] = src[a];
	for ( ; a < n; a++)
	dest[a] = '\0';
	return (dest);
}
