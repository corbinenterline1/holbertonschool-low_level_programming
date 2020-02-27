#include "holberton.h"

/**
 * sqrter - function to check properly for natural square roots
 * @a: counter number to compare to base
 * @b: base number to be compared
 * if a * a = b, return n
 * if a * a is greater than b, return
 *Return: square root of base
 */
int sqrter(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	else
		return (sqrter(++a, b));
}
/**
 * _sqrt_recursion - returns natural square root
 * @n: input number
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	return (sqrter(0, n));
}
