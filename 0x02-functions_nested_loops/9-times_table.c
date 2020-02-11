#include "holberton.h"

/**
 * times_table - Prints a times table from 0-9
 * int e is number of lines
 * int d is the digit
 * int r is the return of the multiplication
 * first for loop sets the number of lines, then prints a 0
 * 2nd for loop sets the digit for the rest of the line
 * we then multiply d * e to get r
 * if r is less than 10, put ',  'r
 * if greater than, put ', 'rr
 * Return: prints all the times of the day, minute by minute
 */
void times_table(void)
{
	int d;
	int e;
	int r;

	for (e = 0; e <= 9; e++)
	{
		_putchar('0');
		for (d = 1; d <= 9; d++)
		{
			r = d * e;
			if (r < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(r + '0');
				}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
				}
		}
		_putchar('\n');
	}
}
