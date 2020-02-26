#include "holberton.h"

/**
 * _puts_recursion - Puts function, done recursively
 * @s: input string
 * If statement checks if string is at terminator
 * if not, putchar s, then recursively call function +1
 * this means s[0] will be s[1] on next function copy of puts_recursion
 * and so on, until it hits terminator, then put newline.
 */
void _puts_recursion(char *s)
{

	if (s[0] != '\0')
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
