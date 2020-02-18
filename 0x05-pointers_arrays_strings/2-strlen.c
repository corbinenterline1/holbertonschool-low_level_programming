#include "holberton.h"

/**
 * _strlen - Returns length of string
 * @s: char string input
 * while s doesn't equal 0 (ascii value of breakline), increase length count
 * and count on string, equally.
 * Return: l, aka length of string
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
