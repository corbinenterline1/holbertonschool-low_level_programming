#include "holberton.h"

/**
 * times_table - Prints a times table from 0-9
 * First for loop sets e as number of total lines
 * Then sets c=0, then nested for to set the multiplier, d
 * d starts at 0, is multiplied by c, then adds ', ' and advances
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
