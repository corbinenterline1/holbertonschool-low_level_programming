#include "holberton.h"
#include <stdlib.h>

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
/**
 * *_strdup - returns a pointer to a new string that's duplicated from str
 * @str: input string
 * if str isn't null, get length of string with l
 * Then allocate array of cpy to `l` elements
 * if the copy is empty, or null, return null, else run memcpy
 * Return: cpy if successfull, NULL otherwise
 */
char *_strdup(char *str)
{
	char *cpy;
	int l;

	if (str == NULL)
		return (NULL);
	{
		for (l = 0; str[l] != '\0'; l++)
		;
		l++;
		cpy = malloc(l);
		if (cpy == NULL || cpy == 0)
			return (NULL);
		else if (cpy)
			_memcpy(cpy, str, l);
		return (cpy);
	}
}
