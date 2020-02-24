#include "holberton.h"
/**
 * _strchr - Searches string *s for first instance of c, then prints
 * string from instance of c onward.
 * @s: String to be searched
 * @c: character to search for
 * while s doesn't equal c, or terminator, increment s;
 * if s equals character of 'c', return s
 * otherwise, return null
 * Return: string, if character match is found
 */
char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
		s++;
	if (*s == c)
		return (s);
	else
		return (0);
}
