#include "holberton.h"
/**
 * _strspn - This function returns the numbre of characters in the
 * initial segment of *s whihc consist only of characters from *accept.
 * @s: String to be scanned
 * @accept: String containing the characters to match.
 * a is counter for spot in *s string
 * b is counter for spot in *accept string
 * first for loop sets a to iterate, as long as it isn't at terminator
 * second for loop increments b, while accept string at 'b' spot
 * doesn't equal *s at 'a' spot
 * if accept string hits terminator, return 'a' (this is where char not found)
 * otherwise, route through loops until a terminator, then return length 'a'
 * Return: length of prefix substring that matches
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;


	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != s[a]; b++)
		{
			if (accept[b] == '\0')
				return (a);
		}
	}
	return (a);
}
