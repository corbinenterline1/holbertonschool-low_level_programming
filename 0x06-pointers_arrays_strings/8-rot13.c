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
	int c;
	int d;
	char a1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char a2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	c = 0;
	while (s[c])
	{
		d = 0;
		while (d < 52)
		{
			if (s[c] == a1[d])
			{
				s[c] = a2[d];
				break;
			}
			d++;
		}
		c++;
	}
	return (s);
}
