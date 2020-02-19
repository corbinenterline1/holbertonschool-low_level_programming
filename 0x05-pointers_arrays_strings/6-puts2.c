#include "holberton.h"
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
 * puts2 - Prints every other line of string
 * @str:  Input string
 * i is counter integer
 * set i to 0
 * while i is less than the string length of str
 * putchar str at i spot; increment i 2
 * Then newline after loop is complete
 * Result: Prints every other line!
 */
void puts2(char *str)
{
	int i = 0;

	while (i < _strlen(str))
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
