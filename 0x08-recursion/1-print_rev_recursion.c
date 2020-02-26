#include "holberton.h"

/**
 * _print_rev_recursion - prints string in reverse, using recursion
 * @s: input string
 * base case is if string[0] doesn't equal terminator
 * print_rev_recursions first this time, which causes new printrevfunction
 * (hence the s + 1)
 * once this goes all the way to terminator, putchar result
 * it then recursively goes back through the stack of functions
 * writing the string in reverse! No newline, cause example has one
 */
void _print_rev_recursion(char *s)
{

	if (s[0] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}
