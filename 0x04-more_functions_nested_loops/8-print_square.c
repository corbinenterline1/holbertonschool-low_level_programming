#include "holberton.h"

/**
 * print_square - prints squares, designated by input from main
 * @n: input integer from main function
 * if input is 0 or less, newline
 * else, for loop to print rows from 0 to 1 below n
 * second for loop prints columns from 0 to 1 below n
 * Result: Squares as dictated
 */
void print_square(int n)
	{
	int a;
	int b;

	if (n <= 0)
		{
		_putchar('\n');
		}
	else
		{
		for (a = 0; a < n; a++)
			{
			for (b = 0; b < n; b++)
				{
				_putchar(35);
				}
			_putchar('\n');
			}
		}
	}
