#include "holberton.h"

/**
 * *rot13 - Converts strings of words using rot(ation)13 encryption
 * @s: input string
 * c is counter
 * while string at c index isn't terminating null byte
 * another while loop, while string has letters in alphabet
 * check if letters are n-z, if so, decrease by 13 ascii characters
 * otherwise, increase by 13 ascii characters
 * Return: String "encrypted" by rot13
 */
char *rot13(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		if ((s[c] >= 'a' && s[c] <= 'm') || (s[c] >= 'A' &&
		s[c] <= 'm'))
			s[c] += 13;
		else
		{
			while ((s[c] >= 'n' && s[c] <= 'z') ||
			(s[c] >= 'N' && s[c] <= 'Z'))
				s[c] -= 13;
		}
	c++;
	}
	return (s);
}
