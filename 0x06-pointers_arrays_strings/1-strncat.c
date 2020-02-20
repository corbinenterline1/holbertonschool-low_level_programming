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
 * _strncat - copies string src onto end of dest by n bytes
 * @dest: destination string
 * @src: source string that is put at end of dest string
 * set a char pointer (ptr) to end of dest with strlen
 * while source isn't null byte, and n isn't zero
 * put src byte where ptr is, then advance both, and decrease n
 * this ensures you don't put too many bytes
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest + _strlen(dest);

	while (*src != '\0' && n != 0)
	{
		*ptr++ = *src++;
		--n;
	}
	*ptr = '\0';
	return (dest);
}
