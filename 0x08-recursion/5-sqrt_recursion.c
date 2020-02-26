#include "holberton.h"

/**
 * sqrter - takes square root of  *Return: square root
 */
int sqrter(int n, int o)
{
	if (n * n == o)
		return (n);
	if (n * n > o)
		return (-1);
	else
		return (sqrter(n + 1, o));
}
/**
 *
 *
 *
 */
int _sqrt_recursion(int n)
{
	return (sqrter(1, n));
}
