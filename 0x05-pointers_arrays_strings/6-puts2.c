#include "holberton.h"

/**
 * puts2 - Prints every other character of string
 * @str:  Input string
 * While the string does not equal endline
 * Print string, then advance string 2
 * After loop, finish with newline
 * Result: The string printed!
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
