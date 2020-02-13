#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - Prints a times table from 0-9
 * @n: is the number called from main
 * int d is the temp int used in upcoming for loops
 * if number is less than 98, print "number, " until 98, then newline
 * if number is greater than 98, print same, but down to 98
 * else, if n is 98, print 98 then newline
 * Return: Prints natural numbers up to 98, down to 98, or just 98.
 */
void print_to_98(int n)
{
	int d;

	if (n < 98)
	{
		for (d = n; d < 99; d++)
		{
			if (d < 98)
			{
				printf("%d, ", d);
			}
			else
			{
				printf("%d\n", d);
			}
		}
	}
	if (n > 98)
	{
		for (d = n; d >= 98; d--)
		{
			if (d > 98)
			{
				printf("%d, ", d);
			}
			else
			{
				printf("%d\n", d);
			}
		}
	}
	else
	{
		if (n == 98)
		{
			printf("%d\n", n);
		}
	}
}
