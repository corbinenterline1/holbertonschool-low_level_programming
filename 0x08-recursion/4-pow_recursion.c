#include "holberton.h"

/**
 * _pow_recursion - returns x to the power of y, recursively
 * @x: input number
 * @y: input exponent
 * if y is less than 0, return -1, as required by task
 * if y is 0, return 1, cause any number to factor of 0 is 1.
 * else return x to the power of n minus 1
 * Return: -1 for negatives, 1 for power of 0, x * x^y-1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
