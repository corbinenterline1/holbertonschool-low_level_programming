#include "holberton.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: input number to be printed
 * Recursive function, each iteration moves over 1 bit
 * then they all putchar the result of bitwise AND the number & 1
 * in ascii value
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');

}
