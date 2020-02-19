#include "holberton.h"

/**
 * _strcpy - mimics strcpy, copies string
 * @dest: destination string
 * @src: source string
 * ptr starts at destination
 * while source isn't at line break,
 * set destination to equal source; then increment both
 * repeat until linebreak, then set destination to linebreak
 * Return: pointer string
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
