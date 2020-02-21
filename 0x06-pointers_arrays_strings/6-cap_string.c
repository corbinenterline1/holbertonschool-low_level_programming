#include "holberton.h"

/**
 * *cap_string - Capitalize all words in string.
 * @s: input string
 * Return: WIP
 */
char *cap_string(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (c == 0)
		{
			if (s[c] >= 'a' && s[c] <= 'z')
				s[c] -= 32;
		}
		else if (s[c] == ' ' || s[c] == '\t' || s[c] == '\n' ||
		s[c] == ',' || s[c] == ';' || s[c] == '.' ||
		s[c] == '!' || s[c] == '?' || s[c] == '"' || s[c] == '(' ||
		s[c] == ')' || s[c] == '{' || s[c] == '}')
		{
			++c;
			if (s[c] >= 'a' && s[c] <= 'z')
				s[c] -= 32;
		}
	}
	return (s);
}
