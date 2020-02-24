#include "holberton.h"

/**
 * print_chessboard - Prints 8x8 chessboard
 * @a: Input array, with 8 elements
 * set b & c ints as counters
 * while b or c doesn't equal 7, putchar array
 * then check if c is 7. If it is, put a newline, reset c, and increment b
 * if not, increment c, then repeat. Once while loop is complete
 * putchar the last single element, then newline
 */
void print_chessboard(char (*a)[8])
{
	int b = 0;
	int c = 0;

	while (b != 7 || c != 7)
	{
		_putchar(a[b][c]);
		if (c == 7)
		{
			_putchar('\n');
			c = 0;
			b++;
		}
		else
		{
			c++;
		}
	}
	_putchar(a[b][c]);
	_putchar('\n');
}
