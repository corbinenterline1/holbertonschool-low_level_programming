#include "holberton.h"

/**
 * *cap_string - Capitalize all words in string.
 * @s: input string
 * Return: WIP
 */
char *cap_string(char *s)
{
	int c;

	c = 0;
	if (s[c] >= 'a' && s[c] <= 'z')
		s[c] -= 32;
	for (; s[c] != '\0'; c++)
	{
		if (s[c] == ' ' || s[c] == 9 || s[c] == 10 ||
		s[c] == ',' || s[c] == ';' || s[c] == '.' ||
		s[c] == '!' || s[c] == '?' || s[c] == '"' || s[c] == '(' ||
		s[c] == ')' || s[c] == '{' || s[c] == '}')
		{
			if (s[c + 1] >= 'a' && s[c + 1] <= 'z')
				s[c + 1] -= 32;
		}
	}
	return (s);
}
