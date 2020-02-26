#include "holberton.h"

/**
 * factorial - returns the factorial of a given number
 * @n: input number
 * if n is zero, return 1 (factorial of 0 is 1)
 * if n is less than zero, return -1
 * else, return (n * factorial(n - 1))
 * a factorial, example 4, is 4 * 3 * 2 * 1
 * so the return sets 4 * 3, then 3 * 2, then 2 * 1, etc
 * Return: factorial of number
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
