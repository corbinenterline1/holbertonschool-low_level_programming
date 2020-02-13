#include "holberton.h"

/**
 * print_diagonal - c
 * @n: is the diagonal line count from main function
 * First for loop is rows
 * if n, or a consequently, is 0 or less, newline
 * otherwise, for loop setting number of spaces
 * finish first for loop with the diagonal line & newline
 * Result: diagonal lines, dictated in length by n
 */
void print_diagonal(int n)
	{
	int a;
	int b;

	if (n <= 0)
		{
		_putchar('\n');
		}
	else
		{
		for (a = 1; a <= n; a++)
			{
			for (b = 1; b < a; b++)
				{
				_putchar(' ');
				}
			_putchar(92);
			_putchar('\n');
			}
		}
	}
