#include "holberton.h"

/**
 * print_most_numbers - prints 0-9, minus 2 & 4
 * a@: integer used in while loop for printing
 * Result: 01356789
 */
void print_most_numbers(void)
	{
	int a;

	a = 48;
	while (a <= 57)
		{
		_putchar(a++);
		if (a == 50 || a == 52)
			{
			++a;
			}
		}
	_putchar('\n');
	}
