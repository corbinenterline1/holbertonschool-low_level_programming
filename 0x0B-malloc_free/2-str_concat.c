#include "holberton.h"
#include <stdlib.h>

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
 * *str_concat - Creates a new string with s2 concatenated onto s1
 * @s1: first input string
 * @s2: second input string
 * if either string is null, convert to empty string
 * then set t to length of both strings
 * malloc the cpy array to size of t + 1
 * if cpy is null, return null
 * else, for loop copies s1 to cpy
 * then, for loop copies s2 to end of cpy, then terminator
 * Return: cpy, or NULL if failed
 */
char *str_concat(char *s1, char *s2)
{
	char *cpy;
	int t;
	int a;
	int b;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	t = (_strlen(s1) + _strlen(s2) + 1);
	cpy = malloc(t + 1);
	if (cpy == NULL)
		return (NULL);
	for (a = 0; s1[a] != '\0'; a++, c++)
		cpy[a] = s1[a];
	for (b = 0; a != t && s2[b] != '\0'; b++, a++)
	{
		cpy[a] = s2[b];
	}
	cpy [a] = '\0';
	return (cpy);
}
