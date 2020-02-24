#include "holberton.h"


/**
 * _strpbrk - Finds first character in *s that matches
 * any character in *accept (excluding terminators)
 * @s: String to be scanned
 * @accept: string containing the characters to match.
 * set char variable c, and char pointer p
 * for loop sets c at string, as long as c isn't at terminator, increment
 * and continue to set c to *s
 * 2nd for loop sets pointer to accept, increments pointer if not terminator
 * if c equals pointer, return string (which will be at that spot)
 * Return: string at first instance of matching char, or null if none.
 */
char *_strpbrk(char *s, char *accept)
{
	char c;
	char *p;

	for (c = *s; *s != '\0'; s++)/** can also set c to *s at end of for */
	{
		c = *s;
		for (p = accept; *p != '\0'; p++)
		{
			if (c == *p)
				return (s);
		}
	}
	return (0);
}
