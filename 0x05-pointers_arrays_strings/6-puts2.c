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
void puts2(char *str)
{
	char *p;
	int i;
	int l;

	l = _strlen(str);
	p = str;
	for (i = 0; i < l - 1; i += 2)
	{
		_putchar(str[i]);
		p++;
	}
	_putchar('\n');
}
