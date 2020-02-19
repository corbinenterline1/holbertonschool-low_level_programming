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
 * puts_half - prints second half of string
 * @str: input string
 * int i is counter
 * i equals string length
 * if i modulo 2 has results
 * increment i, then try again
 * once i % 2 has no remainder, divide i by 2
 * this gets half the string value (accounts for odd numbered string)
 * while string at i position doesn't equal line break
 * putchar of string at spot i, then advance i, then loop
 * Result: The string printed half!
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
