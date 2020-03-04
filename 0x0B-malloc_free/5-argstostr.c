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
 * *strcatcust - custom str concatenation
 * @s1: string to be copied onto
 * @s2: string to copy
 * first for loop gets a to end of s1
 * 2nd for loop copies s2 over to s1
 * then add terminator
 * Return: Concatenated s1
 */
char *strcatcust(char *s1, char *s2)
{
	int a, b;

	for (a = 0; s1[a] != '\0'; a++)
	;
	for (b = 0; s2[b] != '\0'; b++, a++)
		s1[a] = s2[b];
	s1[a] = '\0';
	return (s1);
}
/**
 * *argstostr - Creates a string from the arguments to main
 * @ac: number of arguments
 * @av: input pointer to strings
 * first for loop gets total length of all strings, +1 for newlines
 * then allocate memory array of l size to pointer dum
 * second for loop runs the custom string concentenator(sp?), adds newline
 * Return: NULL if anything's goofy, otherwise dum
 */
char *argstostr(int ac, char **av)
{
	int a, b, l;
	char *dum;

	l = 1;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
		l += (_strlen(av[a]) + 1);
	dum = malloc(l * sizeof(*dum));
	if (dum == NULL)
		return (NULL);
	for (b = 0; b < ac; b++)
	{
		strcatcust(dum, av[b]);
		strcatcust(dum, "\n");
	}
	if (dum == NULL || dum == 0)
		return (NULL);
	return (dum);
}
