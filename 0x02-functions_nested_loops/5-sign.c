#include "holberton.h"

/**
 * print_sign - function to print the sign of a character
 *
 * @n: character to check for value
 * Return:  + for positive, 0 for 0, / for negative
 */
int print_sign(int n)
	{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}
