#include "holberton.h"

/**
 * print_line - check the code for Holberton School students.
 * @n: is the line count from main function
 * for loop sets the counter integer, a, to 1
 * if a is 0 or lower, newline
 * else print '_' with n set as number of times
 * Result: Some lines
 */
void print_line(int n)
	{
	int a;

	for (a = 1; a <= n; a++)
		{
		if (a <= 0)
			{
			_putchar('\n');
			}
		else
			{
			_putchar('_');
			}
		}
	_putchar('\n');
	}
