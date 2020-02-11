#include "holberton.h"

/**
 * print_last_digit - print last digit
 * @d: value
 * If n is greater than 0, putchar a + '0'..
 * If n is less than 0, get its absolute number
 * absolute is calculated by multiplying number by 2, then subtracting itself
 * Return: prints value of last digits
 */
int print_last_digit(int d)
	{
	int n;

	n = d % 10;
	if (n < 0)
	{
	n = (n - (n * 2));
	}
	_putchar(n + '0');
	return (n);
}
