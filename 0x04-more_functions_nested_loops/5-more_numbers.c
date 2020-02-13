#include "holberton.h"

/**
 * more_numbers - prints 1-14 x10
 * first for loop sets the lines
 * 2nd for loop sets the printing value
 * if the number is 10 or higher, print first number
 * then print 2nd number for all
 * result: 01234567891011121314 x 10
 */
void more_numbers(void)
	{
	int a;
	int b;

	for (a = 1; a <= 10; a++)
		{
		for (b = 0; b <= 14; b++)
			{
			if (b >= 10)
			{
			_putchar(b / 10 + '0');
			}
			_putchar(b % 10 + '0');
			}
		_putchar('\n');
		}
	}
