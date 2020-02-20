#include "holberton.h"

/**
 * _strlen - gets length of string
 * @s: input string
 * Increments string & l(ength) while s doesn't equal 0(line break)
 * Return: length of string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != 0)
	{
		s++;
		l++;
	}
	return (l);
}
/**
 * _strcat - Appends source (src) to end of destination (dest) string
 * overwrites terminating null byte at end of dest, then adds terminating
 * null byte
 * @dest: destination string
 * @src: source string that is put at end of dest string
 * First, create pointer (ptr), and set it's value to end of dest string
 * this is done by settin *ptr to equal dest + strinlength of dest
 * while source isn't at null byte, pointer at end of string equals source
 * aka, copy current source byte to pointer spot (end of dest string),
 * then increment both ptr & source, until null byte of source.
 * Finally, add null byte at pointer (which is at end of combined string)
 * Return: a pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest + _strlen(dest);

	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
