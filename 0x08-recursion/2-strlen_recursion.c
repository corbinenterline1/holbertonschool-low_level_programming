#include "holberton.h"

/**
 * _strlen_recursion - gets length of string using recursion
 * @s: input string
 * if the string isn't at terminator
 * return 1 + function(s + 1)
 * This calls next version of function, until string is at terminator
 * then it returns 1 for that function, each function until orginal
 * Which will equal the string length
 * Return: length of string, in bytes, else 0;
 */
int _strlen_recursion(char *s)
{

	if (s[0] != '\0')
		return (1 + _strlen_recursion(++s));
	else
		return (0);
}
