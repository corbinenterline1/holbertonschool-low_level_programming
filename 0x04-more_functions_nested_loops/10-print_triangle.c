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
void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (c = 0; c <= size; c++)
			{
				for (b = (size - 1); b > 0; b--)
					{
					_putchar(' ');
					}
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
