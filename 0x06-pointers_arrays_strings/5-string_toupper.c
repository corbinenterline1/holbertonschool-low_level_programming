#include "holberton.h"

/**
 * *string_toupper - converts string to uppercase
 * @s: input string
 * set counter int 'c' to 0
 * while string at 'c' element doesn't equal terminating null byte
 * if any string characters are lowercase, make them uppercase (ascii values)
 * after, or if skipped, then increment c, until terminator.
 * Return: uppercase string!
 */
char *string_toupper(char *s)
{
	int c;

	c = 0;
	while (s[c] != '\0')
	{
	if (s[c] >= 'a' && s[c] <= 'z')
		s[c] -= 32;
	c++;
	}
	return (s);
}
