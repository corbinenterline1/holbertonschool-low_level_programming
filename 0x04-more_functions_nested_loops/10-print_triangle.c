#include "holberton.h"

/**
 * print_triangle - prints christmas trees
 * @size: input integer from main function
 * if size is less than or equal to 0, new line
 * while size is less than zero, set s to 1 less than size
 * nested while loop for when s is greater than 0
 * add space, then subract 1 from s
 * then, set t to 0; then nested while loop for when t does not equal d
 * add hashtag, and increase t, then newline, increase d, decrease size
 * Result: Trees
 */
void print_triangle(int size)
{
	int s;
	int t;
	int d;

	d = 1;
	if (size <= 0)
	{
		_putchar('\n');
	}
	while (size > 0)
	{
		s = size - 1;
		while (s > 0)
		{
			_putchar(' ');
			s--;
		}
		t = 0;
		while (t != d)
		{
			_putchar('#');
			t++;
		}
		_putchar('\n');
		d++;
		size--;
	}
}
