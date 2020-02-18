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
 * l is length of string
 * while counter is less than length minus 1 (account for line break)
 * putchar of string at i, then advance i twice
 * After loop, finish with newline
 * Result: The string kinda printed!
 */
void puts_half(char *str)
{
	int i = _strlen(str);

	if (i % 2 != 0)
	{
		i++;
	}
	i /= 2;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
