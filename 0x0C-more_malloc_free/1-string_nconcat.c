#include "holberton.h"
#include <stdio.h>
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
 * *string_nconcat - concatenates two strings
 * @s1: string to be written to
 * @s2: string to be put at end of s1
 * @n: number of bytes of s2 to copy
 * check for null strings, then get length of s1
 * check if n is longer than s2, if so, just use s2 length
 * assign memory to size of t, then check if malloc was valid
 * then copy s1 to p, then put s2 at end of p
 * Return: pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int t, t2, a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s1 = "";
	t = _strlen(s1);
	t2 = _strlen(s2);
	if (n >= t2)
	{
		p = malloc((t + t2 + 1) * sizeof(char));
		n = t2;
	}
	else
		p = malloc((t + n + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (a = 0; s1[a] != '\0'; a++)
		p[a] = s1[a];
	for (b = 0; b < n; b++, a++)
		p[a] = s2[b];
	p[a] = '\0';
	return (p);
}
