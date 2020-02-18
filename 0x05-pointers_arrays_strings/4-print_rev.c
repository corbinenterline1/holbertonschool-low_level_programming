#include "holberton.h"

/**
 * print_rev - Prints string in reverse
 * @s: input string
 * counter integer 'a' to 0
 * increment a to equal string length, minus line break
 * decrement once to remove space at end
 * now while a is greater than or equal to 0,
 * putchar s[at numbered spot of 'a']
 * decrement a by 1
 * repeat until string is done, then newline
 * Result: String in reverse, with no extra space!
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	a--;
	while (a >= 0)
	{
		_putchar(s[a]);
		a--;
	}
	_putchar('\n');
}
